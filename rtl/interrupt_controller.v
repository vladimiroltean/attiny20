`include "defines.vh"
module interrupt_controller #(
        parameter   DATA_WIDTH = 8,
        parameter I_ADDR_WIDTH = 10
    )(
        input wire                    clk,
        input wire                    reset,
        input wire   [DATA_WIDTH-1:0] mem_tifr,
        input wire   [DATA_WIDTH-1:0] mem_timsk,
        input wire   [DATA_WIDTH-1:0] mem_sreg,
        output reg                    irq,
        output reg [I_ADDR_WIDTH-1:0] vector
    );

    wire [DATA_WIDTH-1:0] if_ext;
    wire [DATA_WIDTH-1:0] int_src;

    /* Extend the I flag in SREG to 8 bits: 0x00 or 0xFF
     * in order to use it as an and-mask */
    assign if_ext  = {DATA_WIDTH{mem_sreg[`FLAGS_I]}};
    assign int_src = mem_tifr & mem_timsk & if_ext;

    always @(posedge clk, posedge reset)
        if (reset) begin
            irq    <= 0;
            vector <= 0;
        end else if (int_src[`OCF0A]) begin
            irq    <= 1;
            vector <= `TIM0_COMPA_ISR;
        end else if (int_src[`OCF0B]) begin
            irq    <= 1;
            vector <= `TIM0_COMPB_ISR;
        end else if (int_src[`TOV0])  begin
            irq    <= 1;
            vector <= `TIM0_OVF_ISR;
        end else begin
            irq    <= 0;
            vector <= 0;
        end

endmodule
