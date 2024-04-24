#include "c_mnist.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void c_mnist::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_0_address0\" :  \"" << input_5_input_array_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_0_ce0\" :  \"" << input_5_input_array_0_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_0_q0\" :  \"" << input_5_input_array_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_1_address0\" :  \"" << input_5_input_array_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_1_ce0\" :  \"" << input_5_input_array_1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_1_q0\" :  \"" << input_5_input_array_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_2_address0\" :  \"" << input_5_input_array_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_2_ce0\" :  \"" << input_5_input_array_2_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_2_q0\" :  \"" << input_5_input_array_2_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_3_address0\" :  \"" << input_5_input_array_3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_3_ce0\" :  \"" << input_5_input_array_3_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_3_q0\" :  \"" << input_5_input_array_3_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_4_address0\" :  \"" << input_5_input_array_4_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_4_ce0\" :  \"" << input_5_input_array_4_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_4_q0\" :  \"" << input_5_input_array_4_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_5_address0\" :  \"" << input_5_input_array_5_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_5_ce0\" :  \"" << input_5_input_array_5_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_5_q0\" :  \"" << input_5_input_array_5_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_6_address0\" :  \"" << input_5_input_array_6_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_6_ce0\" :  \"" << input_5_input_array_6_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_6_q0\" :  \"" << input_5_input_array_6_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_7_address0\" :  \"" << input_5_input_array_7_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_7_ce0\" :  \"" << input_5_input_array_7_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_7_q0\" :  \"" << input_5_input_array_7_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_8_address0\" :  \"" << input_5_input_array_8_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_8_ce0\" :  \"" << input_5_input_array_8_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_8_q0\" :  \"" << input_5_input_array_8_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_9_address0\" :  \"" << input_5_input_array_9_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_9_ce0\" :  \"" << input_5_input_array_9_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_9_q0\" :  \"" << input_5_input_array_9_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_10_address0\" :  \"" << input_5_input_array_10_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_10_ce0\" :  \"" << input_5_input_array_10_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_10_q0\" :  \"" << input_5_input_array_10_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_11_address0\" :  \"" << input_5_input_array_11_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_11_ce0\" :  \"" << input_5_input_array_11_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_11_q0\" :  \"" << input_5_input_array_11_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_12_address0\" :  \"" << input_5_input_array_12_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_12_ce0\" :  \"" << input_5_input_array_12_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_12_q0\" :  \"" << input_5_input_array_12_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_13_address0\" :  \"" << input_5_input_array_13_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_13_ce0\" :  \"" << input_5_input_array_13_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_13_q0\" :  \"" << input_5_input_array_13_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_14_address0\" :  \"" << input_5_input_array_14_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_14_ce0\" :  \"" << input_5_input_array_14_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_14_q0\" :  \"" << input_5_input_array_14_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_15_address0\" :  \"" << input_5_input_array_15_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_array_15_ce0\" :  \"" << input_5_input_array_15_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_array_15_q0\" :  \"" << input_5_input_array_15_q0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_ndim\" :  \"" << input_5_input_ndim.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_numel\" :  \"" << input_5_input_numel.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_address0\" :  \"" << input_5_input_shape_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_ce0\" :  \"" << input_5_input_shape_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_we0\" :  \"" << input_5_input_shape_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_d0\" :  \"" << input_5_input_shape_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_shape_q0\" :  \"" << input_5_input_shape_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_address1\" :  \"" << input_5_input_shape_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_ce1\" :  \"" << input_5_input_shape_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_we1\" :  \"" << input_5_input_shape_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_5_input_shape_d1\" :  \"" << input_5_input_shape_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_5_input_shape_q1\" :  \"" << input_5_input_shape_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_address0\" :  \"" << dense_8_output_array_0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_ce0\" :  \"" << dense_8_output_array_0_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_we0\" :  \"" << dense_8_output_array_0_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_d0\" :  \"" << dense_8_output_array_0_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_0_q0\" :  \"" << dense_8_output_array_0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_address1\" :  \"" << dense_8_output_array_0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_ce1\" :  \"" << dense_8_output_array_0_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_we1\" :  \"" << dense_8_output_array_0_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_0_d1\" :  \"" << dense_8_output_array_0_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_address0\" :  \"" << dense_8_output_array_1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_ce0\" :  \"" << dense_8_output_array_1_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_we0\" :  \"" << dense_8_output_array_1_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_d0\" :  \"" << dense_8_output_array_1_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_1_q0\" :  \"" << dense_8_output_array_1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_address1\" :  \"" << dense_8_output_array_1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_ce1\" :  \"" << dense_8_output_array_1_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_we1\" :  \"" << dense_8_output_array_1_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_1_d1\" :  \"" << dense_8_output_array_1_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_address0\" :  \"" << dense_8_output_array_2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_ce0\" :  \"" << dense_8_output_array_2_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_we0\" :  \"" << dense_8_output_array_2_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_d0\" :  \"" << dense_8_output_array_2_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_2_q0\" :  \"" << dense_8_output_array_2_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_address1\" :  \"" << dense_8_output_array_2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_ce1\" :  \"" << dense_8_output_array_2_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_we1\" :  \"" << dense_8_output_array_2_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_2_d1\" :  \"" << dense_8_output_array_2_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_address0\" :  \"" << dense_8_output_array_3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_ce0\" :  \"" << dense_8_output_array_3_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_we0\" :  \"" << dense_8_output_array_3_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_d0\" :  \"" << dense_8_output_array_3_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_3_q0\" :  \"" << dense_8_output_array_3_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_address1\" :  \"" << dense_8_output_array_3_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_ce1\" :  \"" << dense_8_output_array_3_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_we1\" :  \"" << dense_8_output_array_3_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_3_d1\" :  \"" << dense_8_output_array_3_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_address0\" :  \"" << dense_8_output_array_4_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_ce0\" :  \"" << dense_8_output_array_4_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_we0\" :  \"" << dense_8_output_array_4_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_d0\" :  \"" << dense_8_output_array_4_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_4_q0\" :  \"" << dense_8_output_array_4_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_address1\" :  \"" << dense_8_output_array_4_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_ce1\" :  \"" << dense_8_output_array_4_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_we1\" :  \"" << dense_8_output_array_4_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_4_d1\" :  \"" << dense_8_output_array_4_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_address0\" :  \"" << dense_8_output_array_5_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_ce0\" :  \"" << dense_8_output_array_5_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_we0\" :  \"" << dense_8_output_array_5_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_d0\" :  \"" << dense_8_output_array_5_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_5_q0\" :  \"" << dense_8_output_array_5_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_address1\" :  \"" << dense_8_output_array_5_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_ce1\" :  \"" << dense_8_output_array_5_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_we1\" :  \"" << dense_8_output_array_5_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_5_d1\" :  \"" << dense_8_output_array_5_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_address0\" :  \"" << dense_8_output_array_6_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_ce0\" :  \"" << dense_8_output_array_6_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_we0\" :  \"" << dense_8_output_array_6_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_d0\" :  \"" << dense_8_output_array_6_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_6_q0\" :  \"" << dense_8_output_array_6_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_address1\" :  \"" << dense_8_output_array_6_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_ce1\" :  \"" << dense_8_output_array_6_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_we1\" :  \"" << dense_8_output_array_6_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_6_d1\" :  \"" << dense_8_output_array_6_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_address0\" :  \"" << dense_8_output_array_7_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_ce0\" :  \"" << dense_8_output_array_7_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_we0\" :  \"" << dense_8_output_array_7_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_d0\" :  \"" << dense_8_output_array_7_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_7_q0\" :  \"" << dense_8_output_array_7_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_address1\" :  \"" << dense_8_output_array_7_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_ce1\" :  \"" << dense_8_output_array_7_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_we1\" :  \"" << dense_8_output_array_7_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_7_d1\" :  \"" << dense_8_output_array_7_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_address0\" :  \"" << dense_8_output_array_8_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_ce0\" :  \"" << dense_8_output_array_8_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_we0\" :  \"" << dense_8_output_array_8_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_d0\" :  \"" << dense_8_output_array_8_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_8_q0\" :  \"" << dense_8_output_array_8_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_address1\" :  \"" << dense_8_output_array_8_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_ce1\" :  \"" << dense_8_output_array_8_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_we1\" :  \"" << dense_8_output_array_8_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_8_d1\" :  \"" << dense_8_output_array_8_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_address0\" :  \"" << dense_8_output_array_9_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_ce0\" :  \"" << dense_8_output_array_9_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_we0\" :  \"" << dense_8_output_array_9_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_d0\" :  \"" << dense_8_output_array_9_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_9_q0\" :  \"" << dense_8_output_array_9_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_address1\" :  \"" << dense_8_output_array_9_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_ce1\" :  \"" << dense_8_output_array_9_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_we1\" :  \"" << dense_8_output_array_9_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_9_d1\" :  \"" << dense_8_output_array_9_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_address0\" :  \"" << dense_8_output_array_10_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_ce0\" :  \"" << dense_8_output_array_10_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_we0\" :  \"" << dense_8_output_array_10_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_d0\" :  \"" << dense_8_output_array_10_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_10_q0\" :  \"" << dense_8_output_array_10_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_address1\" :  \"" << dense_8_output_array_10_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_ce1\" :  \"" << dense_8_output_array_10_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_we1\" :  \"" << dense_8_output_array_10_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_10_d1\" :  \"" << dense_8_output_array_10_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_address0\" :  \"" << dense_8_output_array_11_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_ce0\" :  \"" << dense_8_output_array_11_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_we0\" :  \"" << dense_8_output_array_11_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_d0\" :  \"" << dense_8_output_array_11_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_11_q0\" :  \"" << dense_8_output_array_11_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_address1\" :  \"" << dense_8_output_array_11_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_ce1\" :  \"" << dense_8_output_array_11_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_we1\" :  \"" << dense_8_output_array_11_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_11_d1\" :  \"" << dense_8_output_array_11_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_address0\" :  \"" << dense_8_output_array_12_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_ce0\" :  \"" << dense_8_output_array_12_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_we0\" :  \"" << dense_8_output_array_12_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_d0\" :  \"" << dense_8_output_array_12_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_12_q0\" :  \"" << dense_8_output_array_12_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_address1\" :  \"" << dense_8_output_array_12_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_ce1\" :  \"" << dense_8_output_array_12_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_we1\" :  \"" << dense_8_output_array_12_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_12_d1\" :  \"" << dense_8_output_array_12_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_address0\" :  \"" << dense_8_output_array_13_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_ce0\" :  \"" << dense_8_output_array_13_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_we0\" :  \"" << dense_8_output_array_13_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_d0\" :  \"" << dense_8_output_array_13_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_13_q0\" :  \"" << dense_8_output_array_13_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_address1\" :  \"" << dense_8_output_array_13_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_ce1\" :  \"" << dense_8_output_array_13_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_we1\" :  \"" << dense_8_output_array_13_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_13_d1\" :  \"" << dense_8_output_array_13_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_address0\" :  \"" << dense_8_output_array_14_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_ce0\" :  \"" << dense_8_output_array_14_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_we0\" :  \"" << dense_8_output_array_14_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_d0\" :  \"" << dense_8_output_array_14_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_14_q0\" :  \"" << dense_8_output_array_14_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_address1\" :  \"" << dense_8_output_array_14_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_ce1\" :  \"" << dense_8_output_array_14_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_we1\" :  \"" << dense_8_output_array_14_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_14_d1\" :  \"" << dense_8_output_array_14_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_address0\" :  \"" << dense_8_output_array_15_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_ce0\" :  \"" << dense_8_output_array_15_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_we0\" :  \"" << dense_8_output_array_15_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_d0\" :  \"" << dense_8_output_array_15_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_array_15_q0\" :  \"" << dense_8_output_array_15_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_address1\" :  \"" << dense_8_output_array_15_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_ce1\" :  \"" << dense_8_output_array_15_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_we1\" :  \"" << dense_8_output_array_15_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_array_15_d1\" :  \"" << dense_8_output_array_15_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_ndim\" :  \"" << dense_8_output_ndim.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_numel\" :  \"" << dense_8_output_numel.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_address0\" :  \"" << dense_8_output_shape_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_ce0\" :  \"" << dense_8_output_shape_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_we0\" :  \"" << dense_8_output_shape_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_d0\" :  \"" << dense_8_output_shape_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_shape_q0\" :  \"" << dense_8_output_shape_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_address1\" :  \"" << dense_8_output_shape_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_ce1\" :  \"" << dense_8_output_shape_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_we1\" :  \"" << dense_8_output_shape_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dense_8_output_shape_d1\" :  \"" << dense_8_output_shape_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dense_8_output_shape_q1\" :  \"" << dense_8_output_shape_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

