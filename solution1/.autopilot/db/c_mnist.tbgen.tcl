set C_TypeInfoList {{ 
"c_mnist" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"input_5_input": [[],{ "pointer": "0"}] }, {"dense_8_output": [[],{ "pointer": "0"}] }],[],""], 
"0": [ "k2c_tensor", {"typedef": [[[],"1"],""]}], 
"1": [ "k2c_tensor", {"struct": [[],[],[{ "array": [[],  {"array": [ {"scalar": "float"}, [784]]}]},{ "ndim": [[64], "2"]},{ "numel": [[64], "2"]},{ "shape": [[],  {"array": ["2", [5]]}]}],""]}], 
"2": [ "size_t", {"typedef": [[[], {"scalar": "long long unsigned int"}],""]}]
}}
set moduleName c_mnist
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {c_mnist}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_5_input_array_0 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_1 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_2 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_3 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_4 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_5 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_6 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_7 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_8 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_9 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_10 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_11 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_12 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_13 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_14 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_array_15 float 32 regular {array 49 { 1 3 } 1 1 }  }
	{ input_5_input_ndim int 64 unused {pointer 0}  }
	{ input_5_input_numel int 64 regular {pointer 0}  }
	{ input_5_input_shape int 64 unused {array 5 { } 0 1 }  }
	{ dense_8_output_array_0 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_1 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_2 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_3 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_4 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_5 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_6 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_7 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_8 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_9 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_10 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_11 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_12 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_13 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_14 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_array_15 float 32 regular {array 49 { 2 0 } 1 1 }  }
	{ dense_8_output_ndim int 64 unused {pointer 0}  }
	{ dense_8_output_numel int 64 unused {pointer 0}  }
	{ dense_8_output_shape int 64 unused {array 5 { } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_5_input_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 768,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 769,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 770,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 771,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 772,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 773,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 774,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 775,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 776,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 777,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 10,"up" : 778,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 11,"up" : 779,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 12,"up" : 780,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 13,"up" : 781,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 14,"up" : 782,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_array_15", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_5_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 15,"up" : 783,"step" : 16}]}]}]} , 
 	{ "Name" : "input_5_input_ndim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "input_5_input.ndim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_5_input_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "input_5_input.numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_5_input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "input_5_input.shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_8_output_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 768,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 769,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 770,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 771,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 772,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 773,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 774,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 775,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 776,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 777,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_10", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 10,"up" : 778,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_11", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 11,"up" : 779,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_12", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 12,"up" : 780,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_13", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 13,"up" : 781,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_14", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 14,"up" : 782,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_array_15", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_8_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 15,"up" : 783,"step" : 16}]}]}]} , 
 	{ "Name" : "dense_8_output_ndim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_8_output.ndim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_8_output_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_8_output.numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_8_output_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_8_output.shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 222
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_5_input_array_0_address0 sc_out sc_lv 6 signal 0 } 
	{ input_5_input_array_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_5_input_array_0_q0 sc_in sc_lv 32 signal 0 } 
	{ input_5_input_array_1_address0 sc_out sc_lv 6 signal 1 } 
	{ input_5_input_array_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_5_input_array_1_q0 sc_in sc_lv 32 signal 1 } 
	{ input_5_input_array_2_address0 sc_out sc_lv 6 signal 2 } 
	{ input_5_input_array_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_5_input_array_2_q0 sc_in sc_lv 32 signal 2 } 
	{ input_5_input_array_3_address0 sc_out sc_lv 6 signal 3 } 
	{ input_5_input_array_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_5_input_array_3_q0 sc_in sc_lv 32 signal 3 } 
	{ input_5_input_array_4_address0 sc_out sc_lv 6 signal 4 } 
	{ input_5_input_array_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_5_input_array_4_q0 sc_in sc_lv 32 signal 4 } 
	{ input_5_input_array_5_address0 sc_out sc_lv 6 signal 5 } 
	{ input_5_input_array_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ input_5_input_array_5_q0 sc_in sc_lv 32 signal 5 } 
	{ input_5_input_array_6_address0 sc_out sc_lv 6 signal 6 } 
	{ input_5_input_array_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ input_5_input_array_6_q0 sc_in sc_lv 32 signal 6 } 
	{ input_5_input_array_7_address0 sc_out sc_lv 6 signal 7 } 
	{ input_5_input_array_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ input_5_input_array_7_q0 sc_in sc_lv 32 signal 7 } 
	{ input_5_input_array_8_address0 sc_out sc_lv 6 signal 8 } 
	{ input_5_input_array_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ input_5_input_array_8_q0 sc_in sc_lv 32 signal 8 } 
	{ input_5_input_array_9_address0 sc_out sc_lv 6 signal 9 } 
	{ input_5_input_array_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ input_5_input_array_9_q0 sc_in sc_lv 32 signal 9 } 
	{ input_5_input_array_10_address0 sc_out sc_lv 6 signal 10 } 
	{ input_5_input_array_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ input_5_input_array_10_q0 sc_in sc_lv 32 signal 10 } 
	{ input_5_input_array_11_address0 sc_out sc_lv 6 signal 11 } 
	{ input_5_input_array_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ input_5_input_array_11_q0 sc_in sc_lv 32 signal 11 } 
	{ input_5_input_array_12_address0 sc_out sc_lv 6 signal 12 } 
	{ input_5_input_array_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ input_5_input_array_12_q0 sc_in sc_lv 32 signal 12 } 
	{ input_5_input_array_13_address0 sc_out sc_lv 6 signal 13 } 
	{ input_5_input_array_13_ce0 sc_out sc_logic 1 signal 13 } 
	{ input_5_input_array_13_q0 sc_in sc_lv 32 signal 13 } 
	{ input_5_input_array_14_address0 sc_out sc_lv 6 signal 14 } 
	{ input_5_input_array_14_ce0 sc_out sc_logic 1 signal 14 } 
	{ input_5_input_array_14_q0 sc_in sc_lv 32 signal 14 } 
	{ input_5_input_array_15_address0 sc_out sc_lv 6 signal 15 } 
	{ input_5_input_array_15_ce0 sc_out sc_logic 1 signal 15 } 
	{ input_5_input_array_15_q0 sc_in sc_lv 32 signal 15 } 
	{ input_5_input_ndim sc_in sc_lv 64 signal 16 } 
	{ input_5_input_numel sc_in sc_lv 64 signal 17 } 
	{ input_5_input_shape_address0 sc_out sc_lv 3 signal 18 } 
	{ input_5_input_shape_ce0 sc_out sc_logic 1 signal 18 } 
	{ input_5_input_shape_we0 sc_out sc_logic 1 signal 18 } 
	{ input_5_input_shape_d0 sc_out sc_lv 64 signal 18 } 
	{ input_5_input_shape_q0 sc_in sc_lv 64 signal 18 } 
	{ input_5_input_shape_address1 sc_out sc_lv 3 signal 18 } 
	{ input_5_input_shape_ce1 sc_out sc_logic 1 signal 18 } 
	{ input_5_input_shape_we1 sc_out sc_logic 1 signal 18 } 
	{ input_5_input_shape_d1 sc_out sc_lv 64 signal 18 } 
	{ input_5_input_shape_q1 sc_in sc_lv 64 signal 18 } 
	{ dense_8_output_array_0_address0 sc_out sc_lv 6 signal 19 } 
	{ dense_8_output_array_0_ce0 sc_out sc_logic 1 signal 19 } 
	{ dense_8_output_array_0_we0 sc_out sc_logic 1 signal 19 } 
	{ dense_8_output_array_0_d0 sc_out sc_lv 32 signal 19 } 
	{ dense_8_output_array_0_q0 sc_in sc_lv 32 signal 19 } 
	{ dense_8_output_array_0_address1 sc_out sc_lv 6 signal 19 } 
	{ dense_8_output_array_0_ce1 sc_out sc_logic 1 signal 19 } 
	{ dense_8_output_array_0_we1 sc_out sc_logic 1 signal 19 } 
	{ dense_8_output_array_0_d1 sc_out sc_lv 32 signal 19 } 
	{ dense_8_output_array_1_address0 sc_out sc_lv 6 signal 20 } 
	{ dense_8_output_array_1_ce0 sc_out sc_logic 1 signal 20 } 
	{ dense_8_output_array_1_we0 sc_out sc_logic 1 signal 20 } 
	{ dense_8_output_array_1_d0 sc_out sc_lv 32 signal 20 } 
	{ dense_8_output_array_1_q0 sc_in sc_lv 32 signal 20 } 
	{ dense_8_output_array_1_address1 sc_out sc_lv 6 signal 20 } 
	{ dense_8_output_array_1_ce1 sc_out sc_logic 1 signal 20 } 
	{ dense_8_output_array_1_we1 sc_out sc_logic 1 signal 20 } 
	{ dense_8_output_array_1_d1 sc_out sc_lv 32 signal 20 } 
	{ dense_8_output_array_2_address0 sc_out sc_lv 6 signal 21 } 
	{ dense_8_output_array_2_ce0 sc_out sc_logic 1 signal 21 } 
	{ dense_8_output_array_2_we0 sc_out sc_logic 1 signal 21 } 
	{ dense_8_output_array_2_d0 sc_out sc_lv 32 signal 21 } 
	{ dense_8_output_array_2_q0 sc_in sc_lv 32 signal 21 } 
	{ dense_8_output_array_2_address1 sc_out sc_lv 6 signal 21 } 
	{ dense_8_output_array_2_ce1 sc_out sc_logic 1 signal 21 } 
	{ dense_8_output_array_2_we1 sc_out sc_logic 1 signal 21 } 
	{ dense_8_output_array_2_d1 sc_out sc_lv 32 signal 21 } 
	{ dense_8_output_array_3_address0 sc_out sc_lv 6 signal 22 } 
	{ dense_8_output_array_3_ce0 sc_out sc_logic 1 signal 22 } 
	{ dense_8_output_array_3_we0 sc_out sc_logic 1 signal 22 } 
	{ dense_8_output_array_3_d0 sc_out sc_lv 32 signal 22 } 
	{ dense_8_output_array_3_q0 sc_in sc_lv 32 signal 22 } 
	{ dense_8_output_array_3_address1 sc_out sc_lv 6 signal 22 } 
	{ dense_8_output_array_3_ce1 sc_out sc_logic 1 signal 22 } 
	{ dense_8_output_array_3_we1 sc_out sc_logic 1 signal 22 } 
	{ dense_8_output_array_3_d1 sc_out sc_lv 32 signal 22 } 
	{ dense_8_output_array_4_address0 sc_out sc_lv 6 signal 23 } 
	{ dense_8_output_array_4_ce0 sc_out sc_logic 1 signal 23 } 
	{ dense_8_output_array_4_we0 sc_out sc_logic 1 signal 23 } 
	{ dense_8_output_array_4_d0 sc_out sc_lv 32 signal 23 } 
	{ dense_8_output_array_4_q0 sc_in sc_lv 32 signal 23 } 
	{ dense_8_output_array_4_address1 sc_out sc_lv 6 signal 23 } 
	{ dense_8_output_array_4_ce1 sc_out sc_logic 1 signal 23 } 
	{ dense_8_output_array_4_we1 sc_out sc_logic 1 signal 23 } 
	{ dense_8_output_array_4_d1 sc_out sc_lv 32 signal 23 } 
	{ dense_8_output_array_5_address0 sc_out sc_lv 6 signal 24 } 
	{ dense_8_output_array_5_ce0 sc_out sc_logic 1 signal 24 } 
	{ dense_8_output_array_5_we0 sc_out sc_logic 1 signal 24 } 
	{ dense_8_output_array_5_d0 sc_out sc_lv 32 signal 24 } 
	{ dense_8_output_array_5_q0 sc_in sc_lv 32 signal 24 } 
	{ dense_8_output_array_5_address1 sc_out sc_lv 6 signal 24 } 
	{ dense_8_output_array_5_ce1 sc_out sc_logic 1 signal 24 } 
	{ dense_8_output_array_5_we1 sc_out sc_logic 1 signal 24 } 
	{ dense_8_output_array_5_d1 sc_out sc_lv 32 signal 24 } 
	{ dense_8_output_array_6_address0 sc_out sc_lv 6 signal 25 } 
	{ dense_8_output_array_6_ce0 sc_out sc_logic 1 signal 25 } 
	{ dense_8_output_array_6_we0 sc_out sc_logic 1 signal 25 } 
	{ dense_8_output_array_6_d0 sc_out sc_lv 32 signal 25 } 
	{ dense_8_output_array_6_q0 sc_in sc_lv 32 signal 25 } 
	{ dense_8_output_array_6_address1 sc_out sc_lv 6 signal 25 } 
	{ dense_8_output_array_6_ce1 sc_out sc_logic 1 signal 25 } 
	{ dense_8_output_array_6_we1 sc_out sc_logic 1 signal 25 } 
	{ dense_8_output_array_6_d1 sc_out sc_lv 32 signal 25 } 
	{ dense_8_output_array_7_address0 sc_out sc_lv 6 signal 26 } 
	{ dense_8_output_array_7_ce0 sc_out sc_logic 1 signal 26 } 
	{ dense_8_output_array_7_we0 sc_out sc_logic 1 signal 26 } 
	{ dense_8_output_array_7_d0 sc_out sc_lv 32 signal 26 } 
	{ dense_8_output_array_7_q0 sc_in sc_lv 32 signal 26 } 
	{ dense_8_output_array_7_address1 sc_out sc_lv 6 signal 26 } 
	{ dense_8_output_array_7_ce1 sc_out sc_logic 1 signal 26 } 
	{ dense_8_output_array_7_we1 sc_out sc_logic 1 signal 26 } 
	{ dense_8_output_array_7_d1 sc_out sc_lv 32 signal 26 } 
	{ dense_8_output_array_8_address0 sc_out sc_lv 6 signal 27 } 
	{ dense_8_output_array_8_ce0 sc_out sc_logic 1 signal 27 } 
	{ dense_8_output_array_8_we0 sc_out sc_logic 1 signal 27 } 
	{ dense_8_output_array_8_d0 sc_out sc_lv 32 signal 27 } 
	{ dense_8_output_array_8_q0 sc_in sc_lv 32 signal 27 } 
	{ dense_8_output_array_8_address1 sc_out sc_lv 6 signal 27 } 
	{ dense_8_output_array_8_ce1 sc_out sc_logic 1 signal 27 } 
	{ dense_8_output_array_8_we1 sc_out sc_logic 1 signal 27 } 
	{ dense_8_output_array_8_d1 sc_out sc_lv 32 signal 27 } 
	{ dense_8_output_array_9_address0 sc_out sc_lv 6 signal 28 } 
	{ dense_8_output_array_9_ce0 sc_out sc_logic 1 signal 28 } 
	{ dense_8_output_array_9_we0 sc_out sc_logic 1 signal 28 } 
	{ dense_8_output_array_9_d0 sc_out sc_lv 32 signal 28 } 
	{ dense_8_output_array_9_q0 sc_in sc_lv 32 signal 28 } 
	{ dense_8_output_array_9_address1 sc_out sc_lv 6 signal 28 } 
	{ dense_8_output_array_9_ce1 sc_out sc_logic 1 signal 28 } 
	{ dense_8_output_array_9_we1 sc_out sc_logic 1 signal 28 } 
	{ dense_8_output_array_9_d1 sc_out sc_lv 32 signal 28 } 
	{ dense_8_output_array_10_address0 sc_out sc_lv 6 signal 29 } 
	{ dense_8_output_array_10_ce0 sc_out sc_logic 1 signal 29 } 
	{ dense_8_output_array_10_we0 sc_out sc_logic 1 signal 29 } 
	{ dense_8_output_array_10_d0 sc_out sc_lv 32 signal 29 } 
	{ dense_8_output_array_10_q0 sc_in sc_lv 32 signal 29 } 
	{ dense_8_output_array_10_address1 sc_out sc_lv 6 signal 29 } 
	{ dense_8_output_array_10_ce1 sc_out sc_logic 1 signal 29 } 
	{ dense_8_output_array_10_we1 sc_out sc_logic 1 signal 29 } 
	{ dense_8_output_array_10_d1 sc_out sc_lv 32 signal 29 } 
	{ dense_8_output_array_11_address0 sc_out sc_lv 6 signal 30 } 
	{ dense_8_output_array_11_ce0 sc_out sc_logic 1 signal 30 } 
	{ dense_8_output_array_11_we0 sc_out sc_logic 1 signal 30 } 
	{ dense_8_output_array_11_d0 sc_out sc_lv 32 signal 30 } 
	{ dense_8_output_array_11_q0 sc_in sc_lv 32 signal 30 } 
	{ dense_8_output_array_11_address1 sc_out sc_lv 6 signal 30 } 
	{ dense_8_output_array_11_ce1 sc_out sc_logic 1 signal 30 } 
	{ dense_8_output_array_11_we1 sc_out sc_logic 1 signal 30 } 
	{ dense_8_output_array_11_d1 sc_out sc_lv 32 signal 30 } 
	{ dense_8_output_array_12_address0 sc_out sc_lv 6 signal 31 } 
	{ dense_8_output_array_12_ce0 sc_out sc_logic 1 signal 31 } 
	{ dense_8_output_array_12_we0 sc_out sc_logic 1 signal 31 } 
	{ dense_8_output_array_12_d0 sc_out sc_lv 32 signal 31 } 
	{ dense_8_output_array_12_q0 sc_in sc_lv 32 signal 31 } 
	{ dense_8_output_array_12_address1 sc_out sc_lv 6 signal 31 } 
	{ dense_8_output_array_12_ce1 sc_out sc_logic 1 signal 31 } 
	{ dense_8_output_array_12_we1 sc_out sc_logic 1 signal 31 } 
	{ dense_8_output_array_12_d1 sc_out sc_lv 32 signal 31 } 
	{ dense_8_output_array_13_address0 sc_out sc_lv 6 signal 32 } 
	{ dense_8_output_array_13_ce0 sc_out sc_logic 1 signal 32 } 
	{ dense_8_output_array_13_we0 sc_out sc_logic 1 signal 32 } 
	{ dense_8_output_array_13_d0 sc_out sc_lv 32 signal 32 } 
	{ dense_8_output_array_13_q0 sc_in sc_lv 32 signal 32 } 
	{ dense_8_output_array_13_address1 sc_out sc_lv 6 signal 32 } 
	{ dense_8_output_array_13_ce1 sc_out sc_logic 1 signal 32 } 
	{ dense_8_output_array_13_we1 sc_out sc_logic 1 signal 32 } 
	{ dense_8_output_array_13_d1 sc_out sc_lv 32 signal 32 } 
	{ dense_8_output_array_14_address0 sc_out sc_lv 6 signal 33 } 
	{ dense_8_output_array_14_ce0 sc_out sc_logic 1 signal 33 } 
	{ dense_8_output_array_14_we0 sc_out sc_logic 1 signal 33 } 
	{ dense_8_output_array_14_d0 sc_out sc_lv 32 signal 33 } 
	{ dense_8_output_array_14_q0 sc_in sc_lv 32 signal 33 } 
	{ dense_8_output_array_14_address1 sc_out sc_lv 6 signal 33 } 
	{ dense_8_output_array_14_ce1 sc_out sc_logic 1 signal 33 } 
	{ dense_8_output_array_14_we1 sc_out sc_logic 1 signal 33 } 
	{ dense_8_output_array_14_d1 sc_out sc_lv 32 signal 33 } 
	{ dense_8_output_array_15_address0 sc_out sc_lv 6 signal 34 } 
	{ dense_8_output_array_15_ce0 sc_out sc_logic 1 signal 34 } 
	{ dense_8_output_array_15_we0 sc_out sc_logic 1 signal 34 } 
	{ dense_8_output_array_15_d0 sc_out sc_lv 32 signal 34 } 
	{ dense_8_output_array_15_q0 sc_in sc_lv 32 signal 34 } 
	{ dense_8_output_array_15_address1 sc_out sc_lv 6 signal 34 } 
	{ dense_8_output_array_15_ce1 sc_out sc_logic 1 signal 34 } 
	{ dense_8_output_array_15_we1 sc_out sc_logic 1 signal 34 } 
	{ dense_8_output_array_15_d1 sc_out sc_lv 32 signal 34 } 
	{ dense_8_output_ndim sc_in sc_lv 64 signal 35 } 
	{ dense_8_output_numel sc_in sc_lv 64 signal 36 } 
	{ dense_8_output_shape_address0 sc_out sc_lv 3 signal 37 } 
	{ dense_8_output_shape_ce0 sc_out sc_logic 1 signal 37 } 
	{ dense_8_output_shape_we0 sc_out sc_logic 1 signal 37 } 
	{ dense_8_output_shape_d0 sc_out sc_lv 64 signal 37 } 
	{ dense_8_output_shape_q0 sc_in sc_lv 64 signal 37 } 
	{ dense_8_output_shape_address1 sc_out sc_lv 3 signal 37 } 
	{ dense_8_output_shape_ce1 sc_out sc_logic 1 signal 37 } 
	{ dense_8_output_shape_we1 sc_out sc_logic 1 signal 37 } 
	{ dense_8_output_shape_d1 sc_out sc_lv 64 signal 37 } 
	{ dense_8_output_shape_q1 sc_in sc_lv 64 signal 37 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_5_input_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_0", "role": "address0" }} , 
 	{ "name": "input_5_input_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_0", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_0", "role": "q0" }} , 
 	{ "name": "input_5_input_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_1", "role": "address0" }} , 
 	{ "name": "input_5_input_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_1", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_1", "role": "q0" }} , 
 	{ "name": "input_5_input_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_2", "role": "address0" }} , 
 	{ "name": "input_5_input_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_2", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_2", "role": "q0" }} , 
 	{ "name": "input_5_input_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_3", "role": "address0" }} , 
 	{ "name": "input_5_input_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_3", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_3", "role": "q0" }} , 
 	{ "name": "input_5_input_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_4", "role": "address0" }} , 
 	{ "name": "input_5_input_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_4", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_4", "role": "q0" }} , 
 	{ "name": "input_5_input_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_5", "role": "address0" }} , 
 	{ "name": "input_5_input_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_5", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_5", "role": "q0" }} , 
 	{ "name": "input_5_input_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_6", "role": "address0" }} , 
 	{ "name": "input_5_input_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_6", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_6", "role": "q0" }} , 
 	{ "name": "input_5_input_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_7", "role": "address0" }} , 
 	{ "name": "input_5_input_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_7", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_7", "role": "q0" }} , 
 	{ "name": "input_5_input_array_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_8", "role": "address0" }} , 
 	{ "name": "input_5_input_array_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_8", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_8", "role": "q0" }} , 
 	{ "name": "input_5_input_array_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_9", "role": "address0" }} , 
 	{ "name": "input_5_input_array_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_9", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_9", "role": "q0" }} , 
 	{ "name": "input_5_input_array_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_10", "role": "address0" }} , 
 	{ "name": "input_5_input_array_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_10", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_10", "role": "q0" }} , 
 	{ "name": "input_5_input_array_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_11", "role": "address0" }} , 
 	{ "name": "input_5_input_array_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_11", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_11", "role": "q0" }} , 
 	{ "name": "input_5_input_array_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_12", "role": "address0" }} , 
 	{ "name": "input_5_input_array_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_12", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_12", "role": "q0" }} , 
 	{ "name": "input_5_input_array_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_13", "role": "address0" }} , 
 	{ "name": "input_5_input_array_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_13", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_13", "role": "q0" }} , 
 	{ "name": "input_5_input_array_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_14", "role": "address0" }} , 
 	{ "name": "input_5_input_array_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_14", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_14", "role": "q0" }} , 
 	{ "name": "input_5_input_array_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_input_array_15", "role": "address0" }} , 
 	{ "name": "input_5_input_array_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_array_15", "role": "ce0" }} , 
 	{ "name": "input_5_input_array_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_5_input_array_15", "role": "q0" }} , 
 	{ "name": "input_5_input_ndim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_5_input_ndim", "role": "default" }} , 
 	{ "name": "input_5_input_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_5_input_numel", "role": "default" }} , 
 	{ "name": "input_5_input_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "address0" }} , 
 	{ "name": "input_5_input_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "ce0" }} , 
 	{ "name": "input_5_input_shape_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "we0" }} , 
 	{ "name": "input_5_input_shape_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "d0" }} , 
 	{ "name": "input_5_input_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "q0" }} , 
 	{ "name": "input_5_input_shape_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "address1" }} , 
 	{ "name": "input_5_input_shape_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "ce1" }} , 
 	{ "name": "input_5_input_shape_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "we1" }} , 
 	{ "name": "input_5_input_shape_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "d1" }} , 
 	{ "name": "input_5_input_shape_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_5_input_shape", "role": "q1" }} , 
 	{ "name": "dense_8_output_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_0", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_1", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_2", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_3", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_4_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_4_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_4", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_5_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_5_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_5", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_6_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_6_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_6", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_7_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_7_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_7", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_8_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_8_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_8", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_9_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_9_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_9", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_10_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_10_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_10", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_11_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_11_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_11", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_12_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_12_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_12", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_13_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_13_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_13", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_14_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_14_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_14", "role": "d1" }} , 
 	{ "name": "dense_8_output_array_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "address0" }} , 
 	{ "name": "dense_8_output_array_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "ce0" }} , 
 	{ "name": "dense_8_output_array_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "we0" }} , 
 	{ "name": "dense_8_output_array_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "d0" }} , 
 	{ "name": "dense_8_output_array_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "q0" }} , 
 	{ "name": "dense_8_output_array_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "address1" }} , 
 	{ "name": "dense_8_output_array_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "ce1" }} , 
 	{ "name": "dense_8_output_array_15_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "we1" }} , 
 	{ "name": "dense_8_output_array_15_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_8_output_array_15", "role": "d1" }} , 
 	{ "name": "dense_8_output_ndim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_8_output_ndim", "role": "default" }} , 
 	{ "name": "dense_8_output_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_8_output_numel", "role": "default" }} , 
 	{ "name": "dense_8_output_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "address0" }} , 
 	{ "name": "dense_8_output_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "ce0" }} , 
 	{ "name": "dense_8_output_shape_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "we0" }} , 
 	{ "name": "dense_8_output_shape_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "d0" }} , 
 	{ "name": "dense_8_output_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "q0" }} , 
 	{ "name": "dense_8_output_shape_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "address1" }} , 
 	{ "name": "dense_8_output_shape_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "ce1" }} , 
 	{ "name": "dense_8_output_shape_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "we1" }} , 
 	{ "name": "dense_8_output_shape_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "d1" }} , 
 	{ "name": "dense_8_output_shape_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_8_output_shape", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156"],
		"CDFG" : "c_mnist",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_5_input_array_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_array_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_input_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_5_input_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_5_input_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "dense_8_output_array_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_array_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_8_output_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_8_output_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_8_output_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "flatten_4_output_arr_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "flatten_4_output_arr_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_output_array_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_6_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_6_kernel_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_7_output_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_output_array_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_7_kernel_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_7_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_8_kernel_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_8_bias_array", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_15_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_14_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_7_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_6_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_3_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_2_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_1_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_13_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_12_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_11_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_10_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_9_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flatten_4_output_arr_8_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_3_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_4_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_5_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_6_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_7_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_8_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_9_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_10_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_11_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_12_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_13_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_14_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_output_array_15_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_bias_array_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_6_kernel_array_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_1_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_2_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_3_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_4_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_5_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_6_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_7_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_8_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_9_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_10_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_11_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_12_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_13_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_14_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_output_array_15_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_kernel_array_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_7_bias_array_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_8_kernel_array_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_8_bias_array_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_1_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_2_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_3_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_4_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_5_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_6_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_7_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_8_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_9_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_10_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_11_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_12_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_13_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_14_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_4_output_arr_15_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_1_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_2_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_3_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_4_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_5_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_6_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_7_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_8_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_9_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_10_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_11_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_12_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_13_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_14_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dropout_5_output_arr_15_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U1", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U2", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U3", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U4", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U5", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U6", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U7", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U8", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U9", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U10", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U11", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U12", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U13", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U14", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U15", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fadd_32nsbzo_U16", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U17", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U18", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U19", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U20", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U21", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U22", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U23", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U24", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U25", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U26", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U27", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U28", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U29", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U30", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U31", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fmul_32nsbAo_U32", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U33", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U34", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U35", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U36", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U37", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U38", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U39", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U40", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U41", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U42", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U43", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U44", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U45", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U46", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U47", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U48", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U49", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U50", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U51", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U52", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U53", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U54", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U55", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U56", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U57", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U58", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U59", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U60", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U61", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U62", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U63", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_fcmp_32nsbBo_U64", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_mux_1664_bCo_U65", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_mux_1664_bCo_U66", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_mux_1664_bCo_U67", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_mux_1664_bCo_U68", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_mux_1664_bCo_U69", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_mnist_mux_1664_bCo_U70", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	c_mnist {
		input_5_input_array_0 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_1 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_2 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_3 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_4 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_5 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_6 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_7 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_8 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_9 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_10 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_11 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_12 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_13 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_14 {Type I LastRead 1 FirstWrite -1}
		input_5_input_array_15 {Type I LastRead 1 FirstWrite -1}
		input_5_input_ndim {Type I LastRead -1 FirstWrite -1}
		input_5_input_numel {Type I LastRead 0 FirstWrite -1}
		input_5_input_shape {Type X LastRead -1 FirstWrite -1}
		dense_8_output_array_0 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_1 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_2 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_3 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_4 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_5 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_6 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_7 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_8 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_9 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_10 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_11 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_12 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_13 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_14 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_array_15 {Type IO LastRead 22 FirstWrite 19}
		dense_8_output_ndim {Type I LastRead -1 FirstWrite -1}
		dense_8_output_numel {Type I LastRead -1 FirstWrite -1}
		dense_8_output_shape {Type X LastRead -1 FirstWrite -1}
		flatten_4_output_arr_15 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_14 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_7 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_6 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_5 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_4 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_3 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_2 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_1 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_13 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_12 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_11 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_10 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_9 {Type IO LastRead -1 FirstWrite -1}
		flatten_4_output_arr_8 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_1 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_2 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_3 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_4 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_5 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_6 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_7 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_8 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_9 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_10 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_11 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_12 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_13 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_14 {Type IO LastRead -1 FirstWrite -1}
		dense_6_output_array_15 {Type IO LastRead -1 FirstWrite -1}
		dense_6_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_6_kernel_array {Type I LastRead -1 FirstWrite -1}
		dense_7_output_array {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_1 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_2 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_3 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_4 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_5 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_6 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_7 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_8 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_9 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_10 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_11 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_12 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_13 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_14 {Type IO LastRead -1 FirstWrite -1}
		dense_7_output_array_15 {Type IO LastRead -1 FirstWrite -1}
		dense_7_kernel_array {Type I LastRead -1 FirstWrite -1}
		dense_7_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_8_kernel_array {Type I LastRead -1 FirstWrite -1}
		dense_8_bias_array {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
	{"Pipeline" : "10", "EnableSignal" : "ap_enable_pp10"}
	{"Pipeline" : "11", "EnableSignal" : "ap_enable_pp11"}
]}

set Spec2ImplPortList { 
	input_5_input_array_0 { ap_memory {  { input_5_input_array_0_address0 mem_address 1 6 }  { input_5_input_array_0_ce0 mem_ce 1 1 }  { input_5_input_array_0_q0 mem_dout 0 32 } } }
	input_5_input_array_1 { ap_memory {  { input_5_input_array_1_address0 mem_address 1 6 }  { input_5_input_array_1_ce0 mem_ce 1 1 }  { input_5_input_array_1_q0 mem_dout 0 32 } } }
	input_5_input_array_2 { ap_memory {  { input_5_input_array_2_address0 mem_address 1 6 }  { input_5_input_array_2_ce0 mem_ce 1 1 }  { input_5_input_array_2_q0 mem_dout 0 32 } } }
	input_5_input_array_3 { ap_memory {  { input_5_input_array_3_address0 mem_address 1 6 }  { input_5_input_array_3_ce0 mem_ce 1 1 }  { input_5_input_array_3_q0 mem_dout 0 32 } } }
	input_5_input_array_4 { ap_memory {  { input_5_input_array_4_address0 mem_address 1 6 }  { input_5_input_array_4_ce0 mem_ce 1 1 }  { input_5_input_array_4_q0 mem_dout 0 32 } } }
	input_5_input_array_5 { ap_memory {  { input_5_input_array_5_address0 mem_address 1 6 }  { input_5_input_array_5_ce0 mem_ce 1 1 }  { input_5_input_array_5_q0 mem_dout 0 32 } } }
	input_5_input_array_6 { ap_memory {  { input_5_input_array_6_address0 mem_address 1 6 }  { input_5_input_array_6_ce0 mem_ce 1 1 }  { input_5_input_array_6_q0 mem_dout 0 32 } } }
	input_5_input_array_7 { ap_memory {  { input_5_input_array_7_address0 mem_address 1 6 }  { input_5_input_array_7_ce0 mem_ce 1 1 }  { input_5_input_array_7_q0 mem_dout 0 32 } } }
	input_5_input_array_8 { ap_memory {  { input_5_input_array_8_address0 mem_address 1 6 }  { input_5_input_array_8_ce0 mem_ce 1 1 }  { input_5_input_array_8_q0 mem_dout 0 32 } } }
	input_5_input_array_9 { ap_memory {  { input_5_input_array_9_address0 mem_address 1 6 }  { input_5_input_array_9_ce0 mem_ce 1 1 }  { input_5_input_array_9_q0 mem_dout 0 32 } } }
	input_5_input_array_10 { ap_memory {  { input_5_input_array_10_address0 mem_address 1 6 }  { input_5_input_array_10_ce0 mem_ce 1 1 }  { input_5_input_array_10_q0 mem_dout 0 32 } } }
	input_5_input_array_11 { ap_memory {  { input_5_input_array_11_address0 mem_address 1 6 }  { input_5_input_array_11_ce0 mem_ce 1 1 }  { input_5_input_array_11_q0 mem_dout 0 32 } } }
	input_5_input_array_12 { ap_memory {  { input_5_input_array_12_address0 mem_address 1 6 }  { input_5_input_array_12_ce0 mem_ce 1 1 }  { input_5_input_array_12_q0 mem_dout 0 32 } } }
	input_5_input_array_13 { ap_memory {  { input_5_input_array_13_address0 mem_address 1 6 }  { input_5_input_array_13_ce0 mem_ce 1 1 }  { input_5_input_array_13_q0 mem_dout 0 32 } } }
	input_5_input_array_14 { ap_memory {  { input_5_input_array_14_address0 mem_address 1 6 }  { input_5_input_array_14_ce0 mem_ce 1 1 }  { input_5_input_array_14_q0 mem_dout 0 32 } } }
	input_5_input_array_15 { ap_memory {  { input_5_input_array_15_address0 mem_address 1 6 }  { input_5_input_array_15_ce0 mem_ce 1 1 }  { input_5_input_array_15_q0 mem_dout 0 32 } } }
	input_5_input_ndim { ap_none {  { input_5_input_ndim in_data 0 64 } } }
	input_5_input_numel { ap_none {  { input_5_input_numel in_data 0 64 } } }
	input_5_input_shape { ap_memory {  { input_5_input_shape_address0 mem_address 1 3 }  { input_5_input_shape_ce0 mem_ce 1 1 }  { input_5_input_shape_we0 mem_we 1 1 }  { input_5_input_shape_d0 mem_din 1 64 }  { input_5_input_shape_q0 mem_dout 0 64 }  { input_5_input_shape_address1 mem_address 1 3 }  { input_5_input_shape_ce1 mem_ce 1 1 }  { input_5_input_shape_we1 mem_we 1 1 }  { input_5_input_shape_d1 mem_din 1 64 }  { input_5_input_shape_q1 mem_dout 0 64 } } }
	dense_8_output_array_0 { ap_memory {  { dense_8_output_array_0_address0 mem_address 1 6 }  { dense_8_output_array_0_ce0 mem_ce 1 1 }  { dense_8_output_array_0_we0 mem_we 1 1 }  { dense_8_output_array_0_d0 mem_din 1 32 }  { dense_8_output_array_0_q0 mem_dout 0 32 }  { dense_8_output_array_0_address1 mem_address 1 6 }  { dense_8_output_array_0_ce1 mem_ce 1 1 }  { dense_8_output_array_0_we1 mem_we 1 1 }  { dense_8_output_array_0_d1 mem_din 1 32 } } }
	dense_8_output_array_1 { ap_memory {  { dense_8_output_array_1_address0 mem_address 1 6 }  { dense_8_output_array_1_ce0 mem_ce 1 1 }  { dense_8_output_array_1_we0 mem_we 1 1 }  { dense_8_output_array_1_d0 mem_din 1 32 }  { dense_8_output_array_1_q0 mem_dout 0 32 }  { dense_8_output_array_1_address1 mem_address 1 6 }  { dense_8_output_array_1_ce1 mem_ce 1 1 }  { dense_8_output_array_1_we1 mem_we 1 1 }  { dense_8_output_array_1_d1 mem_din 1 32 } } }
	dense_8_output_array_2 { ap_memory {  { dense_8_output_array_2_address0 mem_address 1 6 }  { dense_8_output_array_2_ce0 mem_ce 1 1 }  { dense_8_output_array_2_we0 mem_we 1 1 }  { dense_8_output_array_2_d0 mem_din 1 32 }  { dense_8_output_array_2_q0 mem_dout 0 32 }  { dense_8_output_array_2_address1 mem_address 1 6 }  { dense_8_output_array_2_ce1 mem_ce 1 1 }  { dense_8_output_array_2_we1 mem_we 1 1 }  { dense_8_output_array_2_d1 mem_din 1 32 } } }
	dense_8_output_array_3 { ap_memory {  { dense_8_output_array_3_address0 mem_address 1 6 }  { dense_8_output_array_3_ce0 mem_ce 1 1 }  { dense_8_output_array_3_we0 mem_we 1 1 }  { dense_8_output_array_3_d0 mem_din 1 32 }  { dense_8_output_array_3_q0 mem_dout 0 32 }  { dense_8_output_array_3_address1 mem_address 1 6 }  { dense_8_output_array_3_ce1 mem_ce 1 1 }  { dense_8_output_array_3_we1 mem_we 1 1 }  { dense_8_output_array_3_d1 mem_din 1 32 } } }
	dense_8_output_array_4 { ap_memory {  { dense_8_output_array_4_address0 mem_address 1 6 }  { dense_8_output_array_4_ce0 mem_ce 1 1 }  { dense_8_output_array_4_we0 mem_we 1 1 }  { dense_8_output_array_4_d0 mem_din 1 32 }  { dense_8_output_array_4_q0 mem_dout 0 32 }  { dense_8_output_array_4_address1 mem_address 1 6 }  { dense_8_output_array_4_ce1 mem_ce 1 1 }  { dense_8_output_array_4_we1 mem_we 1 1 }  { dense_8_output_array_4_d1 mem_din 1 32 } } }
	dense_8_output_array_5 { ap_memory {  { dense_8_output_array_5_address0 mem_address 1 6 }  { dense_8_output_array_5_ce0 mem_ce 1 1 }  { dense_8_output_array_5_we0 mem_we 1 1 }  { dense_8_output_array_5_d0 mem_din 1 32 }  { dense_8_output_array_5_q0 mem_dout 0 32 }  { dense_8_output_array_5_address1 mem_address 1 6 }  { dense_8_output_array_5_ce1 mem_ce 1 1 }  { dense_8_output_array_5_we1 mem_we 1 1 }  { dense_8_output_array_5_d1 mem_din 1 32 } } }
	dense_8_output_array_6 { ap_memory {  { dense_8_output_array_6_address0 mem_address 1 6 }  { dense_8_output_array_6_ce0 mem_ce 1 1 }  { dense_8_output_array_6_we0 mem_we 1 1 }  { dense_8_output_array_6_d0 mem_din 1 32 }  { dense_8_output_array_6_q0 mem_dout 0 32 }  { dense_8_output_array_6_address1 mem_address 1 6 }  { dense_8_output_array_6_ce1 mem_ce 1 1 }  { dense_8_output_array_6_we1 mem_we 1 1 }  { dense_8_output_array_6_d1 mem_din 1 32 } } }
	dense_8_output_array_7 { ap_memory {  { dense_8_output_array_7_address0 mem_address 1 6 }  { dense_8_output_array_7_ce0 mem_ce 1 1 }  { dense_8_output_array_7_we0 mem_we 1 1 }  { dense_8_output_array_7_d0 mem_din 1 32 }  { dense_8_output_array_7_q0 mem_dout 0 32 }  { dense_8_output_array_7_address1 mem_address 1 6 }  { dense_8_output_array_7_ce1 mem_ce 1 1 }  { dense_8_output_array_7_we1 mem_we 1 1 }  { dense_8_output_array_7_d1 mem_din 1 32 } } }
	dense_8_output_array_8 { ap_memory {  { dense_8_output_array_8_address0 mem_address 1 6 }  { dense_8_output_array_8_ce0 mem_ce 1 1 }  { dense_8_output_array_8_we0 mem_we 1 1 }  { dense_8_output_array_8_d0 mem_din 1 32 }  { dense_8_output_array_8_q0 mem_dout 0 32 }  { dense_8_output_array_8_address1 mem_address 1 6 }  { dense_8_output_array_8_ce1 mem_ce 1 1 }  { dense_8_output_array_8_we1 mem_we 1 1 }  { dense_8_output_array_8_d1 mem_din 1 32 } } }
	dense_8_output_array_9 { ap_memory {  { dense_8_output_array_9_address0 mem_address 1 6 }  { dense_8_output_array_9_ce0 mem_ce 1 1 }  { dense_8_output_array_9_we0 mem_we 1 1 }  { dense_8_output_array_9_d0 mem_din 1 32 }  { dense_8_output_array_9_q0 mem_dout 0 32 }  { dense_8_output_array_9_address1 mem_address 1 6 }  { dense_8_output_array_9_ce1 mem_ce 1 1 }  { dense_8_output_array_9_we1 mem_we 1 1 }  { dense_8_output_array_9_d1 mem_din 1 32 } } }
	dense_8_output_array_10 { ap_memory {  { dense_8_output_array_10_address0 mem_address 1 6 }  { dense_8_output_array_10_ce0 mem_ce 1 1 }  { dense_8_output_array_10_we0 mem_we 1 1 }  { dense_8_output_array_10_d0 mem_din 1 32 }  { dense_8_output_array_10_q0 mem_dout 0 32 }  { dense_8_output_array_10_address1 mem_address 1 6 }  { dense_8_output_array_10_ce1 mem_ce 1 1 }  { dense_8_output_array_10_we1 mem_we 1 1 }  { dense_8_output_array_10_d1 mem_din 1 32 } } }
	dense_8_output_array_11 { ap_memory {  { dense_8_output_array_11_address0 mem_address 1 6 }  { dense_8_output_array_11_ce0 mem_ce 1 1 }  { dense_8_output_array_11_we0 mem_we 1 1 }  { dense_8_output_array_11_d0 mem_din 1 32 }  { dense_8_output_array_11_q0 mem_dout 0 32 }  { dense_8_output_array_11_address1 mem_address 1 6 }  { dense_8_output_array_11_ce1 mem_ce 1 1 }  { dense_8_output_array_11_we1 mem_we 1 1 }  { dense_8_output_array_11_d1 mem_din 1 32 } } }
	dense_8_output_array_12 { ap_memory {  { dense_8_output_array_12_address0 mem_address 1 6 }  { dense_8_output_array_12_ce0 mem_ce 1 1 }  { dense_8_output_array_12_we0 mem_we 1 1 }  { dense_8_output_array_12_d0 mem_din 1 32 }  { dense_8_output_array_12_q0 mem_dout 0 32 }  { dense_8_output_array_12_address1 mem_address 1 6 }  { dense_8_output_array_12_ce1 mem_ce 1 1 }  { dense_8_output_array_12_we1 mem_we 1 1 }  { dense_8_output_array_12_d1 mem_din 1 32 } } }
	dense_8_output_array_13 { ap_memory {  { dense_8_output_array_13_address0 mem_address 1 6 }  { dense_8_output_array_13_ce0 mem_ce 1 1 }  { dense_8_output_array_13_we0 mem_we 1 1 }  { dense_8_output_array_13_d0 mem_din 1 32 }  { dense_8_output_array_13_q0 mem_dout 0 32 }  { dense_8_output_array_13_address1 mem_address 1 6 }  { dense_8_output_array_13_ce1 mem_ce 1 1 }  { dense_8_output_array_13_we1 mem_we 1 1 }  { dense_8_output_array_13_d1 mem_din 1 32 } } }
	dense_8_output_array_14 { ap_memory {  { dense_8_output_array_14_address0 mem_address 1 6 }  { dense_8_output_array_14_ce0 mem_ce 1 1 }  { dense_8_output_array_14_we0 mem_we 1 1 }  { dense_8_output_array_14_d0 mem_din 1 32 }  { dense_8_output_array_14_q0 mem_dout 0 32 }  { dense_8_output_array_14_address1 mem_address 1 6 }  { dense_8_output_array_14_ce1 mem_ce 1 1 }  { dense_8_output_array_14_we1 mem_we 1 1 }  { dense_8_output_array_14_d1 mem_din 1 32 } } }
	dense_8_output_array_15 { ap_memory {  { dense_8_output_array_15_address0 mem_address 1 6 }  { dense_8_output_array_15_ce0 mem_ce 1 1 }  { dense_8_output_array_15_we0 mem_we 1 1 }  { dense_8_output_array_15_d0 mem_din 1 32 }  { dense_8_output_array_15_q0 mem_dout 0 32 }  { dense_8_output_array_15_address1 mem_address 1 6 }  { dense_8_output_array_15_ce1 mem_ce 1 1 }  { dense_8_output_array_15_we1 mem_we 1 1 }  { dense_8_output_array_15_d1 mem_din 1 32 } } }
	dense_8_output_ndim { ap_none {  { dense_8_output_ndim in_data 0 64 } } }
	dense_8_output_numel { ap_none {  { dense_8_output_numel in_data 0 64 } } }
	dense_8_output_shape { ap_memory {  { dense_8_output_shape_address0 mem_address 1 3 }  { dense_8_output_shape_ce0 mem_ce 1 1 }  { dense_8_output_shape_we0 mem_we 1 1 }  { dense_8_output_shape_d0 mem_din 1 64 }  { dense_8_output_shape_q0 mem_dout 0 64 }  { dense_8_output_shape_address1 mem_address 1 3 }  { dense_8_output_shape_ce1 mem_ce 1 1 }  { dense_8_output_shape_we1 mem_we 1 1 }  { dense_8_output_shape_d1 mem_din 1 64 }  { dense_8_output_shape_q1 mem_dout 0 64 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
