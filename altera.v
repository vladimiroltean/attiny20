module altera (
        // Clock Input
        input  wire        CLOCK_27,     // 27 MHz
        input  wire        CLOCK_50,     // 50 MHz
        input  wire        EXT_CLOCK,    // External Clock
        // Push Button
        input  wire [3:0]  KEY,          // Pushbutton[3:0]
        // DPDT Switch
        input  wire [17:0] SW,           // Toggle Switch[17:0]
        // 7-SEG Display
        output wire [6:0]  HEX0,         // Seven Segment Digit 0
        output wire [6:0]  HEX1,         // Seven Segment Digit 1
        output wire [6:0]  HEX2,         // Seven Segment Digit 2
        output wire [6:0]  HEX3,         // Seven Segment Digit 3
        output wire [6:0]  HEX4,         // Seven Segment Digit 4
        output wire [6:0]  HEX5,         // Seven Segment Digit 5
        output wire [6:0]  HEX6,         // Seven Segment Digit 6
        output wire [6:0]  HEX7,         // Seven Segment Digit 7
        // LED
        output wire [8:0]  LEDG,         // LED Green[8:0]
        output wire [17:0] LEDR,         // LED Red[17:0]
        // UART
        output wire        UART_TXD,     // UART Transmitter
        input  wire        UART_RXD,     // UART Receiver
        // IRDA
        output wire        IRDA_TXD,     // IRDA Transmitter
        input  wire        IRDA_RXD,     // IRDA Receiver
        // SDRAM Interface
        inout  wire [15:0] DRAM_DQ,      // SDRAM Data bus 16 Bits
        output wire [11:0] DRAM_ADDR,    // SDRAM Address bus 12 Bits
        output wire        DRAM_LDQM,    // SDRAM Low-byte Data Mask 
        output wire        DRAM_UDQM,    // SDRAM High-byte Data Mask
        output wire        DRAM_WE_N,    // SDRAM Write Enable
        output wire        DRAM_CAS_N,   // SDRAM Column Address Strobe
        output wire        DRAM_RAS_N,   // SDRAM Row Address Strobe
        output wire        DRAM_CS_N,    // SDRAM Chip Select
        output wire        DRAM_BA_0,    // SDRAM Bank Address 0
        output wire        DRAM_BA_1,    // SDRAM Bank Address 0
        output wire        DRAM_CLK,     // SDRAM Clock
        output wire        DRAM_CKE,     // SDRAM Clock Enable
        // Flash Interface
        inout  wire [7:0]  FL_DQ,        // FLASH Data bus 8 Bits
        output wire [21:0] FL_ADDR,      // FLASH Address bus 22 Bits
        output wire        FL_WE_N,      // FLASH Write Enable
        output wire        FL_RST_N,     // FLASH Reset
        output wire        FL_OE_N,      // FLASH Output Enable
        output wire        FL_CE_N,      // FLASH Chip Enable
        // SRAM Interface
        inout  wire [15:0] SRAM_DQ,      // SRAM Data bus 16 Bits
        output wire [17:0] SRAM_ADDR,    // SRAM Address bus 18 Bits
        output wire        SRAM_UB_N,    // SRAM High-byte Data Mask 
        output wire        SRAM_LB_N,    // SRAM Low-byte Data Mask 
        output wire        SRAM_WE_N,    // SRAM Write Enable
        output wire        SRAM_CE_N,    // SRAM Chip Enable
        output wire        SRAM_OE_N,    // SRAM Output Enable
        // ISP1362 Interface
        inout  wire [15:0] OTG_DATA,     // ISP1362 Data bus 16 Bits
        output wire [1:0]  OTG_ADDR,     // ISP1362 Address 2 Bits
        output wire        OTG_CS_N,     // ISP1362 Chip Select
        output wire        OTG_RD_N,     // ISP1362 Write
        output wire        OTG_WR_N,     // ISP1362 Read
        output wire        OTG_RST_N,    // ISP1362 Reset
        output wire        OTG_FSPEED,   // USB Full Speed, 0 = Enable, Z = Disable
        output wire        OTG_LSPEED,   // USB Low Speed,  0 = Enable, Z = Disable
        input  wire        OTG_INT0,     // ISP1362 Interrupt 0
        input  wire        OTG_INT1,     // ISP1362 Interrupt 1
        input  wire        OTG_DREQ0,    // ISP1362 DMA Request 0
        input  wire        OTG_DREQ1,    // ISP1362 DMA Request 1
        output wire        OTG_DACK0_N,  // ISP1362 DMA Acknowledge 0
        output wire        OTG_DACK1_N,  // ISP1362 DMA Acknowledge 1
        // LCD Module 16X2
        inout  wire  [7:0] LCD_DATA,     // LCD Data bus 8 bits
        output wire        LCD_ON,       // LCD Power ON/OFF
        output wire        LCD_BLON,     // LCD Back Light ON/OFF
        output wire        LCD_RW,       // LCD Read/Write Select, 0 = Write, 1 = Read
        output wire        LCD_EN,       // LCD Enable
        output wire        LCD_RS,       // LCD Command/Data Select, 0 = Command, 1 = Data
        // SD Card Interface
        inout  wire        SD_DAT,       // SD Card Data
        inout  wire        SD_DAT3,      // SD Card Data 3
        inout  wire        SD_CMD,       // SD Card Command Signal
        output wire        SD_CLK,       // SD Card Clock
        // I2C
        inout  wire        I2C_SDAT,     // I2C Data
        output wire        I2C_SCLK,     // I2C Clock
        // PS2
        input  wire        PS2_DAT,      // PS2 Data
        input  wire        PS2_CLK,      // PS2 Clock
        // USB JTAG link
        input  wire        TDI,          // CPLD -> FPGA (data in)
        input  wire        TCK,          // CPLD -> FPGA (clk)
        input  wire        TCS,          // CPLD -> FPGA (CS)
        output wire        TDO,          // FPGA -> CPLD (data out)
        // VGA
        output wire        VGA_CLK,      // VGA Clock
        output wire        VGA_HS,       // VGA H_SYNC
        output wire        VGA_VS,       // VGA V_SYNC
        output wire        VGA_BLANK,    // VGA BLANK
        output wire        VGA_SYNC,     // VGA SYNC
        output wire [9:0]  VGA_R,        // VGA Red[9:0]
        output wire [9:0]  VGA_G,        // VGA Green[9:0]
        output wire [9:0]  VGA_B,        // VGA Blue[9:0]
        // Ethernet Interface
        inout  wire [15:0] ENET_DATA,    // DM9000A DATA bus 16Bits
        output wire        ENET_CMD,     // DM9000A Command/Data Select, 0 = Command, 1 = Data
        output wire        ENET_CS_N,    // DM9000A Chip Select
        output wire        ENET_WR_N,    // DM9000A Write
        output wire        ENET_RD_N,    // DM9000A Read
        output wire        ENET_RST_N,   // DM9000A Reset
        input  wire        ENET_INT,     // DM9000A Interrupt
        output wire        ENET_CLK,     // DM9000A Clock 25 MHz
        // Audio CODEC
        inout  wire        AUD_ADCLRCK,  // Audio CODEC ADC LR Clock
        input  wire        AUD_ADCDAT,   // Audio CODEC ADC Data
        inout  wire        AUD_DACLRCK,  // Audio CODEC DAC LR Clock
        output wire        AUD_DACDAT,   // Audio CODEC DAC Data
        inout  wire        AUD_BCLK,     // Audio CODEC Bit-Stream Clock
        output wire        AUD_XCK,      // Audio CODEC Chip Clock
        // TV Decoder
        input  wire [7:0]  TD_DATA,      // TV Decoder Data bus 8 bits
        input  wire        TD_HS,        // TV Decoder H_SYNC
        input  wire        TD_VS,        // TV Decoder V_SYNC
        output wire        TD_RESET,     // TV Decoder Reset
        // GPIO
        inout  wire [35:0] GPIO_0,       // GPIO Connection 0
        inout  wire [35:0] GPIO_1        // GPIO Connection 1
    );

    //Turn off all displays.
    assign HEX0 = 7'h7F;
    assign HEX1 = 7'h7F;
    assign HEX2 = 7'h7F;
    assign HEX3 = 7'h7F;
    assign HEX4 = 7'h7F;
    assign HEX5 = 7'h7F;
    assign HEX6 = 7'h7F;
    assign HEX7 = 7'h7F;
