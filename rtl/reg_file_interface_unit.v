`include "defines.vh"
module reg_file_interface_unit #(
        parameter INSTR_WIDTH  = 16,   // instructions are 16 bits in width
        parameter DATA_WIDTH   = 8,    // registers are 8 bits in width
        parameter D_ADDR_WIDTH = 8,    // 256 bytes address space
        parameter R_ADDR_WIDTH = 5     // 32 registers
    )(
        input  wire [`OPCODE_COUNT-1:0] opcode_type,
        input  wire  [R_ADDR_WIDTH-1:0] opcode_rd,
        input  wire  [R_ADDR_WIDTH-1:0] opcode_rr,
        input  wire [`SIGNAL_COUNT-1:0] signals,
        input  wire                     cycle_count,
        input  wire  [2*DATA_WIDTH-1:0] writeback_value,
        output wire  [R_ADDR_WIDTH-1:0] rr_addr,
        output wire  [R_ADDR_WIDTH-1:0] rd_addr,
        inout  wire    [DATA_WIDTH-1:0] rr_data,
        inout  wire    [DATA_WIDTH-1:0] rd_data,
        output wire                     rr_cs,
        output wire                     rd_cs,
        output wire                     rr_we,
        output wire                     rd_we,
        output wire                     rr_oe,
        output wire                     rd_oe
    );
    /* Unele din asignarile de mai jos presupun ca instructiunea
     * curenta (instruction) este de tipul:
     * [opcode] Rd Rr,
     * caz in care va accesa de doua ori register file-ul:
     * o data in starea de instruction decode/register fetch,
     * pentru a citi valorile ambelor registre, si a doua oara
     * in write-back, pentru a depune rezultatul (alu_out) in
     * registrul Rd.
     * Evident, nu toate instructiunile sunt de acest tip.
     * Unele instructiuni (spre exemplu load-urile) nu acceseaza
     * deloc register file-ul pentru citire, doar pentru write-back.
     * Altele, precum store-urile, il acceseaza doar pentru citire.
     * Altele, precum mov-ul, il acceseaza si pentru citire si
     * pentru scriere, dar citirea o fac din Rr si scrierea in Rd.
     * Altele nu il acceseaza deloc.
     * In concluzie, adaugati in conditiile assign-urilor si tipul
     * instructiunii (opcode_type si/sau instruction).
     */
    wire [R_ADDR_WIDTH-1:0] internal_rr_addr;
    wire [R_ADDR_WIDTH-1:0] internal_rd_addr;
    wire                    access_x;
    wire                    access_y;
    wire                    access_z;
    
    assign access_x = (cycle_count == 0) &&
        (opcode_type == `TYPE_LD_X         || opcode_type == `TYPE_ST_X ||
         opcode_type == `TYPE_LD_X_PREDEC  || opcode_type == `TYPE_ST_X_PREDEC ||
         opcode_type == `TYPE_LD_X_POSTINC || opcode_type == `TYPE_ST_X_POSTINC);
    assign access_y = (cycle_count == 0) &&
        (opcode_type == `TYPE_LD_Y         || opcode_type == `TYPE_ST_Y ||
         opcode_type == `TYPE_LD_Y_PREDEC  || opcode_type == `TYPE_ST_Y_PREDEC ||
         opcode_type == `TYPE_LD_Y_POSTINC || opcode_type == `TYPE_ST_Y_POSTINC);
    assign access_z = (cycle_count == 0) &&
        (opcode_type == `TYPE_LD_Z         || opcode_type == `TYPE_ST_Z ||
         opcode_type == `TYPE_LD_Z_PREDEC  || opcode_type == `TYPE_ST_Z_PREDEC ||
         opcode_type == `TYPE_LD_Z_POSTINC || opcode_type == `TYPE_ST_Z_POSTINC);

    // MUL writes back to R1:R0
         
	/* Internal */
    assign internal_rd_addr =
            (signals[`CONTROL_REG_RD_READ] || signals[`CONTROL_REG_RD_WRITE]) ?
                access_x                   ? `XL :
                access_y                   ? `YL :
                access_z                   ? `ZL :
                (opcode_type == `TYPE_MUL && signals[`CONTROL_REG_RD_WRITE]) ? 0 :
                opcode_rd :
            {R_ADDR_WIDTH{1'bx}};
    assign internal_rr_addr =
            (signals[`CONTROL_REG_RR_READ] || signals[`CONTROL_REG_RR_WRITE]) ?
                access_x                   ? `XH :
                access_y                   ? `YH :
                access_z                   ? `ZH :
                (opcode_type == `TYPE_MUL && signals[`CONTROL_REG_RR_WRITE]) ? 1 :
                opcode_rr :
            {R_ADDR_WIDTH{1'bx}};

    assign rd_data = signals[`CONTROL_REG_RD_WRITE] ? writeback_value[7:0] :
                     {DATA_WIDTH{1'bz}};
    assign rr_data = signals[`CONTROL_REG_RD_WRITE] ? writeback_value[15:8] :
                     {DATA_WIDTH{1'bz}};
    assign rd_we   = signals[`CONTROL_REG_RD_READ]  ? 1'b0 :
                     signals[`CONTROL_REG_RD_WRITE] ? 1'b1 : 1'bx;
    assign rr_we   = signals[`CONTROL_REG_RR_READ]  ? 1'b0 :
                     signals[`CONTROL_REG_RR_WRITE] ? 1'b1 : 1'bx;
    assign rd_oe   = signals[`CONTROL_REG_RD_READ]  ? 1'b1 : 1'bx;
    assign rr_oe   = signals[`CONTROL_REG_RR_READ]  ? 1'b1 : 1'bx;
    assign rd_cs   = signals[`CONTROL_REG_RD_READ] ||
                     signals[`CONTROL_REG_RD_WRITE];
    assign rr_cs   = signals[`CONTROL_REG_RR_READ] ||
                     signals[`CONTROL_REG_RR_WRITE];
    assign rd_addr = (rd_cs) ? internal_rd_addr : {R_ADDR_WIDTH{1'bx}};
    assign rr_addr = (rr_cs) ? internal_rr_addr : {R_ADDR_WIDTH{1'bx}};

endmodule
