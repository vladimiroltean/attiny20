`include "defines.vh"
module signal_generation_unit (
        input  wire  [`STATE_COUNT-1:0] state,
        input  wire                     cycle_count,
        input  wire [`OPCODE_COUNT-1:0] opcode_type,
        input  wire  [`GROUP_COUNT-1:0] opcode_group,
        output wire [`SIGNAL_COUNT-1:0] signals
    );

    /* Control signals */

    /* Register interface logic */
    assign signals[`CONTROL_REG_RR_READ] = 
            (state == `STATE_ID) &&// || state == `STATE_EX) &&
            (opcode_group[`GROUP_ALU_TWO_OP] ||
            ((opcode_group[`GROUP_STORE_INDIRECT] ||   // X, Y sau Z
              opcode_group[`GROUP_LOAD_INDIRECT]) &&
             !opcode_group[`GROUP_STACK])  ||
            (opcode_group[`GROUP_STORE] &&
            !opcode_group[`GROUP_STACK]) ||
             opcode_type == `TYPE_MOV ||
             opcode_type == `TYPE_OUT);
    // unofficial
    assign signals[`CONTROL_REG_RR_WRITE] =
            (state == `STATE_WB) &&
            (opcode_type == `TYPE_LD_X_PREDEC ||
             opcode_type == `TYPE_LD_Y_PREDEC ||
             opcode_type == `TYPE_LD_Z_PREDEC ||
             opcode_type == `TYPE_LD_X_POSTINC ||
             opcode_type == `TYPE_LD_Y_POSTINC ||
             opcode_type == `TYPE_LD_Z_POSTINC ||
             opcode_type == `TYPE_ST_X_PREDEC ||
             opcode_type == `TYPE_ST_Y_PREDEC ||
             opcode_type == `TYPE_ST_Z_PREDEC ||
             opcode_type == `TYPE_ST_X_POSTINC ||
             opcode_type == `TYPE_ST_Y_POSTINC ||
             opcode_type == `TYPE_ST_Z_POSTINC ||
             opcode_type == `TYPE_MUL);
    assign signals[`CONTROL_REG_RD_READ] =
            (state == `STATE_ID) &&// || state == `STATE_EX) &&
            (opcode_group[`GROUP_ALU] ||
             opcode_group[`GROUP_ALU_IMD] ||
            ((opcode_group[`GROUP_STORE_INDIRECT] ||   // X, Y sau Z
              opcode_group[`GROUP_LOAD_INDIRECT]) &&
             !opcode_group[`GROUP_STACK]));
    assign signals[`CONTROL_REG_RD_WRITE] = 
            signals[`CONTROL_REG_RR_WRITE] ||
            ((state == `STATE_WB) &&
            (opcode_group[`GROUP_REGISTER] ||
            (opcode_group[`GROUP_ALU]  && opcode_type != `TYPE_CP)  ||
            (opcode_group[`GROUP_ALU_IMD] && opcode_type != `TYPE_CPI) ||
            (opcode_group[`GROUP_LOAD] && opcode_type != `TYPE_RET && opcode_type != `TYPE_RETI) ||
             opcode_type == `TYPE_IN));

    /* Memory interface logic */
    assign signals[`CONTROL_MEM_READ] =
           (state == `STATE_MEM) &&// || state == `STATE_WB) &&
           opcode_group[`GROUP_LOAD];
    assign signals[`CONTROL_MEM_WRITE] =
           (state == `STATE_MEM) &&
           opcode_group[`GROUP_STORE];

    /* TODO 2: Logica de interfatare a IO */
    assign signals[`CONTROL_IO_READ] = 
        (state == `STATE_ID) &&// || state == `STATE_EX) &&
        opcode_group[`GROUP_IO_READ];
    assign signals[`CONTROL_IO_WRITE] =
        (state == `STATE_WB) &&
        opcode_group[`GROUP_IO_WRITE];

    assign signals[`CONTROL_SP_POSTDEC] =
            (opcode_type == `TYPE_PUSH  ||
             opcode_type == `TYPE_RCALL ||
             opcode_type == `TYPE_CALL_ISR) &&
            (state == `STATE_MEM);
    assign signals[`CONTROL_SP_PREINC] =
            (opcode_type == `TYPE_POP) ?
                (state == `STATE_EX) :
            (opcode_type == `TYPE_RET || opcode_type == `TYPE_RETI) &&
                (state == `STATE_EX || (state == `STATE_MEM && cycle_count == 0));

    assign signals[`CONTROL_PREDEC] =
        (state == `STATE_EX) &&
        (opcode_type == `TYPE_LD_X_PREDEC ||
         opcode_type == `TYPE_LD_Y_PREDEC ||
         opcode_type == `TYPE_LD_Z_PREDEC ||
         opcode_type == `TYPE_ST_X_PREDEC ||
         opcode_type == `TYPE_ST_Y_PREDEC ||
         opcode_type == `TYPE_ST_Z_PREDEC);
    assign signals[`CONTROL_POSTINC] =
        (state == `STATE_MEM) &&
        (opcode_type == `TYPE_LD_X_POSTINC ||
         opcode_type == `TYPE_LD_Y_POSTINC ||
         opcode_type == `TYPE_LD_Z_POSTINC ||
         opcode_type == `TYPE_ST_X_POSTINC ||
         opcode_type == `TYPE_ST_Y_POSTINC ||
         opcode_type == `TYPE_ST_Z_POSTINC);

endmodule
