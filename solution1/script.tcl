############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project avinav_mnist
set_top c_mnist
add_files avinav_mnist/include/k2c_tensor_include.h
add_files avinav_mnist/c_mnist.h
add_files avinav_mnist/c_mnist.c
add_files -tb avinav_mnist/c_mnist_test_suite.c -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcvu13p-flga2577-2-e}
create_clock -period 10 -name default
#source "./avinav_mnist/solution1/directives.tcl"
csim_design -ldflags {-Wl,--stack,16777216} -clean
csynth_design
cosim_design -ldflags {-Wl,--stack,16777216}
export_design -format ip_catalog
