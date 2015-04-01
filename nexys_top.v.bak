// must declare BTN and SW as "inout" because, when assigning
// them to porta/portb, XST is complaining that those are
// inout as well, and nobody guarantees it that someone won't
// be driving an output into a wire declared as input.
module nexys_top (
        // Clock sources
        input  wire       PRI_OSC, // Primary oscillator, Linear Tech. LTC6905 Oscillator
        input  wire       SEC_OSC, // Secondary oscillator, connected on J11 socket
        // User I/O
        inout  wire [3:0] BTN,     // non-debounced push-buttons, active high
        output wire [7:0] LED,     // green LEDs, active high
        inout  wire [7:0] SW,      // slide switches
        // 7-segment display
        output wire [3:0] AN,      // common anodes for 7 segment display, active low
        output wire       CA,      // common cathode A for 7 segment display, active low
        output wire       CB,      // common cathode B for 7 segment display, active low
        output wire       CC,      // common cathode C for 7 segment display, active low
        output wire       CD,      // common cathode D for 7 segment display, active low
        output wire       CE,      // common cathode E for 7 segment display, active low
        output wire       CF,      // common cathode F for 7 segment display, active low
        output wire       CG,      // common cathode G for 7 segment display, active low
        output wire       DP,      // common decimal point for 7 segment display, active low
        // Pin headers
        output wire [3:0] JA,      // 6-pin header A, pins 1-4 (5 is GND, 6 is VCC)
        output wire [3:0] JB,      // 6-pin header B, pins 1-4 (5 is GND, 6 is VCC)
        output wire [3:0] JC,      // 6-pin header C, pins 1-4 (5 is GND, 6 is VCC)
        output wire [3:0] JD       // 6-pin header D, pins 1-4 (5 is GND, 6 is VCC)
        // Micron M45W8MW16 Cellular RAM (STUB)
    );

    wire [3:0] vga_red;
    wire [3:0] vga_green;
    wire [3:0] vga_blue;
    wire       vga_hsync;
    wire       vga_vsync;

//    assign AN = 4'b0;
//    assign CA = 1'b0;
//    assign CB = 1'b0;
//    assign CC = 1'b0;
//    assign CD = 1'b0;
//    assign CE = 1'b0;
//    assign CF = 1'b0;
//    assign CG = 1'b0;
//    assign DP = 1'b0;

    assign LED[6:0] = 7'b0;

`ifdef cool_cn_lab
    assign JA = {1'b0, vga_red};
    assign JB = {1'b0, vga_green};
    assign JC = {1'b0, vga_blue};
    assign JD = {2'b0, vga_hsync, vga_vsync};

    VGA_Controller vga (
        // Host Side
        .iCursor_RGB_EN(4'b0111),
        .iRed          (3'b000),
        .iGreen        (3'b010),
        .iBlue         (3'b001),
        // VGA Side
        .oVGA_R        (vga_red),
        .oVGA_G        (vga_green),
        .oVGA_B        (vga_blue),
        .oVGA_H_SYNC   (vga_hsync),
        .oVGA_V_SYNC   (vga_vsync),
        // Control Signal
        .iCLK          (PRI_OSC),
        .iRST_N        (!SW[7])
    );

    /* VGA resolution: 640x480
     * Frame buffer resolution: 40x30
     * Scale factor: 1:16
     * that's 40x30 = 1200 bits = 2048 addresses
     * (11 bit address).
     * considering 3-bit color depth, that's
     * 40x30x3 = 3600 bits for one color channel
     * considering 3 channels, that's 10800 bits
     */
    dual_port_sram #(
        .DATA_WIDTH(3),
        .ADDR_WIDTH(11)
    ) frame_buffer (
        .clk(PRI_OSC),
        .rr_addr(),
        .rd_addr(),
        .rr_data(),
        .rd_data(),
        .rr_cs(),
        .rd_cs(1'b1),
        .rr_we(),
        .rd_we(1'b0),
        .rr_oe(),
        .rd_oe(1'b1)
    );
`endif

    cpu #(
        .INSTR_WIDTH     (16),
        .DATA_WIDTH      (8),
        .I_ADDR_WIDTH    (10),
        .ADDR_WIDTH      (16),
        .D_ADDR_WIDTH    (7),
        .IO_ADDR_WIDTH   (6),
        .R_ADDR_WIDTH    (5),
        .RST_ACTIVE_LEVEL(1)
    ) avr (
        .osc_clk    (PRI_OSC),
        .reset      (SW[7]),
        .trace_mode (SW[6]),
        .trace_clk  (SW[5]),
        .prescaler  (SW[4:0]),
        .pb         (AN),
        .pa         ({CA, CB, CC, CD, CE, CF, CG, DP}),
        .oc0a       (),
        .oc0b       (),
        .debug_pc   (),
        .error      (LED[7]),
        .debug_state()
    );

endmodule
