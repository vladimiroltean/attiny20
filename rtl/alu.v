`include "defines.vh"
module alu #(
        parameter DATA_WIDTH = 8
    )(
        input  wire [`OPSEL_COUNT-1:0] opsel,
        input  wire                    enable,
        input  wire   [DATA_WIDTH-1:0] rd,
        input  wire   [DATA_WIDTH-1:0] rr,
        output reg    [DATA_WIDTH-1:0] out,
        output reg  [2*DATA_WIDTH-1:0] mul_out,
        input  wire   [DATA_WIDTH-1:0] flags_in,
        output reg    [DATA_WIDTH-1:0] flags_out,
        input  wire                    cin_en,    // carry_in_enable
        input  wire                    cout_en    // carry_out_enable
    );

    /* flags_out a fost transformat in reg, pentru a putea
     * fi atribuit in interiorul unui bloc always, insa va fi
     * sintetizat tot combinational (UAL-ul nici macar nu are clk
     * drept input) */
    always @* begin
        if (enable)
            case (opsel)

            `OPSEL_ADD:
            begin
            if (cout_en) begin
               {flags_out[`FLAGS_C], out} = rd + rr + (cin_en & flags_in[`FLAGS_C]);
            end else begin
                                     out  = rd + rr + (cin_en & flags_in[`FLAGS_C]);
                flags_out[`FLAGS_C]       = flags_in[`FLAGS_C];
            end
                flags_out[`FLAGS_V] = (rd[7] == 1 && rr[7] == 1 && out[7] == 0) ||
                                      (rd[7] == 0 && rr[7] == 0 && out[7] == 1);
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = (rd[3] == 1 && rr[3] == 1 && out[3] == 0) ||
                                      (rd[3] == 0 && rr[3] == 0 && out[3] == 1);
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end

            `OPSEL_SUB:
            begin
            if (cout_en) begin
               {flags_out[`FLAGS_C], out} = rd - rr - (cin_en & flags_in[`FLAGS_C]);
            end else begin
                                     out  = rd - rr - (cin_en & flags_in[`FLAGS_C]);
                flags_out[`FLAGS_C]       = flags_in[`FLAGS_C];
            end
                flags_out[`FLAGS_V] = (rd[7] == 1 && rr[7] == 1 && out[7] == 0) ||
                                      (rd[7] == 0 && rr[7] == 0 && out[7] == 1);
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = (rd[3] == 1 && rr[3] == 1 && out[3] == 0) ||
                                      (rd[3] == 0 && rr[3] == 0 && out[3] == 1);
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end	

            `OPSEL_AND:
            begin
                out                 = rd & rr;
                flags_out[`FLAGS_V] = 0;
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = flags_in[`FLAGS_C];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end

            `OPSEL_XOR:
            begin
                out                 = rd ^ rr;
                flags_out[`FLAGS_V] = 0;
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = flags_in[`FLAGS_C];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end

            `OPSEL_OR:
            begin
                out                 = rd | rr;
                flags_out[`FLAGS_V] = 0;
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = flags_in[`FLAGS_C];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end

            `OPSEL_NEG:
            begin
                out                 = -rd;
                flags_out[`FLAGS_V] = 0;
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = flags_in[`FLAGS_C];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end

            `OPSEL_COM:
            begin
                out                 = ~rd;
                flags_out[`FLAGS_V] = 0;
                flags_out[`FLAGS_Z] = (out == 0);
                flags_out[`FLAGS_N] = out[7];
                flags_out[`FLAGS_S] = flags_out[`FLAGS_N] ^ flags_out[`FLAGS_V];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = 1;
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
                mul_out             = 0;
            end

            `OPSEL_MUL:
            begin
                out                 = 0;
                mul_out             = rr * rd;
                flags_out[`FLAGS_V] = flags_in[`FLAGS_V];
                flags_out[`FLAGS_Z] = (mul_out == 0);
                flags_out[`FLAGS_N] = flags_in[`FLAGS_N];
                flags_out[`FLAGS_S] = flags_in[`FLAGS_S];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = mul_out[15];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
            end

            `OPSEL_MULS:
            begin
                out                 = 0;
                mul_out[15]         = rr[7] & rd[7];
                mul_out[14:0]       = (rr[7] ? -rr[6:0] : rr[6:0]) *
                                      (rd[7] ? -rd[6:0] : rd[6:0]);
                flags_out[`FLAGS_V] = flags_in[`FLAGS_V];
                flags_out[`FLAGS_Z] = (mul_out == 0);
                flags_out[`FLAGS_N] = flags_in[`FLAGS_N];
                flags_out[`FLAGS_S] = flags_in[`FLAGS_S];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = mul_out[15];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
            end

            `OPSEL_MULSU:
            begin
                out                 = 0;
                mul_out[15]         = rd[7];
                mul_out[14:0]       = (rd[7] ? -rd[6:0] : rd[6:0]) * rr;
                flags_out[`FLAGS_V] = flags_in[`FLAGS_V];
                flags_out[`FLAGS_Z] = (mul_out == 0);
                flags_out[`FLAGS_N] = flags_in[`FLAGS_N];
                flags_out[`FLAGS_S] = flags_in[`FLAGS_S];
                flags_out[`FLAGS_H] = flags_in[`FLAGS_H];
                flags_out[`FLAGS_C] = mul_out[15];
                flags_out[`FLAGS_T] = flags_in[`FLAGS_T];
                flags_out[`FLAGS_I] = flags_in[`FLAGS_I];
            end

            `OPSEL_NONE: begin
                out       = rr;
                flags_out = flags_in;
                mul_out   = 0;
            end

            /* Pentru a evita generarea unui latch, flags_out
             * trebuie sa ia o valoare si aici. Este de datoria noastra
             * sa nu salvam aceasta valoare in control_unit */
            default:
            begin
                out       = {DATA_WIDTH{1'bx}};
                flags_out = flags_in;
            end
            endcase
        else /* if alu_enable == false */ begin
            out       = {DATA_WIDTH{1'bx}};
            flags_out = flags_in;
        end
    end

endmodule
