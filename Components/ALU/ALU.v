`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:58:32 08/08/2021 
// Design Name: 
// Module Name:    ALU 
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
module ALU(input [15:0]ALUA,input [15:0]ALUB, output [15:0]ALUR_out,input [2:0]Func, output ZF );
	reg [15:0]ALUR;

	always @(*)
	begin
		case(Func)
			3'b000: ALUR= ALUA+ALUB;//add
			3'b001: ALUR=ALUA-ALUB; //sub
			3'b010: ALUR= ALUA&ALUB; //and
			3'b011: ALUR= ALUA|ALUB;	//or
			3'b100: ALUR= ~(ALUA|ALUB); //nor
			3'b101: ALUR= ALUA^ALUB;	//xor
			3'b110: ALUR= ALUA<<1;		//shift left
			3'b111: ALUR= ALUA>>1;		//shift right
			default: ALUR=0;
		endcase
	end
		assign ZF =~(|ALUR);
		assign ALUR_out= ALUR;
endmodule
