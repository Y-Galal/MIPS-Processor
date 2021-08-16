`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:00 08/09/2021 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory( input [11:0]Address, input [15:0]DataToStore, input clock,input RW,output [15:0]Content);

	reg [15:0] MemArray [0:4095];
	reg [15:0] DataOut;

	
	always @(posedge clock)
	begin
		if(RW == 1'b1) //read
		begin
			DataOut <= MemArray[Address];
		end
		else if(RW == 1'b0) //write
		begin
			MemArray[Address] <= DataToStore;
		end
	end
	assign Content = DataOut;
endmodule
