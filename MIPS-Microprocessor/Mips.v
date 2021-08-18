`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:56:40 08/17/2021 
// Design Name: 
// Module Name:    Mips 
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
module Mips( input [15:0]InPort,
							 output [15:0]OutPort,
							 input reset,
							 input clock);
		reg [15:0]outputPort;
							 
		reg [15:0]ALUA;
		reg [15:0]ALUB;
		wire [15:0]ALUR;
		wire [2:0]Func;
		wire ZF;					 
		ALU ALU1(.ALUA(ALUA),.ALUB(ALUB), .ALUR_out(ALUR), .Func(Func), .ZF(ZF) );

	   reg [2:0]RReg1; 	//address 1
      reg [2:0]RReg2; 	//address 2
	   reg [2:0]WR; 		//address of reg to store in
		reg WE; 				// to enable writing 
		reg [15:0]WD; 		// data to save in the reg
		wire [15:0]RRead1; // data in address 1
		wire [15:0]RRead2;
		Regfile Regfile1( .clock(clock), .RReg1(RReg1), .RReg2(RReg2),.WR(WR),.WE(WE), .WD(WD), .RRead1(RRead1), .RRead2(RRead2)); 
		
		wire [15:0]I_Address;
		wire [15:0]I_Content;
		InstructionMem InstructionMem1( .Address(I_Address), .Content(I_Content));
		
		reg [15:0]LoadValue;
		wire [15:0]OutputAddress;
		PC PC1( .LoadValue(LoadValue), .OutputAddress(OutputAddress),.clock(clock),.reset(reset));
		
		reg [15:0]D_Address;
		reg [15:0]DataToStore;
		wire RW;
		wire [15:0]D_Content;
		wire D_clock;
		DataMemory DataMemory1( .Address(D_Address), .DataToStore(DataToStore), .clock(D_clock), .RW(RW),.Content(D_Content));
		
		reg [3:0]OpCode;
		reg [2:0]Function;
		wire [2:0]ALU;
		wire OUTLD, MWE, WE_C, S1,S2,S3,S4,S5,S6,S7,S8,S9;
		ControlUnit CU1(  OpCode,
						  Function,
						  ALU,
						  OUTLD, MWE, WE_C, S1,S2,S3,S4,S5,S6,S7,S8,S9 );
		/*Mapping the inputs and outputs*/
		assign I_Address = OutputAddress; // pc output -> Instruction meme input
		always @(*)
		begin
			case (S3)
				1'b0: 
					begin
						case({S2,S1})
							2'b00: LoadValue <= OutputAddress +1'b1; //pc=pc+1
							2'b01: 
								begin
									case(S9^ZF)
									1'b1: LoadValue <= OutputAddress+1'b1;
									1'b0: LoadValue <= OutputAddress+1'b1+{ {10{1'b0}} ,I_Content[5:0]};
									endcase
								end
							2'b10: LoadValue <= { {4{1'b0}} ,I_Content[11:0]};
							2'b11: LoadValue <= RRead1;
						endcase
					end
				1'b1: LoadValue <=OutputAddress; 
				default: LoadValue<=0; // impossible to go here
			endcase
			
			RReg1 <= I_Content[11:9];
			RReg2 <= I_Content[8:6];
			
			case(S5)
				1'b1: WR<= 3'b111;
				1'b0:
				begin
					case(S4)
						1'b0: WR <= I_Content[8:6];
						1'b1: WR <= I_Content[5:3];
					endcase
				end
			endcase
			WE<= WE_C;
			
			case({S6,S7})
				2'b00: WD <= D_Content;
				2'b01: WD <= ALUR;
				2'b10: WD <= OutputAddress+1'b1;
				2'b11: WD <= InPort;
			endcase
			
			ALUA <= RRead1;
			case(S8)
				1'b0: ALUB <= RRead2;
				1'b1: ALUB <= {{10{1'b0}},I_Content[5:0]};
			endcase
			
			D_Address <= ALUR;
			DataToStore <= RRead2;
			
				
			OpCode <= I_Content[15:12];
			Function <= I_Content[2:0];
		end
		
		always @(OUTLD)
		begin
			if(OUTLD == 1'b1)
				outputPort <= RRead1;			
		end
		
		assign OutPort = outputPort;
		assign RW = MWE;			  
		assign Func = ALU;
		
		assign D_clock = clock;

endmodule
