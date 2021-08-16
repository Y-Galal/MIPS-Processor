`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:09:37 08/09/2021 
// Design Name: 
// Module Name:    InstructionMem 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module InstructionMem( input [15:0]Address, output [15:0]Content);

	reg [15:0] MemBlk [0:65535];
	initial
	begin
	$readmemb("instruction.txt",MemBlk,0,65535);
	end
	
	assign Content = MemBlk[Address];
endmodule
