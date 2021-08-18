`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:38:19 08/17/2021
// Design Name:   Mips
// Module Name:   E:/Working/Digital Electronics/Mips-Processor/Mips-Processor/MIPS-Microprocessor/Mips_tf.v
// Project Name:  MIPS-Microprocessor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Mips_tf;

	// Inputs
	reg [15:0] InPort;
	reg reset;
	reg clock;

	// Outputs
	wire [15:0] OutPort;

	// Instantiate the Unit Under Test (UUT)
	Mips uut (
		.InPort(InPort), 
		.OutPort(OutPort), 
		.reset(reset), 
		.clock(clock)
	);

	initial begin
		// Initialize Inputs
		InPort = 0;
		reset = 0;
		clock = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		
		InPort = 16'hAAAA;
	end
      always #10 clock=~clock;
endmodule

