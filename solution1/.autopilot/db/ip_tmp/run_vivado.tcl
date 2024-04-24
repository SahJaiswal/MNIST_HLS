create_project prj -part xcvu13p-flga2577-2-e -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "C:/vivado/avinav_mnist/solution1/syn/verilog/c_mnist_ap_fadd_2_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips c_mnist_ap_fadd_2_full_dsp_32]]
}
source "C:/vivado/avinav_mnist/solution1/syn/verilog/c_mnist_ap_fcmp_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips c_mnist_ap_fcmp_0_no_dsp_32]]
}
source "C:/vivado/avinav_mnist/solution1/syn/verilog/c_mnist_ap_fmul_0_max_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips c_mnist_ap_fmul_0_max_dsp_32]]
}
