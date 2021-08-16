`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:46:11 08/09/2021
// Design Name:   PC
// Module Name:   E:/Working/Digital Electronics/Mips-Pipelined/Mips-Pipelined-Project/Components/Program-Counter/pc_test.v
// Project Name:  Program-Counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pc_test;

	// Inputs
	reg [15:0] LoadValue;
	reg clock;
	reg reset;

	// Outputs
	wire [15:0] OutputAddress;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.LoadValue(LoadValue), 
		.OutputAddress(OutputAddress), 
		.clock(clock), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		LoadValue = 0;
		clock = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		LoadValue = 40;
		#20;
		LoadValue = 88;
		#20;
		reset=1;
		#20;
		reset=0;
		LoadValue=666;
		#20;
		reset =1;
		LoadValue=333;
	end
     always #10 clock=~clock;
endmodule

