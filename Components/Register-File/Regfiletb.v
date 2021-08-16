`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:22:32 08/09/2021
// Design Name:   Regfile
// Module Name:   E:/Working/Digital Electronics/Mips-Pipelined/Mips-Pipelined-Project/Components/Register-File/Regfiletb.v
// Project Name:  Register-File
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Regfile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Regfiletb;

	// Inputs
	reg clock;
	reg [2:0] RReg1;
	reg [2:0] RReg2;
	reg [2:0] WR;
	reg WE;
	reg [15:0] WD;

	// Outputs
	wire [15:0] RRead1;
	wire [15:0] RRead2;

	// Instantiate the Unit Under Test (UUT)
	Regfile uut (
		.clock(clock), 
		.RReg1(RReg1), 
		.RReg2(RReg2), 
		.WR(WR), 
		.WE(WE), 
		.WD(WD), 
		.RRead1(RRead1), 
		.RRead2(RRead2)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		RReg1 = 0;
		RReg2 = 0;
		WR = 0;
		WE = 0;
		WD = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		WD = 10;
		WR = 0;
		WE = 1;
		#100;
		WD = 20;
		WR = 1;
		WE = 1;
		#100;
		WD = 30;
		WR = 2;
		WE = 1;
		#100;
		WD = 40;
		WR = 3;
		WE = 1;
		#100;
		WD = 50;
		WR = 4;
		WE = 1;
		#100;
		WD = 60;
		WR = 5;
		WE = 1;
		#100;
		WD = 70;
		WR = 6;
		WE = 1;
		#100;
		WD = 80;
		WR = 7;
		WE = 1;
		#100;	
		WE=0;
		RReg1=0;
		RReg2=1;
		#100;
		RReg1=2;
		RReg2=3;
		#100;
		RReg1=4;
		RReg2=5;
		#100;
		RReg1=6;
		RReg2=7;		
		
	end
	always #50 clock = ~clock;
      
endmodule

