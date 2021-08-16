`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:51:24 08/09/2021
// Design Name:   DataMemory
// Module Name:   E:/Working/Digital Electronics/Mips-Pipelined/Mips-Pipelined-Project/Components/Data-Memory/DataMemorytb.v
// Project Name:  Data-Memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DataMemorytb;

	// Inputs
	reg [11:0] Address;
	reg [15:0] DataToStore;
	reg clock;
	reg RW;

	// Outputs
	wire [15:0] Content;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.Address(Address), 
		.DataToStore(DataToStore), 
		.clock(clock), 
		.RW(RW), 
		.Content(Content)
	);

	initial begin
		// Initialize Inputs
		Address = 0;
		DataToStore = 0;
		clock = 0;
		RW = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		RW =0; //write
		Address = 50;
		DataToStore = 16'hAAAA;
		#100;
		RW=1;
		Address = 50;
	end
	
	always #50 clock = ~clock;
      
endmodule

