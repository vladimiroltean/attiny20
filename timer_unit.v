`include "defines.vh"
module timer_unit #(
        parameter    DATA_WIDTH = 8
    )(
        input  wire                  clk,
        input  wire                  reset,
        input  wire [DATA_WIDTH-1:0] mem_ocr0a,
        input  wire [DATA_WIDTH-1:0] mem_ocr0b,
        input  wire [DATA_WIDTH-1:0] mem_tcnt0,
        input  wire [DATA_WIDTH-1:0] mem_tifr,
        input  wire [DATA_WIDTH-1:0] mem_tccr0a,
        input  wire [DATA_WIDTH-1:0] mem_tccr0b,
        output reg  [DATA_WIDTH-1:0] tcnt0,
        output reg  [DATA_WIDTH-1:0] tifr,
        output reg                   oc0a,
        output reg                   oc0b
    );

    // Signals used for prescaling
    wire                  clk_io, clk_io_8, clk_io_64;
    wire                  clk_io_256, clk_io_1024, clk_t;
    wire                  clk_io_4096_ext, clk_io_16384_ext;
    wire            [7:0] clk_sources;
    reg            [13:0] clk_ps;
    // Bits in configuration register
    wire            [2:0] com0a;
    wire            [2:0] com0b;
    wire            [2:0] wgm0;
    wire            [2:0] cs0;
    wire [DATA_WIDTH-1:0] top;

    assign wgm0  = {mem_tccr0b[3], mem_tccr0a[1:0]};
    assign com0a =  mem_tccr0a[7:6];
    assign com0b =  mem_tccr0a[5:4];
    assign cs0   =  mem_tccr0b[2:0];
    assign top   =  wgm0[2] ? mem_ocr0a : {DATA_WIDTH{1'b1}};

    // generate clk_t (timer clock) based on clk and cs0.
    // HINT: check datasheet at page 73.
    // HINT2: see what signals are already declared here.
    // HINT3: also check how the other prescaler was
    // generated in cpu.v
    assign clk_io           = clk;
    assign clk_io_8         = clk_ps[2];
    assign clk_io_64        = clk_ps[5];
    assign clk_io_256       = clk_ps[7];
    assign clk_io_1024      = clk_ps[9];
    assign clk_io_4096_ext  = clk_ps[11];
    assign clk_io_16384_ext = clk_ps[13];
    assign clk_sources = {clk_io_16384_ext, clk_io_4096_ext,
                          clk_io_1024, clk_io_256, clk_io_64,
                          clk_io_8, clk_io, 1'b0};
    assign clk_t = clk_sources[cs0];

    always @(posedge clk, posedge reset)
        if (reset)
            clk_ps <= 0;
        else
            clk_ps <= clk_ps + 1;

    // OPTIONAL: complete the list of clock sources with
    // a 1:4096 (for CS0 = 6) and a 1:16384 prescaler (for CS0 = 7),
    // because Atmel dedicates those to external clock sources and
    // we'll never use them

    // generate logic for interrupts. Write register TIFR.
    // HINT: what kind of interrupts do normal mode, CTC and
    // fast PWM generate? when?

    // the block in which TCNT0 is assigned, depending
    // on current configuration mode (can be seen in WGM0).
    always @(posedge clk_t, posedge reset) begin
        if (reset) begin
            tcnt0 <= 0;
            tifr  <= 0;
        end else begin
            case (wgm0)
            0: begin     // normal
                if (mem_tcnt0 == 255) begin
                    tcnt0 <= 0;
                    tifr  <= mem_tifr | (1 << `TOV0);
                end else begin
                    tcnt0 <= mem_tcnt0 + 1;
                    tifr  <= mem_tifr;
                end
            end
            2: begin     // ctc
                if (mem_tcnt0 == mem_ocr0a) begin
                    tcnt0 <= 0;
                    tifr  <= mem_tifr | (1 << `OCF0A);
                end else begin
                    tcnt0 <= mem_tcnt0 + 1;
                    tifr  <= mem_tifr;
                end
            end
            3, 7: begin  // fast pwm
                if (mem_tcnt0 == top) begin
                    tcnt0 <= 0;
                    tifr  <= mem_tifr | (1 << `TOV0);
                end else begin
                    tcnt0 <= mem_tcnt0 + 1;
                    tifr  <= mem_tifr;
                end
            end
            endcase
        end
    end

    // generate PWM logic on output pins OC0A and OC0B.
    // HINT: check pages 64-65 to see in which modes they're active
    // and 69-70-71 to see how the pins should react to those modes.
    always @(posedge clk_t, posedge reset) begin
        if (reset) begin
            oc0a <= 0;
            oc0b <= 0;
        end else begin
            case (wgm0)
            0: begin    // normal
                if (mem_tcnt0 == 255) begin
                    oc0a <= ~oc0a;
                    oc0b <= ~oc0b;
                end
            end
            default: begin
                if (mem_tcnt0 == mem_ocr0a) begin
                    oc0a <= ~oc0a;
                end
                if (mem_tcnt0 == mem_ocr0b) begin
                    oc0b <= ~oc0b;
                end
            end
            endcase
        end
    end

endmodule