//    assign LEDR = 18'h0;
//    assign LEDG = 9'h0;
    
    //Set all GPIO to tri-state.
    assign GPIO_0 = 36'hzzzzzzzzz;
    assign GPIO_1 = 36'hzzzzzzzzz;

    //Disable audio codec.
    //assign AUD_DACDAT = 1'b0;
    //assign AUD_XCK    = 1'b0;

    //Disable DRAM.
    assign DRAM_ADDR  = 12'h0;
    assign DRAM_BA_0  = 1'b0;
    assign DRAM_BA_1  = 1'b0;
    assign DRAM_CAS_N = 1'b1;
    assign DRAM_CKE   = 1'b0;
    assign DRAM_CLK   = 1'b0;
    assign DRAM_CS_N  = 1'b1;
    assign DRAM_DQ    = 16'hzzzz;
    assign DRAM_LDQM  = 1'b0;
    assign DRAM_RAS_N = 1'b1;
    assign DRAM_UDQM  = 1'b0;
    assign DRAM_WE_N  = 1'b1;

    //Disable Ethernet.
    assign ENET_CLK   = 1'b0;
    assign ENET_CS_N  = 1'b1;
    assign ENET_CMD   = 1'b0;
    assign ENET_DATA  = 16'hzzzz;
    assign ENET_RD_N  = 1'b1;
    assign ENET_RST_N = 1'b1;
    assign ENET_WR_N  = 1'b1;

    //Disable flash.
    assign FL_ADDR  = 22'h0;
    assign FL_CE_N  = 1'b1;
    assign FL_DQ    = 8'hzz;
    assign FL_OE_N  = 1'b1;
    assign FL_RST_N = 1'b1;
    assign FL_WE_N  = 1'b1;

    //Disable LCD.
    assign LCD_BLON = 1'b0;
    assign LCD_DATA = 8'hzz;
    assign LCD_EN   = 1'b0;
    assign LCD_ON   = 1'b0;
    assign LCD_RS   = 1'b0;
    assign LCD_RW   = 1'b0;

    //Disable OTG.
    assign OTG_ADDR    = 2'h0;
    assign OTG_CS_N    = 1'b1;
    assign OTG_DACK0_N = 1'b1;
    assign OTG_DACK1_N = 1'b1;
    assign OTG_FSPEED  = 1'b1;
    assign OTG_DATA    = 16'hzzzz;
    assign OTG_LSPEED  = 1'b1;
    assign OTG_RD_N    = 1'b1;
    assign OTG_RST_N   = 1'b1;
    assign OTG_WR_N    = 1'b1;

    //Disable SDRAM.
    assign SD_DAT = 1'bz;
    assign SD_CLK = 1'b0;

    //Disable SRAM.
    assign SRAM_ADDR = 18'h0;
    assign SRAM_CE_N = 1'b1;
    assign SRAM_DQ   = 16'hzzzz;
    assign SRAM_LB_N = 1'b1;
    assign SRAM_OE_N = 1'b1;
    assign SRAM_UB_N = 1'b1;
    assign SRAM_WE_N = 1'b1;

    //Disable VGA.
    /*
    assign VGA_CLK   = 1'b0;
    assign VGA_BLANK = 1'b0;
    assign VGA_SYNC  = 1'b0;
    assign VGA_HS    = 1'b0;
    assign VGA_VS    = 1'b0;
    assign VGA_R     = 10'h0;
    assign VGA_G     = 10'h0;
    assign VGA_B     = 10'h0;
    */

    //Disable all other peripherals.
    //assign I2C_SCLK = 1'b0;
    assign IRDA_TXD = 1'b0;
    //assign TD_RESET = 1'b0;
    assign TDO = 1'b0;
    assign UART_TXD = 1'b0;
  
    wire    clk_25;

    assign	TD_RESET	= 1'b1;	//	Allow 27 MHz
    assign	AUD_ADCLRCK	= AUD_DACLRCK;
    assign	AUD_XCK		= clk_25;

    wire [15:0] bus_addr;
    wire  [7:0] bus_data;
    wire [10:0] vga_addr;
    wire  [9:0] vga_addr_x;
    wire  [8:0] vga_addr_y;
    wire  [7:0] vga_data;
    wire        ext_cs;
    wire        ext_we;
    wire        ext_oe;

    // To achieve the scale factor, divide both
    // X and Y by 16 before calculating address.
    assign vga_addr = (vga_addr_y / 16) * 40 + (vga_addr_x / 16);
    
    // Get a 25MHz clock out of a 27MHz one
    // (useful for VGA 640x480, 60Hz transmission)
    // Could have also divided the 50MHz clock, but whatever
    pll p (
        .areset(SW[7]),
        .inclk0(CLOCK_27),
        .c0    (clk_25)
    );

    VGA_Controller vga (
        // Host Side
        .iCursor_RGB_EN(4'b0111),
        //.oAddress      (vga_addr),
        .oCoord_X      (vga_addr_x),
        .oCoord_Y      (vga_addr_y),
        .iRed          ({vga_data[5:4], 8'b0}),
        .iGreen        ({vga_data[3:2], 8'b0}),
        .iBlue         ({vga_data[1:0], 8'b0}),
        // VGA Side
        .oVGA_R        (VGA_R),
        .oVGA_G        (VGA_G),
        .oVGA_B        (VGA_B),
        .oVGA_H_SYNC   (VGA_HS),
        .oVGA_V_SYNC   (VGA_VS),
        .oVGA_SYNC     (VGA_SYNC),
        .oVGA_BLANK    (VGA_BLANK),
        .oVGA_CLOCK    (VGA_CLK),
        // Control Signal
        .iCLK          (clk_25),
        .iRST_N        (!SW[7])
    );

    /* VGA resolution: 640x480
     * Frame buffer resolution: 40x30
     * Scale factor: 1:16
     * that's 40x30 = 1200 bits = 2048 addresses
     * (11 bit address).
     * considering 2-bit color depth, we're going
     * to wrap up the color of a pixel in a single byte:
     * Bit      7   6   5   4   3   2   1   0
     * Color   N/A N/A  R   R   G   G   B   B
     */
    dual_port_sram #(
        .DATA_WIDTH(8),
        .ADDR_WIDTH(11)
    ) frame_buffer (
        .clk    (clk_25),
        // CPU side
        .rr_addr(bus_addr),
        .rr_data(bus_data),
        .rr_cs  (ext_cs),
        .rr_we  (ext_we),
        .rr_oe  (ext_oe),
        // VGA side
        .rd_addr(vga_addr),
        .rd_data(vga_data),
        .rd_cs  (1'b1),
        .rd_we  (1'b0),
        .rd_oe  (1'b1)
    );

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
        .osc_clk    (clk_25),
        .reset      (SW[7]),
        .trace_mode (SW[6]),
        .trace_clk  (SW[5]),
        .prescaler  (SW[4:0]),
        .pb         (LEDG[7:0]),
        .pa         (LEDR[7:0]),
        .oc0a       (),
        .oc0b       (),
        .bus_addr   (bus_addr),
        .bus_data   (bus_data),
        .ext_cs     (ext_cs),
        .ext_we     (ext_we),
        .ext_oe     (ext_oe),
        .debug_pc   (LEDR[17:8]),
        .error      (),
        .debug_state()
    );

endmodule
