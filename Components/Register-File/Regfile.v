`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:33 08/09/2021 
// Design Name: 
// Module Name:    Regfile 
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
module Regfile( input clock,
					 input [2:0]RReg1, 	//address 1
					 input [2:0]RReg2, 	//address 2
					 input [2:0]WR, 		//address of reg to store in
					 input WE, 				// to enable writing 
					 input [15:0]WD, 		// data to save in the reg
					 output [15:0]RRead1, // data in address 1
					 output [15:0]RRead2); // data in address 2
	reg [15:0]MemBlock[0:7];
	parameter i;
	initial
	begin
		for(i=0;i<8;i=i+1)
		begin
			MemBlock[i] = 0;
		end
	end
	always @(posedge clock)
	begin
		if(WE == 1) begin
			MemBlock[WR] <= WD;
		end		
	end
	
	assign RRead1 = MemBlock[RReg1];
	assign RRead2 = MemBlock[RReg2];

endmodule
