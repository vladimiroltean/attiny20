module rom #(
        parameter   DATA_WIDTH = 16,
        parameter   ADDR_WIDTH = 8          // 2 * 1024 bytes of ROM
    )(
        input  wire                  clk,
        input  wire [ADDR_WIDTH-1:0] addr,  // here comes the program counter
        output  reg [DATA_WIDTH-1:0] data   // here goes the instruction
    );

    reg [DATA_WIDTH-1:0] value;

    always @* begin
        case (addr)
		/*	 rjmp 	_start 		*/
		0:		value = 16'b1100000000100110;
		/*	 in 	yl, spl 		*/
		1:		value = 16'b1011011111001101;
		/*	 in 	yh, sph 		*/
		2:		value = 16'b1011011111011110;
		/*	 inc 	yl 		*/
		3:		value = 16'b1001010111000011;
		/*	 inc 	yl 		*/
		4:		value = 16'b1001010111000011;
		/*	 inc 	yl 		*/
		5:		value = 16'b1001010111000011;
		/*	 ld 	r16, y+ 		*/
		6:		value = 16'b1001000100001001;
		/*	 ld 	r17, y+ 		*/
		7:		value = 16'b1001000100011001;
		/*	 ld 	r18, y 		*/
		8:		value = 16'b1000000100101000;
		/*	 ldi 	r20, 40 		*/
		9:		value = 16'b1110001001001000;
		/*	 mul 	r16, r20 		*/
		10:		value = 16'b1001111100000100;
		/*	 mov 	xl, r0 		*/
		11:		value = 16'b0010110110100000;
		/*	 mov 	xh, r1 		*/
		12:		value = 16'b0010110110110001;
		/*	 add 	xl, r17 		*/
		13:		value = 16'b0000111110100001;
		/*	 adc 	xh, r19 		*/
		14:		value = 16'b0001111110110011;
		/*	 inc 	xh 		*/
		15:		value = 16'b1001010110110011;
		/*	 eor 	r0, r0 		*/
		16:		value = 16'b0010010000000000;
		/*	 eor 	r1, r1 		*/
		17:		value = 16'b0010010000010001;
		/*	 st 	x, r18 		*/
		18:		value = 16'b1001001100101100;
		/*	 ret 	 		*/
		19:		value = 16'b1001010100001000;
		/*	 ldi 	r16, 0b00111110 		*/
		20:		value = 16'b1110001100001110;
		/*	 mov 	r3, r16 		*/
		21:		value = 16'b0010111000110000;
		/*	 ldi 	r16, 0 		*/
		22:		value = 16'b1110000000000000;
		/*	 mov 	r4, r16 		*/
		23:		value = 16'b0010111001000000;
		/*	 eor 	r16, r16 		*/
		24:		value = 16'b0010011100000000;
		/*	 eor 	r5, r5 		*/
		25:		value = 16'b0010010001010101;
		/*	 push 	r3 		*/
		26:		value = 16'b1001001000111111;
		/*	 push 	r4 		*/
		27:		value = 16'b1001001001001111;
		/*	 push 	r5 		*/
		28:		value = 16'b1001001001011111;
		/*	 rcall 	_print 		*/
		29:		value = 16'b1101111111100011;
		/*	 in 	r16, spl 		*/
		30:		value = 16'b1011011100001101;
		/*	 inc 	r16 		*/
		31:		value = 16'b1001010100000011;
		/*	 inc 	r16 		*/
		32:		value = 16'b1001010100000011;
		/*	 inc 	r16 		*/
		33:		value = 16'b1001010100000011;
		/*	 out 	spl, r16 		*/
		34:		value = 16'b1011111100001101;
		/*	 inc 	r4 		*/
		35:		value = 16'b1001010001000011;
		/*	 inc 	r5 		*/
		36:		value = 16'b1001010001010011;
		/*	 rjmp 	_loop 		*/
		37:		value = 16'b1100111111110100;
		/*	 ret 	 		*/
		38:		value = 16'b1001010100001000;
		/*	 ldi 	r16, ramend 		*/
		39:		value = 16'b1110101100001111;
		/*	 out 	spl, r16 		*/
		40:		value = 16'b1011111100001101;
		/*	 ldi 	r16, 0 		*/
		41:		value = 16'b1110000000000000;
		/*	 out 	sph, r16 		*/
		42:		value = 16'b1011111100001110;
		/*	 rcall 	_stuff 		*/
		43:		value = 16'b1101111111101000;
		/*	 rjmp 	_start 		*/
		44:		value = 16'b1100111111111010;
		default:		value = 16'b0000000000000000;
        endcase
    end
    always @(negedge clk) begin
        data <= value;
    end

endmodule
