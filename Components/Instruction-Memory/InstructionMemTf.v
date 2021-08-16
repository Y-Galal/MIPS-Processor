`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:29:00 08/09/2021
// Design Name:   InstructionMem
// Module Name:   E:/Working/Digital Electronics/Mips-Pipelined/Mips-Pipelined-Project/Components/Instruction-Memory/InstructionMemTf.v
// Project Name:  Instruction-Memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionMem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstructionMemTf;

	// Inputs
	reg [15:0] Address;

	// Outputs
	wire [15:0] Content;

	// Instantiate the Unit Under Test (UUT)
	InstructionMem uut (
		.Address(Address), 
		.Content(Content)
	);

	initial begin
		// Initialize Inputs
		Address = 0;

		// Wait 100 ns for global reset to finish
		#100;
        Address=1;
		  #10
		  Address=2;
		  #10
		  Address=19;
		// Add stimulus here

	end
      
endmodule

