`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:36 08/09/2021 
// Design Name: 
// Module Name:    PC 
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
module PC( input [15:0]LoadValue, output [15:0]OutputAddress,input clock,input reset);
	reg [15:0]count=0;
	always @(posedge clock)
		if(reset)
		begin
			count<=0;
		end
		else
		begin
			count<= LoadValue;
		end
	assign OutputAddress=count;
endmodule
