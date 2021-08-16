`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:37:34 08/11/2021
// Design Name:   ControlUnit
// Module Name:   E:/Working/Digital Electronics/Mips-Pipelined/Mips-Pipelined-Project/Components/Control-Unit/ControlUnittb.v
// Project Name:  Control-Unit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlUnittb;

	// Inputs
	reg [3:0] OpCode;
	reg [2:0] Function;

	// Outputs
	wire [2:0] ALU;
	wire OUTLD;
	wire MWE;
	wire WE;
	wire S1;
	wire S2;
	wire S3;
	wire S4;
	wire S5;
	wire S6;
	wire S7;
	wire S8;
	wire S9;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.OpCode(OpCode), 
		.Function(Function), 
		.ALU(ALU), 
		.OUTLD(OUTLD), 
		.MWE(MWE), 
		.WE(WE), 
		.S1(S1), 
		.S2(S2), 
		.S3(S3), 
		.S4(S4), 
		.S5(S5), 
		.S6(S6), 
		.S7(S7), 
		.S8(S8), 
		.S9(S9)
	);

	initial begin
		// Initialize Inputs
		OpCode = 0;
		Function = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		OpCode = 0;
		Function = 1;
		#100;
		OpCode = 7;
	end
      
endmodule

