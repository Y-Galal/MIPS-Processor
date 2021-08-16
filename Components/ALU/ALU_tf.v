`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:34:35 08/08/2021
// Design Name:   ALU
// Module Name:   E:/Working/Digital Electronics/Mips-Pipelined/Components/ALU/ALU_tf.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tf;

	// Inputs
	reg [15:0] ALUA;
	reg [15:0] ALUB;
	reg [2:0] Func;

	// Outputs
	wire [15:0] ALUR_out;
	wire ZF;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ALUA(ALUA), 
		.ALUB(ALUB), 
		.ALUR_out(ALUR_out), 
		.Func(Func), 
		.ZF(ZF)
	);

	initial begin
		// Initialize Inputs
		ALUA = 0;
		ALUB = 0;
		Func = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		Func = 3'b000;	//adding
		ALUA = 1;
		ALUB =1;
		#100;
		Func = 3'b001;//Sub and testing zf
		ALUA= 15;
		ALUB=15;
		#100;
		Func = 3'b010; //And
		ALUA = 16'hAAAA;
		ALUB = 16'hCCCC; //result is 8888
		#100;
		Func = 3'b011; //or
		ALUA = 16'hABCD;
		ALUB = 16'hDDDD; //result is FFDD 
		#100;		
		Func = 3'b100; //nor
		ALUA = 16'hABCD;
		ALUB = 16'hDDDD;		//result is 0022
		#100;
		Func = 3'b101; //xor
		ALUA = 20;
		ALUB = 30;		//answer is 10
		#100;
		Func = 3'b110; //shift left
		ALUA= 15; //answer is 7
		#100;
		Func = 3'b111; //shift right
		ALUA= 15; //answer is 7
		#100;
	end
      
endmodule

