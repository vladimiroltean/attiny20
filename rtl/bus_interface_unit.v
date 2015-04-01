`include "defines.vh"
module bus_interface_unit #(
        parameter MEM_START_ADDR = 16'h40,
        parameter MEM_STOP_ADDR  = 16'hBF,
        parameter IO_START_ADDR  = 16'h00,
        parameter IO_STOP_ADDR   = 16'h3F,
        parameter EXT_START_ADDR = 16'h100,  // 1200 (0x04B0) bytes
        parameter EXT_STOP_ADDR  = 16'h5AF,  // starting from address 0x0100
        parameter DATA_WIDTH     = 8,    // registers are 8 bits in width
        parameter ADDR_WIDTH     = 16    // 64KB address space
    )(
        input  wire  [`GROUP_COUNT-1:0] opcode_group,
        input  wire              [11:0] opcode_imd,
        input  wire [`SIGNAL_COUNT-1:0] signals,
        input  wire                     cycle_count,
        input  wire    [DATA_WIDTH-1:0] data_to_store,
        input  wire    [ADDR_WIDTH-1:0] indirect_addr,
        // common bus interface
        output wire    [ADDR_WIDTH-1:0] bus_addr,
        inout  wire    [DATA_WIDTH-1:0] bus_data,
        // control signals for external memory
        output wire                     ext_cs,
        output wire                     ext_we,
        output wire                     ext_oe,
        // control signals for internal SRAM
        output wire                     mem_cs,
        output wire                     mem_we,
        output wire                     mem_oe,
        // control signals for I/O space
        output wire                     io_cs,
        output wire                     io_we,
        output wire                     io_oe
    );

    wire [ADDR_WIDTH-1:0] internal_mem_addr;
    wire [ADDR_WIDTH-1:0] internal_io_addr;
    wire                  mem_access, io_access;
    wire                  mem_addr_is_in_ext;
    wire                  mem_addr_is_in_mem;
    wire                  mem_addr_is_in_io;
    wire                  uses_indirect;
    wire                  should_store;
    wire                  should_load;

    assign should_load =
        signals[`CONTROL_MEM_READ] || signals[`CONTROL_IO_READ];
    assign should_store =
        signals[`CONTROL_MEM_WRITE] || signals[`CONTROL_IO_WRITE];
    assign uses_indirect =
        (opcode_group[`GROUP_LOAD_INDIRECT] ||
         opcode_group[`GROUP_STORE_INDIRECT]);
    assign mem_access = signals[`CONTROL_MEM_READ] ||
                        signals[`CONTROL_MEM_WRITE];
    assign io_access  = signals[`CONTROL_IO_READ]  ||
                        signals[`CONTROL_IO_WRITE];
    assign mem_addr_is_in_ext = mem_access &&
            (internal_mem_addr >= EXT_START_ADDR &&
             internal_mem_addr <= EXT_STOP_ADDR);
    assign mem_addr_is_in_mem = mem_access &&
            (internal_mem_addr >= MEM_START_ADDR &&
             internal_mem_addr <= MEM_STOP_ADDR);
    assign mem_addr_is_in_io  = mem_access &&
            (internal_mem_addr >= IO_START_ADDR &&
             internal_mem_addr <= IO_STOP_ADDR);

    /* TODO: Stack operations: push, pop, rcall, ret should access SPL.
     * But call_isr and reti, which are 2-cycle write instructions,
     * should also access SREG on their second cycle */
    assign internal_io_addr =
        io_access ? 
            opcode_group[`GROUP_STACK] ? (cycle_count == 0) ? `SPL : `SREG :
            opcode_group[`GROUP_ALU]   ? `SREG :
            {4'b0, opcode_imd} :
        mem_addr_is_in_io ?
            internal_mem_addr :
        {ADDR_WIDTH{1'bx}};
    assign internal_mem_addr = 
        mem_access ?
            uses_indirect ? indirect_addr :
            {4'b0, opcode_imd} :
        {ADDR_WIDTH{1'bx}};

    assign ext_cs = mem_addr_is_in_ext;
    assign ext_we = (ext_cs && signals[`CONTROL_MEM_WRITE]) ? 1'b1 :
                    (ext_cs && signals[`CONTROL_MEM_READ])  ? 1'b0 : 1'bx;
    assign ext_oe = (ext_cs && signals[`CONTROL_MEM_READ])  ? 1'b1 : 1'bx;

    assign mem_cs = mem_addr_is_in_mem;
    assign mem_we = (mem_cs && signals[`CONTROL_MEM_WRITE]) ? 1'b1 :
                    (mem_cs && signals[`CONTROL_MEM_READ])  ? 1'b0 : 1'bx;
    assign mem_oe = (mem_cs && signals[`CONTROL_MEM_READ])  ? 1'b1 : 1'bx;

    /* logic for generating io_cs, io_we and io_oe.
     * Hint: check defines.vh */
    assign io_cs = io_access || mem_addr_is_in_io;
    assign io_we = (io_cs && should_store) ? 1'b1 :
                   (io_cs && should_load)  ? 1'b0 : 1'bx;
    assign io_oe = (io_cs && should_load)  ? 1'b1 : 1'bx;

    /* logic for io operations.
     * Hint: check defines.vh */
    assign bus_addr = mem_addr_is_in_ext ? internal_mem_addr - EXT_START_ADDR :
                      mem_addr_is_in_mem ? internal_mem_addr - MEM_START_ADDR :
                      // for indirect I/O access, through load/store
                      mem_addr_is_in_io  ? internal_io_addr  - IO_START_ADDR :
                      // for direct I/O access, through in/out
                      io_access          ? internal_io_addr  - IO_START_ADDR :
                      {ADDR_WIDTH{1'bx}};
    assign bus_data = should_store ? data_to_store : {DATA_WIDTH{1'bz}};

endmodule
