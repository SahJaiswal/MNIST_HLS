#include "c_mnist.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void c_mnist::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void c_mnist::thread_ap_CS_fsm_pp10_stage0() {
    ap_CS_fsm_pp10_stage0 = ap_CS_fsm.read()[45];
}

void c_mnist::thread_ap_CS_fsm_pp10_stage1() {
    ap_CS_fsm_pp10_stage1 = ap_CS_fsm.read()[46];
}

void c_mnist::thread_ap_CS_fsm_pp10_stage2() {
    ap_CS_fsm_pp10_stage2 = ap_CS_fsm.read()[47];
}

void c_mnist::thread_ap_CS_fsm_pp10_stage3() {
    ap_CS_fsm_pp10_stage3 = ap_CS_fsm.read()[48];
}

void c_mnist::thread_ap_CS_fsm_pp10_stage4() {
    ap_CS_fsm_pp10_stage4 = ap_CS_fsm.read()[49];
}

void c_mnist::thread_ap_CS_fsm_pp11_stage0() {
    ap_CS_fsm_pp11_stage0 = ap_CS_fsm.read()[56];
}

void c_mnist::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[7];
}

void c_mnist::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[8];
}

void c_mnist::thread_ap_CS_fsm_pp2_stage2() {
    ap_CS_fsm_pp2_stage2 = ap_CS_fsm.read()[9];
}

void c_mnist::thread_ap_CS_fsm_pp2_stage3() {
    ap_CS_fsm_pp2_stage3 = ap_CS_fsm.read()[10];
}

void c_mnist::thread_ap_CS_fsm_pp2_stage4() {
    ap_CS_fsm_pp2_stage4 = ap_CS_fsm.read()[11];
}

void c_mnist::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[18];
}

void c_mnist::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[20];
}

void c_mnist::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[26];
}

void c_mnist::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[27];
}

void c_mnist::thread_ap_CS_fsm_pp6_stage2() {
    ap_CS_fsm_pp6_stage2 = ap_CS_fsm.read()[28];
}

void c_mnist::thread_ap_CS_fsm_pp6_stage3() {
    ap_CS_fsm_pp6_stage3 = ap_CS_fsm.read()[29];
}

void c_mnist::thread_ap_CS_fsm_pp6_stage4() {
    ap_CS_fsm_pp6_stage4 = ap_CS_fsm.read()[30];
}

void c_mnist::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[37];
}

void c_mnist::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[39];
}

void c_mnist::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void c_mnist::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[12];
}

void c_mnist::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[13];
}

void c_mnist::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[16];
}

void c_mnist::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[17];
}

void c_mnist::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[19];
}

void c_mnist::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[21];
}

void c_mnist::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[22];
}

void c_mnist::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[23];
}

void c_mnist::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[24];
}

void c_mnist::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[25];
}

void c_mnist::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void c_mnist::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[31];
}

void c_mnist::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[32];
}

void c_mnist::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[35];
}

void c_mnist::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[36];
}

void c_mnist::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[38];
}

void c_mnist::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void c_mnist::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[40];
}

void c_mnist::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[41];
}

void c_mnist::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[42];
}

void c_mnist::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[43];
}

void c_mnist::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[44];
}

void c_mnist::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[4];
}

void c_mnist::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[50];
}

void c_mnist::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[51];
}

void c_mnist::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[54];
}

void c_mnist::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[5];
}

void c_mnist::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[55];
}

void c_mnist::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[57];
}

void c_mnist::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[6];
}

void c_mnist::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage0() {
    ap_block_pp10_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage0_11001() {
    ap_block_pp10_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage0_subdone() {
    ap_block_pp10_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage1() {
    ap_block_pp10_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage1_11001() {
    ap_block_pp10_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage1_subdone() {
    ap_block_pp10_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage2() {
    ap_block_pp10_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage2_11001() {
    ap_block_pp10_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage2_subdone() {
    ap_block_pp10_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage3_11001() {
    ap_block_pp10_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage3_subdone() {
    ap_block_pp10_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage4() {
    ap_block_pp10_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage4_11001() {
    ap_block_pp10_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp10_stage4_subdone() {
    ap_block_pp10_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp11_stage0() {
    ap_block_pp11_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp11_stage0_00001() {
    ap_block_pp11_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp11_stage0_11001() {
    ap_block_pp11_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp11_stage0_subdone() {
    ap_block_pp11_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage2() {
    ap_block_pp2_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage2_11001() {
    ap_block_pp2_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage2_subdone() {
    ap_block_pp2_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage3_11001() {
    ap_block_pp2_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage3_subdone() {
    ap_block_pp2_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage4() {
    ap_block_pp2_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage4_11001() {
    ap_block_pp2_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp2_stage4_subdone() {
    ap_block_pp2_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp3_stage0_00001() {
    ap_block_pp3_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage1() {
    ap_block_pp6_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage1_11001() {
    ap_block_pp6_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage1_subdone() {
    ap_block_pp6_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage2() {
    ap_block_pp6_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage2_11001() {
    ap_block_pp6_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage2_subdone() {
    ap_block_pp6_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage3_11001() {
    ap_block_pp6_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage3_subdone() {
    ap_block_pp6_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage4() {
    ap_block_pp6_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage4_11001() {
    ap_block_pp6_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp6_stage4_subdone() {
    ap_block_pp6_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp7_stage0_00001() {
    ap_block_pp7_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state10_pp2_stage1_iter0() {
    ap_block_state10_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state11_pp2_stage2_iter0() {
    ap_block_state11_pp2_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state12_pp2_stage3_iter0() {
    ap_block_state12_pp2_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state13_pp2_stage4_iter0() {
    ap_block_state13_pp2_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state14_pp2_stage0_iter1() {
    ap_block_state14_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state15_pp2_stage1_iter1() {
    ap_block_state15_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state16_pp2_stage2_iter1() {
    ap_block_state16_pp2_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state23_pp3_stage0_iter0() {
    ap_block_state23_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state24_pp3_stage0_iter1() {
    ap_block_state24_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state26_pp4_stage0_iter0() {
    ap_block_state26_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state27_pp4_stage0_iter1() {
    ap_block_state27_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state33_pp6_stage0_iter0() {
    ap_block_state33_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state34_pp6_stage1_iter0() {
    ap_block_state34_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state35_pp6_stage2_iter0() {
    ap_block_state35_pp6_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state36_pp6_stage3_iter0() {
    ap_block_state36_pp6_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state37_pp6_stage4_iter0() {
    ap_block_state37_pp6_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state38_pp6_stage0_iter1() {
    ap_block_state38_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state39_pp6_stage1_iter1() {
    ap_block_state39_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state40_pp6_stage2_iter1() {
    ap_block_state40_pp6_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state47_pp7_stage0_iter0() {
    ap_block_state47_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state48_pp7_stage0_iter1() {
    ap_block_state48_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state50_pp8_stage0_iter0() {
    ap_block_state50_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state51_pp8_stage0_iter1() {
    ap_block_state51_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state57_pp10_stage0_iter0() {
    ap_block_state57_pp10_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state58_pp10_stage1_iter0() {
    ap_block_state58_pp10_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state59_pp10_stage2_iter0() {
    ap_block_state59_pp10_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state60_pp10_stage3_iter0() {
    ap_block_state60_pp10_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state61_pp10_stage4_iter0() {
    ap_block_state61_pp10_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state62_pp10_stage0_iter1() {
    ap_block_state62_pp10_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state63_pp10_stage1_iter1() {
    ap_block_state63_pp10_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state64_pp10_stage2_iter1() {
    ap_block_state64_pp10_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state71_pp11_stage0_iter0() {
    ap_block_state71_pp11_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state72_pp11_stage0_iter1() {
    ap_block_state72_pp11_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state73_pp11_stage0_iter2() {
    ap_block_state73_pp11_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state74_pp11_stage0_iter3() {
    ap_block_state74_pp11_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state75_pp11_stage0_iter4() {
    ap_block_state75_pp11_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state76_pp11_stage0_iter5() {
    ap_block_state76_pp11_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state77_pp11_stage0_iter6() {
    ap_block_state77_pp11_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state78_pp11_stage0_iter7() {
    ap_block_state78_pp11_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_block_state9_pp2_stage0_iter0() {
    ap_block_state9_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void c_mnist::thread_ap_condition_pp10_exit_iter0_state57() {
    if (esl_seteq<1,1,1>(exitcond1_fu_6997_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp10_exit_iter0_state57 = ap_const_logic_1;
    } else {
        ap_condition_pp10_exit_iter0_state57 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_condition_pp2_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(exitcond7_fu_4764_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state9 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_condition_pp3_exit_iter0_state23() {
    if (esl_seteq<1,1,1>(exitcond2_fu_4867_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state23 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state23 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_condition_pp4_exit_iter0_state26() {
    if (esl_seteq<1,1,1>(tmp_37_fu_5581_p2.read(), ap_const_lv1_0)) {
        ap_condition_pp4_exit_iter0_state26 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state26 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_condition_pp6_exit_iter0_state33() {
    if (esl_seteq<1,1,1>(exitcond6_fu_5888_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp6_exit_iter0_state33 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state33 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp10() {
    ap_enable_pp10 = (ap_idle_pp10.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp11() {
    ap_enable_pp11 = (ap_idle_pp11.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
}

void c_mnist::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp10() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter1.read()))) {
        ap_idle_pp10 = ap_const_logic_1;
    } else {
        ap_idle_pp10 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp11() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter7.read()))) {
        ap_idle_pp11 = ap_const_logic_1;
    } else {
        ap_idle_pp11 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void c_mnist::thread_ap_phi_mux_k3_phi_fu_3967_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_9643.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp10_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k3_phi_fu_3967_p4 = k_3_reg_9647.read();
    } else {
        ap_phi_mux_k3_phi_fu_3967_p4 = k3_reg_3963.read();
    }
}

void c_mnist::thread_ap_phi_mux_k9_phi_fu_3866_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_9103.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp6_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k9_phi_fu_3866_p4 = k_2_reg_9107.read();
    } else {
        ap_phi_mux_k9_phi_fu_3866_p4 = k9_reg_3862.read();
    }
}

void c_mnist::thread_ap_phi_mux_k_phi_fu_3756_p4() {
    if ((esl_seteq<1,1,1>(exitcond7_reg_8574.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_phi_fu_3756_p4 = k_1_reg_8578.read();
    } else {
        ap_phi_mux_k_phi_fu_3756_p4 = k_reg_3752.read();
    }
}

void c_mnist::thread_ap_phi_mux_phi_mul1_phi_fu_3877_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_9103.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp6_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_phi_mul1_phi_fu_3877_p4 = next_mul1_reg_9212.read();
    } else {
        ap_phi_mux_phi_mul1_phi_fu_3877_p4 = phi_mul1_reg_3873.read();
    }
}

void c_mnist::thread_ap_phi_mux_phi_mul_phi_fu_3777_p4() {
    if ((esl_seteq<1,1,1>(exitcond7_reg_8574.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_phi_mul_phi_fu_3777_p4 = next_mul_reg_8683.read();
    } else {
        ap_phi_mux_phi_mul_phi_fu_3777_p4 = phi_mul_reg_3773.read();
    }
}

void c_mnist::thread_ap_phi_mux_sum1_phi_fu_3766_p4() {
    ap_phi_mux_sum1_phi_fu_3766_p4 = sum1_reg_3763.read();
}

void c_mnist::thread_ap_phi_mux_sum7_phi_fu_3956_p4() {
    ap_phi_mux_sum7_phi_fu_3956_p4 = sum7_reg_3953.read();
}

void c_mnist::thread_ap_phi_mux_sum8_phi_fu_3855_p4() {
    ap_phi_mux_sum8_phi_fu_3855_p4 = sum8_reg_3852.read();
}

void c_mnist::thread_ap_predicate_tran3to4_state2() {
    ap_predicate_tran3to4_state2 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_fu_4420_p2.read()) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_s_fu_4461_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_fu_4472_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6_fu_4483_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_fu_4494_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_2_fu_4505_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_4516_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_fu_4527_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_7_fu_4538_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_9_fu_4549_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_fu_4549_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_10_fu_4560_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_fu_4549_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_fu_4560_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_11_fu_4571_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_fu_4549_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_fu_4560_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_fu_4571_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_12_fu_4582_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_fu_4549_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_fu_4560_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_fu_4571_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_fu_4582_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_14_fu_4593_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_fu_4549_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_fu_4560_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_fu_4571_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_fu_4582_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_fu_4593_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_16_fu_4604_p2.read())) || (esl_seteq<1,1,1>(tmp_fu_4420_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_fu_4461_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_4472_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_4483_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_4494_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_4505_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_fu_4516_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_4527_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_fu_4538_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_fu_4549_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_fu_4560_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_fu_4571_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_fu_4582_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_fu_4593_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_16_fu_4604_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_19_fu_4615_p2.read())));
}

void c_mnist::thread_ap_predicate_tran48to49_state47() {
    ap_predicate_tran48to49_state47 = (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_fu_6001_p2.read()) || (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_fu_6001_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_8_fu_6043_p2.read())));
}

void c_mnist::thread_ap_predicate_tran51to52_state50() {
    ap_predicate_tran51to52_state50 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_93_fu_6727_p2.read()) || (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_fu_6727_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_19_8_fu_6769_p2.read())));
}

void c_mnist::thread_ap_predicate_tran78to79_state71() {
    ap_predicate_tran78to79_state71 = (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_7135_p2.read()) || (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7135_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_2_fu_7177_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7135_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_fu_7177_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_8_fu_7189_p2.read())) || (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_7135_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_fu_7177_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_fu_7189_p2.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_s_fu_7201_p2.read())));
}

void c_mnist::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void c_mnist::thread_arrayNo_trunc3_fu_5765_p2() {
    arrayNo_trunc3_fu_5765_p2 = (!tmp_91_mid2_fu_5747_p3.read().is_01() || !tmp_81_fu_5755_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_91_mid2_fu_5747_p3.read()) + sc_biguint<4>(tmp_81_fu_5755_p1.read()));
}

void c_mnist::thread_arrayNo_trunc5_fu_7018_p2() {
    arrayNo_trunc5_fu_7018_p2 = (!tmp_223_fu_7009_p1.read().is_01() || !tmp_311_mid2_reg_9618.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_223_fu_7009_p1.read()) + sc_biguint<4>(tmp_311_mid2_reg_9618.read()));
}

void c_mnist::thread_dense_6_bias_array_address0() {
    dense_6_bias_array_address0 =  (sc_lv<10>) (j_cast1_reg_8560.read());
}

void c_mnist::thread_dense_6_bias_array_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        dense_6_bias_array_ce0 = ap_const_logic_1;
    } else {
        dense_6_bias_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_kernel_array_address0() {
    dense_6_kernel_array_address0 =  (sc_lv<20>) (tmp_80_cast_fu_4815_p1.read());
}

void c_mnist::thread_dense_6_kernel_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        dense_6_kernel_array_ce0 = ap_const_logic_1;
    } else {
        dense_6_kernel_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_102_fu_5413_p1() {
    dense_6_output_array_102_fu_5413_p1 = dense_6_output_array_12_q0.read();
}

void c_mnist::thread_dense_6_output_array_105_fu_5455_p1() {
    dense_6_output_array_105_fu_5455_p1 = dense_6_output_array_13_q0.read();
}

void c_mnist::thread_dense_6_output_array_108_fu_5497_p1() {
    dense_6_output_array_108_fu_5497_p1 = dense_6_output_array_14_q0.read();
}

void c_mnist::thread_dense_6_output_array_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_10_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_10_address0 = dense_6_output_array_42_reg_8525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_10_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_10_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_10_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_10_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_10_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_10_address1 = dense_6_output_array_94_reg_8762.read();
    } else {
        dense_6_output_array_10_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_10_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_10_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_10_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_10_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_10_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_A)))) {
        dense_6_output_array_10_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_10_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_111_fu_5365_p2.read()))) {
        dense_6_output_array_10_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_10_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_111_fu_5539_p1() {
    dense_6_output_array_111_fu_5539_p1 = dense_6_output_array_15_q0.read();
}

void c_mnist::thread_dense_6_output_array_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_11_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_11_address0 = dense_6_output_array_43_reg_8530.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_11_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_11_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_11_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_11_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_11_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_11_address1 = dense_6_output_array_97_reg_8768.read();
    } else {
        dense_6_output_array_11_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_11_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_11_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_11_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_11_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_11_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_B)))) {
        dense_6_output_array_11_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_11_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_122_fu_5407_p2.read()))) {
        dense_6_output_array_11_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_11_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_12_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_12_address0 = dense_6_output_array_44_reg_8535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_12_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_12_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_12_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_12_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_12_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_12_address1 = dense_6_output_array_100_reg_8774.read();
    } else {
        dense_6_output_array_12_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_12_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_12_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_12_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_12_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_12_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_12_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_C)))) {
        dense_6_output_array_12_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_12_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_132_fu_5449_p2.read()))) {
        dense_6_output_array_12_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_12_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_13_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_13_address0 = dense_6_output_array_45_reg_8540.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_13_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_13_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_13_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_13_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_13_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_13_address1 = dense_6_output_array_103_reg_8780.read();
    } else {
        dense_6_output_array_13_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_13_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_13_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_13_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_13_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_13_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_13_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_D)))) {
        dense_6_output_array_13_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_13_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_142_fu_5491_p2.read()))) {
        dense_6_output_array_13_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_13_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_14_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_14_address0 = dense_6_output_array_46_reg_8545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_14_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_14_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_14_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_14_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_14_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_14_address1 = dense_6_output_array_106_reg_8786.read();
    } else {
        dense_6_output_array_14_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_14_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_14_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_14_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_14_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_14_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_14_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_E)))) {
        dense_6_output_array_14_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_14_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_152_fu_5533_p2.read()))) {
        dense_6_output_array_14_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_14_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_15_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_15_address0 = dense_6_output_array_47_reg_8550.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_15_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_15_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_15_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_15_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_15_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_15_address1 = dense_6_output_array_109_reg_8792.read();
    } else {
        dense_6_output_array_15_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_15_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_15_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_15_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_15_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_15_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_15_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_F)))) {
        dense_6_output_array_15_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_15_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_162_fu_5575_p2.read()))) {
        dense_6_output_array_15_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_15_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_1_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_1_address0 = dense_6_output_array_33_reg_8480.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_1_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_1_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_1_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_1_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_1_address1 = dense_6_output_array_64_reg_8708.read();
    } else {
        dense_6_output_array_1_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_1_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_1_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_1_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_1_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_1_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_1)))) {
        dense_6_output_array_1_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_1_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_42_fu_4987_p2.read()))) {
        dense_6_output_array_1_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_1_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_2_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_2_address0 = dense_6_output_array_34_reg_8485.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_2_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_2_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_2_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_2_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_2_address1 = dense_6_output_array_70_reg_8714.read();
    } else {
        dense_6_output_array_2_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_2_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_2_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_2_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_2_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_2_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_2)))) {
        dense_6_output_array_2_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_2_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_48_fu_5029_p2.read()))) {
        dense_6_output_array_2_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_2_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_3_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_3_address0 = dense_6_output_array_35_reg_8490.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_3_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_3_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_3_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_3_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_3_address1 = dense_6_output_array_73_reg_8720.read();
    } else {
        dense_6_output_array_3_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_3_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_3_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_3_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_3_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_3_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_3)))) {
        dense_6_output_array_3_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_3_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_56_fu_5071_p2.read()))) {
        dense_6_output_array_3_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_3_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_4_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_4_address0 = dense_6_output_array_36_reg_8495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_4_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_4_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_4_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_4_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_4_address1 = dense_6_output_array_76_reg_8726.read();
    } else {
        dense_6_output_array_4_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_4_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_4_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_4_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_4_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_4_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_4)))) {
        dense_6_output_array_4_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_4_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_61_fu_5113_p2.read()))) {
        dense_6_output_array_4_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_4_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_5_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_5_address0 = dense_6_output_array_37_reg_8500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_5_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_5_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_5_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_5_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_5_address1 = dense_6_output_array_79_reg_8732.read();
    } else {
        dense_6_output_array_5_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_5_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_5_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_5_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_5_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_5_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_5)))) {
        dense_6_output_array_5_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_5_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_67_fu_5155_p2.read()))) {
        dense_6_output_array_5_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_5_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_66_fu_4951_p1() {
    dense_6_output_array_66_fu_4951_p1 = dense_6_output_array_1_q0.read();
}

void c_mnist::thread_dense_6_output_array_69_fu_4909_p1() {
    dense_6_output_array_69_fu_4909_p1 = dense_6_output_array_q0.read();
}

void c_mnist::thread_dense_6_output_array_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_6_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_6_address0 = dense_6_output_array_38_reg_8505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_6_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_6_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_6_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_6_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_6_address1 = dense_6_output_array_82_reg_8738.read();
    } else {
        dense_6_output_array_6_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_6_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_6_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_6_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_6_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_6_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_6)))) {
        dense_6_output_array_6_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_6_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_72_fu_5197_p2.read()))) {
        dense_6_output_array_6_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_6_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_72_fu_4993_p1() {
    dense_6_output_array_72_fu_4993_p1 = dense_6_output_array_2_q0.read();
}

void c_mnist::thread_dense_6_output_array_75_fu_5035_p1() {
    dense_6_output_array_75_fu_5035_p1 = dense_6_output_array_3_q0.read();
}

void c_mnist::thread_dense_6_output_array_78_fu_5077_p1() {
    dense_6_output_array_78_fu_5077_p1 = dense_6_output_array_4_q0.read();
}

void c_mnist::thread_dense_6_output_array_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_7_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_7_address0 = dense_6_output_array_39_reg_8510.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_7_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_7_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_7_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_7_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_7_address1 = dense_6_output_array_85_reg_8744.read();
    } else {
        dense_6_output_array_7_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_7_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_7_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_7_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_7_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_7_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_7)))) {
        dense_6_output_array_7_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_7_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_79_fu_5239_p2.read()))) {
        dense_6_output_array_7_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_7_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_81_fu_5119_p1() {
    dense_6_output_array_81_fu_5119_p1 = dense_6_output_array_5_q0.read();
}

void c_mnist::thread_dense_6_output_array_84_fu_5161_p1() {
    dense_6_output_array_84_fu_5161_p1 = dense_6_output_array_6_q0.read();
}

void c_mnist::thread_dense_6_output_array_87_fu_5203_p1() {
    dense_6_output_array_87_fu_5203_p1 = dense_6_output_array_7_q0.read();
}

void c_mnist::thread_dense_6_output_array_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_8_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_8_address0 = dense_6_output_array_40_reg_8515.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_8_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_8_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_8_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_8_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_8_address1 = dense_6_output_array_88_reg_8750.read();
    } else {
        dense_6_output_array_8_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_8_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_8_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_8_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_8_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_8_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_8)))) {
        dense_6_output_array_8_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_8_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_85_fu_5281_p2.read()))) {
        dense_6_output_array_8_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_8_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_90_fu_5245_p1() {
    dense_6_output_array_90_fu_5245_p1 = dense_6_output_array_8_q0.read();
}

void c_mnist::thread_dense_6_output_array_93_fu_5287_p1() {
    dense_6_output_array_93_fu_5287_p1 = dense_6_output_array_9_q0.read();
}

void c_mnist::thread_dense_6_output_array_96_fu_5329_p1() {
    dense_6_output_array_96_fu_5329_p1 = dense_6_output_array_10_q0.read();
}

void c_mnist::thread_dense_6_output_array_99_fu_5371_p1() {
    dense_6_output_array_99_fu_5371_p1 = dense_6_output_array_11_q0.read();
}

void c_mnist::thread_dense_6_output_array_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_9_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_9_address0 = dense_6_output_array_41_reg_8520.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_9_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_9_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_9_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_9_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_9_address1 = dense_6_output_array_91_reg_8756.read();
    } else {
        dense_6_output_array_9_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_9_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_9_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_9_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_9_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_9_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_9)))) {
        dense_6_output_array_9_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_9_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_98_fu_5323_p2.read()))) {
        dense_6_output_array_9_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_9_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_address0 =  (sc_lv<6>) (newIndex4_cast_fu_4883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_address0 = dense_6_output_array_32_reg_8475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        dense_6_output_array_address0 =  (sc_lv<6>) (newIndex2_cast_fu_4690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_address0 =  (sc_lv<6>) (newIndex1_cast_fu_4642_p1.read());
    } else {
        dense_6_output_array_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        dense_6_output_array_address1 =  (sc_lv<6>) (newIndex5_cast_fu_5597_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        dense_6_output_array_address1 = dense_6_output_array_67_reg_8702.read();
    } else {
        dense_6_output_array_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_6_output_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        dense_6_output_array_ce0 = ap_const_logic_1;
    } else {
        dense_6_output_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())))) {
        dense_6_output_array_ce1 = ap_const_logic_1;
    } else {
        dense_6_output_array_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense_6_output_array_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        dense_6_output_array_d0 = ap_const_lv32_0;
    } else {
        dense_6_output_array_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_6_output_array_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_4626_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
          esl_seteq<1,4,4>(tmp_21_reg_8565.read(), ap_const_lv4_0)))) {
        dense_6_output_array_we0 = ap_const_logic_1;
    } else {
        dense_6_output_array_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_6_output_array_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_29_fu_4945_p2.read()))) {
        dense_6_output_array_we1 = ap_const_logic_1;
    } else {
        dense_6_output_array_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_bias_array_address0() {
    dense_7_bias_array_address0 =  (sc_lv<10>) (j7_cast1_reg_9093.read());
}

void c_mnist::thread_dense_7_bias_array_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        dense_7_bias_array_ce0 = ap_const_logic_1;
    } else {
        dense_7_bias_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_kernel_array_address0() {
    dense_7_kernel_array_address0 =  (sc_lv<20>) (tmp_17_cast_fu_5944_p1.read());
}

void c_mnist::thread_dense_7_kernel_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0))) {
        dense_7_kernel_array_ce0 = ap_const_logic_1;
    } else {
        dense_7_kernel_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_10_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_10_address0 = dense_7_output_array_42_reg_9048.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_10_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_10_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_10_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_10_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_10_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_10_address1 = dense_7_output_array_84_reg_9300.read();
    } else {
        dense_7_output_array_10_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_10_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_10_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_10_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_10_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_10_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_A)))) {
        dense_7_output_array_10_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_10_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_182_fu_6511_p2.read()))) {
        dense_7_output_array_10_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_10_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_11_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_11_address0 = dense_7_output_array_43_reg_9053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_11_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_11_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_11_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_11_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_11_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_11_address1 = dense_7_output_array_86_reg_9306.read();
    } else {
        dense_7_output_array_11_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_11_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_11_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_11_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_11_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_11_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_B)))) {
        dense_7_output_array_11_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_11_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_187_fu_6553_p2.read()))) {
        dense_7_output_array_11_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_11_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_12_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_12_address0 = dense_7_output_array_44_reg_9058.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_12_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_12_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_12_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_12_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_12_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_12_address1 = dense_7_output_array_88_reg_9312.read();
    } else {
        dense_7_output_array_12_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_12_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_12_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_12_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_12_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_12_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_12_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_C)))) {
        dense_7_output_array_12_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_12_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_192_fu_6595_p2.read()))) {
        dense_7_output_array_12_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_12_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_13_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_13_address0 = dense_7_output_array_45_reg_9063.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_13_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_13_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_13_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_13_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_13_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_13_address1 = dense_7_output_array_90_reg_9318.read();
    } else {
        dense_7_output_array_13_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_13_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_13_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_13_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_13_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_13_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_13_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_D)))) {
        dense_7_output_array_13_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_13_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_197_fu_6637_p2.read()))) {
        dense_7_output_array_13_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_13_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_14_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_14_address0 = dense_7_output_array_46_reg_9068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_14_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_14_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_14_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_14_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_14_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_14_address1 = dense_7_output_array_92_reg_9324.read();
    } else {
        dense_7_output_array_14_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_14_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_14_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_14_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_14_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_14_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_14_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_E)))) {
        dense_7_output_array_14_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_14_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_202_fu_6679_p2.read()))) {
        dense_7_output_array_14_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_14_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_15_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_15_address0 = dense_7_output_array_47_reg_9073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_15_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_15_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_15_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_15_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_15_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_15_address1 = dense_7_output_array_94_reg_9330.read();
    } else {
        dense_7_output_array_15_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_15_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_15_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_15_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_15_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_15_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_15_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_F)))) {
        dense_7_output_array_15_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_15_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_207_fu_6721_p2.read()))) {
        dense_7_output_array_15_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_15_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_1_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_1_address0 = dense_7_output_array_33_reg_9003.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_1_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_1_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_1_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_1_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_1_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_1_address1 = dense_7_output_array_64_reg_9242.read();
    } else {
        dense_7_output_array_1_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_1_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_1_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_1_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_1_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_1_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_1)))) {
        dense_7_output_array_1_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_1_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_106_fu_6133_p2.read()))) {
        dense_7_output_array_1_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_1_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_2_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_2_address0 = dense_7_output_array_34_reg_9008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_2_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_2_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_2_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_2_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_2_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_2_address1 = dense_7_output_array_68_reg_9248.read();
    } else {
        dense_7_output_array_2_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_2_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_2_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_2_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_2_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_2_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_2)))) {
        dense_7_output_array_2_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_2_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_116_fu_6175_p2.read()))) {
        dense_7_output_array_2_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_2_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_3_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_3_address0 = dense_7_output_array_35_reg_9013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_3_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_3_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_3_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_3_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_3_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_3_address1 = dense_7_output_array_70_reg_9254.read();
    } else {
        dense_7_output_array_3_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_3_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_3_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_3_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_3_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_3_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_3)))) {
        dense_7_output_array_3_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_3_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_127_fu_6217_p2.read()))) {
        dense_7_output_array_3_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_3_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_4_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_4_address0 = dense_7_output_array_36_reg_9018.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_4_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_4_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_4_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_4_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_4_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_4_address1 = dense_7_output_array_72_reg_9260.read();
    } else {
        dense_7_output_array_4_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_4_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_4_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_4_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_4_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_4_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_4)))) {
        dense_7_output_array_4_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_4_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_137_fu_6259_p2.read()))) {
        dense_7_output_array_4_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_4_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_5_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_5_address0 = dense_7_output_array_37_reg_9023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_5_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_5_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_5_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_5_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_5_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_5_address1 = dense_7_output_array_74_reg_9266.read();
    } else {
        dense_7_output_array_5_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_5_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_5_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_5_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_5_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_5_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_5)))) {
        dense_7_output_array_5_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_5_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_147_fu_6301_p2.read()))) {
        dense_7_output_array_5_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_5_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_6_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_6_address0 = dense_7_output_array_38_reg_9028.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_6_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_6_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_6_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_6_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_6_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_6_address1 = dense_7_output_array_76_reg_9272.read();
    } else {
        dense_7_output_array_6_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_6_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_6_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_6_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_6_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_6_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_6)))) {
        dense_7_output_array_6_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_6_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_157_fu_6343_p2.read()))) {
        dense_7_output_array_6_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_6_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_7_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_7_address0 = dense_7_output_array_39_reg_9033.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_7_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_7_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_7_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_7_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_7_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_7_address1 = dense_7_output_array_78_reg_9278.read();
    } else {
        dense_7_output_array_7_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_7_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_7_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_7_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_7_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_7_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_7)))) {
        dense_7_output_array_7_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_7_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_167_fu_6385_p2.read()))) {
        dense_7_output_array_7_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_7_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_8_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_8_address0 = dense_7_output_array_40_reg_9038.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_8_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_8_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_8_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_8_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_8_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_8_address1 = dense_7_output_array_82_reg_9288.read();
    } else {
        dense_7_output_array_8_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_8_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_8_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_8_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_8_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_8_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_8)))) {
        dense_7_output_array_8_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_8_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_172_fu_6427_p2.read()))) {
        dense_7_output_array_8_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_8_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_9_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_9_address0 = dense_7_output_array_41_reg_9043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_9_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_9_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_9_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_9_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_9_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_9_address1 = dense_7_output_array_80_reg_9294.read();
    } else {
        dense_7_output_array_9_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_9_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_9_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_9_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_9_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_9_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_8_fu_5665_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_9)))) {
        dense_7_output_array_9_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_9_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_177_fu_6469_p2.read()))) {
        dense_7_output_array_9_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_9_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_address0 =  (sc_lv<6>) (newIndex8_cast_fu_6017_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_address0 = dense_7_output_array_32_reg_8998.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        dense_7_output_array_address0 =  (sc_lv<6>) (newIndex9_cast_fu_5781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_address0 =  (sc_lv<6>) (newIndex7_cast_fu_5639_p1.read());
    } else {
        dense_7_output_array_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        dense_7_output_array_address1 =  (sc_lv<6>) (newIndex11_cast_fu_6743_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        dense_7_output_array_address1 = dense_7_output_array_66_reg_9236.read();
    } else {
        dense_7_output_array_address1 = "XXXXXX";
    }
}

void c_mnist::thread_dense_7_output_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        dense_7_output_array_ce0 = ap_const_logic_1;
    } else {
        dense_7_output_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        dense_7_output_array_ce1 = ap_const_logic_1;
    } else {
        dense_7_output_array_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        dense_7_output_array_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        dense_7_output_array_d0 = ap_const_lv32_0;
    } else {
        dense_7_output_array_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_7_output_array_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
          esl_seteq<1,1,1>(exitcond9_fu_5623_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
          esl_seteq<1,4,4>(arrayNo_trunc3_reg_8993.read(), ap_const_lv4_0)))) {
        dense_7_output_array_we0 = ap_const_logic_1;
    } else {
        dense_7_output_array_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_7_output_array_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_90_fu_6091_p2.read()))) {
        dense_7_output_array_we1 = ap_const_logic_1;
    } else {
        dense_7_output_array_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_bias_array_address0() {
    dense_8_bias_array_address0 =  (sc_lv<10>) (j3_cast1_reg_9633.read());
}

void c_mnist::thread_dense_8_bias_array_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        dense_8_bias_array_ce0 = ap_const_logic_1;
    } else {
        dense_8_bias_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_kernel_array_address0() {
    dense_8_kernel_array_address0 =  (sc_lv<20>) (tmp_30_cast_fu_7084_p1.read());
}

void c_mnist::thread_dense_8_kernel_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0))) {
        dense_8_kernel_array_ce0 = ap_const_logic_1;
    } else {
        dense_8_kernel_array_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_0_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_0_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_0_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_0_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_0_address1() {
    dense_8_output_array_0_address1 = dense_8_output_array_48_reg_9771_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_0_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_0_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_0_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_0_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_0_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_0_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_0_d1() {
    dense_8_output_array_0_d1 = (!sel_tmp2_demorgan_fu_7789_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_demorgan_fu_7789_p2.read()[0].to_bool())? sel_tmp1_fu_7781_p3.read(): grp_fu_3985_p2.read());
}

void c_mnist::thread_dense_8_output_array_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_0)))) {
        dense_8_output_array_0_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_0_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_0_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()))) {
        dense_8_output_array_0_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_0_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_10_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_10_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_10_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_10_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_10_address1() {
    dense_8_output_array_10_address1 = dense_8_output_array_68_reg_9843_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_10_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_10_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_10_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_10_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_10_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_10_d1() {
    dense_8_output_array_10_d1 = (!sel_tmp45_demorgan_fu_8099_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp45_demorgan_fu_8099_p2.read()[0].to_bool())? sel_tmp10_fu_8091_p3.read(): grp_fu_4089_p2.read());
}

void c_mnist::thread_dense_8_output_array_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_s_fu_6847_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_A)))) {
        dense_8_output_array_10_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_10_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_s_reg_9839_pp11_iter6_reg.read()))) {
        dense_8_output_array_10_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_10_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_11_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_11_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_11_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_11_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_11_address1() {
    dense_8_output_array_11_address1 = dense_8_output_array_70_reg_9849_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_11_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_11_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_11_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_11_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_11_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_11_d1() {
    dense_8_output_array_11_d1 = (!sel_tmp49_demorgan_fu_8130_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp49_demorgan_fu_8130_p2.read()[0].to_bool())? sel_tmp11_fu_8122_p3.read(): grp_fu_4094_p2.read());
}

void c_mnist::thread_dense_8_output_array_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_s_fu_6847_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_B)))) {
        dense_8_output_array_11_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_11_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_s_reg_9839_pp11_iter6_reg.read()))) {
        dense_8_output_array_11_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_11_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_12_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_12_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_12_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_12_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_12_address1() {
    dense_8_output_array_12_address1 = dense_8_output_array_72_reg_9855_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_12_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_12_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_12_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_12_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_12_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_12_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_12_d1() {
    dense_8_output_array_12_d1 = (!sel_tmp53_demorgan_fu_8161_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp53_demorgan_fu_8161_p2.read()[0].to_bool())? sel_tmp12_fu_8153_p3.read(): grp_fu_4099_p2.read());
}

void c_mnist::thread_dense_8_output_array_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_s_fu_6847_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_C)))) {
        dense_8_output_array_12_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_12_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_s_reg_9839_pp11_iter6_reg.read()))) {
        dense_8_output_array_12_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_12_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_13_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_13_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_13_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_13_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_13_address1() {
    dense_8_output_array_13_address1 = dense_8_output_array_74_reg_9861_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_13_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_13_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_13_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_13_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_13_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_13_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_13_d1() {
    dense_8_output_array_13_d1 = (!sel_tmp57_demorgan_fu_8192_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp57_demorgan_fu_8192_p2.read()[0].to_bool())? sel_tmp13_fu_8184_p3.read(): grp_fu_4104_p2.read());
}

void c_mnist::thread_dense_8_output_array_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_s_fu_6847_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_D)))) {
        dense_8_output_array_13_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_13_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_s_reg_9839_pp11_iter6_reg.read()))) {
        dense_8_output_array_13_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_13_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_14_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_14_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_14_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_14_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_14_address1() {
    dense_8_output_array_14_address1 = dense_8_output_array_76_reg_9867_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_14_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_14_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_14_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_14_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_14_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_14_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_14_d1() {
    dense_8_output_array_14_d1 = (!sel_tmp61_demorgan_fu_8223_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp61_demorgan_fu_8223_p2.read()[0].to_bool())? sel_tmp14_fu_8215_p3.read(): grp_fu_4109_p2.read());
}

void c_mnist::thread_dense_8_output_array_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_s_fu_6847_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_E)))) {
        dense_8_output_array_14_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_14_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_s_reg_9839_pp11_iter6_reg.read()))) {
        dense_8_output_array_14_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_14_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_15_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_15_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_15_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_15_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_15_address1() {
    dense_8_output_array_15_address1 = dense_8_output_array_78_reg_9873_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_15_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_15_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_15_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_15_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_15_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_15_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_15_d1() {
    dense_8_output_array_15_d1 = (!sel_tmp65_demorgan_fu_8254_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp65_demorgan_fu_8254_p2.read()[0].to_bool())? sel_tmp15_fu_8246_p3.read(): grp_fu_4114_p2.read());
}

void c_mnist::thread_dense_8_output_array_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_s_fu_6847_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_F)))) {
        dense_8_output_array_15_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_15_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_s_reg_9839_pp11_iter6_reg.read()))) {
        dense_8_output_array_15_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_15_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_1_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_1_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_1_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_1_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_1_address1() {
    dense_8_output_array_1_address1 = dense_8_output_array_50_reg_9777_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_1_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_1_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_1_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_1_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_1_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_1_d1() {
    dense_8_output_array_1_d1 = (!sel_tmp6_demorgan_fu_7820_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_demorgan_fu_7820_p2.read()[0].to_bool())? sel_tmp5_fu_7812_p3.read(): grp_fu_4044_p2.read());
}

void c_mnist::thread_dense_8_output_array_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_1)))) {
        dense_8_output_array_1_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_1_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()))) {
        dense_8_output_array_1_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_1_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_2_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_2_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_2_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_2_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_2_address1() {
    dense_8_output_array_2_address1 = dense_8_output_array_52_reg_9787_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_2_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_2_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_2_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_2_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_2_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_2_d1() {
    dense_8_output_array_2_d1 = (!sel_tmp11_demorgan_fu_7851_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp11_demorgan_fu_7851_p2.read()[0].to_bool())? sel_tmp_fu_7843_p3.read(): grp_fu_4049_p2.read());
}

void c_mnist::thread_dense_8_output_array_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_2)))) {
        dense_8_output_array_2_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_2_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()))) {
        dense_8_output_array_2_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_2_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_3_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_3_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_3_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_3_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_3_address1() {
    dense_8_output_array_3_address1 = dense_8_output_array_54_reg_9793_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_3_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_3_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_3_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_3_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_3_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_3_d1() {
    dense_8_output_array_3_d1 = (!sel_tmp15_demorgan_fu_7882_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp15_demorgan_fu_7882_p2.read()[0].to_bool())? sel_tmp2_fu_7874_p3.read(): grp_fu_4054_p2.read());
}

void c_mnist::thread_dense_8_output_array_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_3)))) {
        dense_8_output_array_3_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_3_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()))) {
        dense_8_output_array_3_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_3_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_4_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_4_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_4_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_4_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_4_address1() {
    dense_8_output_array_4_address1 = dense_8_output_array_56_reg_9799_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_4_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_4_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_4_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_4_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_4_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_4_d1() {
    dense_8_output_array_4_d1 = (!sel_tmp19_demorgan_fu_7913_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp19_demorgan_fu_7913_p2.read()[0].to_bool())? sel_tmp3_fu_7905_p3.read(): grp_fu_4059_p2.read());
}

void c_mnist::thread_dense_8_output_array_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_4)))) {
        dense_8_output_array_4_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_4_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()))) {
        dense_8_output_array_4_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_4_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_5_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_5_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_5_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_5_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_5_address1() {
    dense_8_output_array_5_address1 = dense_8_output_array_58_reg_9805_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_5_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_5_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_5_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_5_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_5_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_5_d1() {
    dense_8_output_array_5_d1 = (!sel_tmp23_demorgan_fu_7944_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp23_demorgan_fu_7944_p2.read()[0].to_bool())? sel_tmp4_fu_7936_p3.read(): grp_fu_4064_p2.read());
}

void c_mnist::thread_dense_8_output_array_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_5)))) {
        dense_8_output_array_5_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_5_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()))) {
        dense_8_output_array_5_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_5_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_6_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_6_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_6_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_6_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_6_address1() {
    dense_8_output_array_6_address1 = dense_8_output_array_60_reg_9811_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_6_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_6_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_6_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_6_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_6_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_6_d1() {
    dense_8_output_array_6_d1 = (!sel_tmp27_demorgan_fu_7975_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp27_demorgan_fu_7975_p2.read()[0].to_bool())? sel_tmp6_fu_7967_p3.read(): grp_fu_4069_p2.read());
}

void c_mnist::thread_dense_8_output_array_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_6)))) {
        dense_8_output_array_6_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_6_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()))) {
        dense_8_output_array_6_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_6_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_7_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_7_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_7_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_7_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_7_address1() {
    dense_8_output_array_7_address1 = dense_8_output_array_62_reg_9817_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_7_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_7_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_7_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_7_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_7_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_7_d1() {
    dense_8_output_array_7_d1 = (!sel_tmp31_demorgan_fu_8006_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp31_demorgan_fu_8006_p2.read()[0].to_bool())? sel_tmp7_fu_7998_p3.read(): grp_fu_4074_p2.read());
}

void c_mnist::thread_dense_8_output_array_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_7)))) {
        dense_8_output_array_7_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_7_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()))) {
        dense_8_output_array_7_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_7_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_8_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_8_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_8_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_8_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_8_address1() {
    dense_8_output_array_8_address1 = dense_8_output_array_64_reg_9827_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_8_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_8_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_8_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_8_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_8_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_8_d1() {
    dense_8_output_array_8_d1 = (!sel_tmp36_demorgan_fu_8037_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp36_demorgan_fu_8037_p2.read()[0].to_bool())? sel_tmp8_fu_8029_p3.read(): grp_fu_4079_p2.read());
}

void c_mnist::thread_dense_8_output_array_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_8)))) {
        dense_8_output_array_8_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_8_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()))) {
        dense_8_output_array_8_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_8_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        dense_8_output_array_9_address0 =  (sc_lv<6>) (newIndex13_cast_fu_7151_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_9_address0 =  (sc_lv<6>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_9_address0 =  (sc_lv<6>) (newIndex12_cast_fu_6797_p1.read());
    } else {
        dense_8_output_array_9_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dense_8_output_array_9_address1() {
    dense_8_output_array_9_address1 = dense_8_output_array_66_reg_9833_pp11_iter6_reg.read();
}

void c_mnist::thread_dense_8_output_array_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        dense_8_output_array_9_ce0 = ap_const_logic_1;
    } else {
        dense_8_output_array_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1))) {
        dense_8_output_array_9_ce1 = ap_const_logic_1;
    } else {
        dense_8_output_array_9_ce1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        dense_8_output_array_9_d0 = grp_fu_3985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        dense_8_output_array_9_d0 = ap_const_lv32_0;
    } else {
        dense_8_output_array_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_dense_8_output_array_9_d1() {
    dense_8_output_array_9_d1 = (!sel_tmp40_demorgan_fu_8068_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp40_demorgan_fu_8068_p2.read()[0].to_bool())? sel_tmp9_fu_8060_p3.read(): grp_fu_4084_p2.read());
}

void c_mnist::thread_dense_8_output_array_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) && 
          esl_seteq<1,1,1>(exitcond4_fu_6781_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_2_fu_6823_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond4_8_fu_6835_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
          esl_seteq<1,4,4>(j3_mid2_reg_9608.read(), ap_const_lv4_9)))) {
        dense_8_output_array_9_we0 = ap_const_logic_1;
    } else {
        dense_8_output_array_9_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_array_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp11_iter7.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter6_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_reg_9823_pp11_iter6_reg.read()))) {
        dense_8_output_array_9_we1 = ap_const_logic_1;
    } else {
        dense_8_output_array_9_we1 = ap_const_logic_0;
    }
}

void c_mnist::thread_dense_8_output_shape_address0() {
    dense_8_output_shape_address0 = ap_const_lv3_0;
}

void c_mnist::thread_dense_8_output_shape_address1() {
    dense_8_output_shape_address1 = ap_const_lv3_0;
}

void c_mnist::thread_dense_8_output_shape_ce0() {
    dense_8_output_shape_ce0 = ap_const_logic_0;
}

void c_mnist::thread_dense_8_output_shape_ce1() {
    dense_8_output_shape_ce1 = ap_const_logic_0;
}

void c_mnist::thread_dense_8_output_shape_d0() {
    dense_8_output_shape_d0 = ap_const_lv64_0;
}

void c_mnist::thread_dense_8_output_shape_d1() {
    dense_8_output_shape_d1 = ap_const_lv64_0;
}

void c_mnist::thread_dense_8_output_shape_we0() {
    dense_8_output_shape_we0 = ap_const_logic_0;
}

void c_mnist::thread_dense_8_output_shape_we1() {
    dense_8_output_shape_we1 = ap_const_logic_0;
}

void c_mnist::thread_dropout_4_output_arr_10_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_10_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_10_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_10_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_10_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_10_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_10_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_11_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_11_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_11_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_11_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_11_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_11_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_11_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_12_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_12_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_12_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_12_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_12_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_12_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_12_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_13_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_13_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_13_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_13_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_13_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_13_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_13_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_14_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_14_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_14_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_14_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_14_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_14_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_14_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_15_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_15_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_15_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_15_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_15_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_15_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_15_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_1_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_1_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_1_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_1_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_1_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_1_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_1_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_2_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_2_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_2_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_2_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_2_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_2_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_2_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_3_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_3_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_3_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_3_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_3_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_3_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_3_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_4_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_4_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_4_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_4_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_4_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_4_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_4_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_5_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_5_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_5_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_5_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_5_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_5_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_5_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_6_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_6_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_6_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_6_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_6_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_6_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_6_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_7_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_7_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_7_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_7_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_7_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_7_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_7_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_8_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_8_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_8_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_8_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_8_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_8_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_8_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_9_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_9_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_9_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_9_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_9_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_9_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_9_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        dropout_4_output_arr_address0 =  (sc_lv<6>) (newIndex10_cast_fu_5919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()))) {
        dropout_4_output_arr_address0 =  (sc_lv<6>) (newIndex5_cast_reg_8855.read());
    } else {
        dropout_4_output_arr_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_4_output_arr_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read())))) {
        dropout_4_output_arr_ce0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_4_output_arr_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_37_reg_8851.read()))) {
        dropout_4_output_arr_we0 = ap_const_logic_1;
    } else {
        dropout_4_output_arr_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_10_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_10_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_10_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_10_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_10_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_10_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_10_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_11_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_11_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_11_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_11_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_11_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_11_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_11_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_12_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_12_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_12_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_12_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_12_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_12_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_12_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_13_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_13_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_13_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_13_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_13_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_13_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_13_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_14_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_14_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_14_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_14_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_14_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_14_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_14_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_15_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_15_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_15_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_15_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_15_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_15_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_15_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_1_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_1_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_1_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_1_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_1_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_1_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_1_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_2_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_2_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_2_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_2_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_2_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_2_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_2_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_3_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_3_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_3_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_3_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_3_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_3_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_3_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_4_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_4_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_4_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_4_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_4_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_4_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_4_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_5_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_5_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_5_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_5_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_5_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_5_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_5_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_6_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_6_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_6_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_6_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_6_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_6_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_6_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_7_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_7_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_7_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_7_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_7_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_7_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_7_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_8_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_8_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_8_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_8_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_8_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_8_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_8_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_9_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_9_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_9_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_9_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_9_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_8_reg_9453.read()))) {
        dropout_5_output_arr_9_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_9_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        dropout_5_output_arr_address0 =  (sc_lv<6>) (newIndex14_cast_fu_7033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1))) {
        dropout_5_output_arr_address0 =  (sc_lv<6>) (newIndex11_cast_reg_9393.read());
    } else {
        dropout_5_output_arr_address0 = "XXXXXX";
    }
}

void c_mnist::thread_dropout_5_output_arr_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1)))) {
        dropout_5_output_arr_ce0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_dropout_5_output_arr_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_93_reg_9389.read()))) {
        dropout_5_output_arr_we0 = ap_const_logic_1;
    } else {
        dropout_5_output_arr_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_exitcond10_fu_5689_p2() {
    exitcond10_fu_5689_p2 = (!j7_reg_3841.read().is_01() || !ap_const_lv9_188.is_01())? sc_lv<1>(): sc_lv<1>(j7_reg_3841.read() == ap_const_lv9_188);
}

void c_mnist::thread_exitcond11_fu_6871_p2() {
    exitcond11_fu_6871_p2 = (!j3_reg_3941.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j3_reg_3941.read() == ap_const_lv4_A);
}

void c_mnist::thread_exitcond1_fu_6997_p2() {
    exitcond1_fu_6997_p2 = (!ap_phi_mux_k3_phi_fu_3967_p4.read().is_01() || !ap_const_lv9_188.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k3_phi_fu_3967_p4.read() == ap_const_lv9_188);
}

void c_mnist::thread_exitcond2_fu_4867_p2() {
    exitcond2_fu_4867_p2 = (!i_4_reg_3785.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(i_4_reg_3785.read() == ap_const_lv10_310);
}

void c_mnist::thread_exitcond3_fu_4626_p2() {
    exitcond3_fu_4626_p2 = (!i_2_reg_3729.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(i_2_reg_3729.read() == ap_const_lv10_310);
}

void c_mnist::thread_exitcond4_2_fu_6823_p2() {
    exitcond4_2_fu_6823_p2 = (!i_26_s_fu_6817_p2.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_26_s_fu_6817_p2.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond4_8_fu_6835_p2() {
    exitcond4_8_fu_6835_p2 = (!i_26_1_fu_6829_p2.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_26_1_fu_6829_p2.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond4_fu_6781_p2() {
    exitcond4_fu_6781_p2 = (!i_3_reg_3907.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_3_reg_3907.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond4_s_fu_6847_p2() {
    exitcond4_s_fu_6847_p2 = (!i_26_2_fu_6841_p2.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_26_2_fu_6841_p2.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond5_8_fu_6043_p2() {
    exitcond5_8_fu_6043_p2 = (!i_23_s_fu_6037_p2.read().is_01() || !ap_const_lv64_188.is_01())? sc_lv<1>(): sc_lv<1>(i_23_s_fu_6037_p2.read() == ap_const_lv64_188);
}

void c_mnist::thread_exitcond5_fu_6001_p2() {
    exitcond5_fu_6001_p2 = (!i_9_reg_3885.read().is_01() || !ap_const_lv64_188.is_01())? sc_lv<1>(): sc_lv<1>(i_9_reg_3885.read() == ap_const_lv64_188);
}

void c_mnist::thread_exitcond6_fu_5888_p2() {
    exitcond6_fu_5888_p2 = (!ap_phi_mux_k9_phi_fu_3866_p4.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k9_phi_fu_3866_p4.read() == ap_const_lv10_310);
}

void c_mnist::thread_exitcond7_fu_4764_p2() {
    exitcond7_fu_4764_p2 = (!ap_phi_mux_k_phi_fu_3756_p4.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_phi_fu_3756_p4.read() == ap_const_lv10_310);
}

void c_mnist::thread_exitcond8_fu_4668_p2() {
    exitcond8_fu_4668_p2 = (!j_reg_3740.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_3740.read() == ap_const_lv10_310);
}

void c_mnist::thread_exitcond9_8_fu_5665_p2() {
    exitcond9_8_fu_5665_p2 = (!i_21_s_fu_5659_p2.read().is_01() || !ap_const_lv64_188.is_01())? sc_lv<1>(): sc_lv<1>(i_21_s_fu_5659_p2.read() == ap_const_lv64_188);
}

void c_mnist::thread_exitcond9_fu_5623_p2() {
    exitcond9_fu_5623_p2 = (!i_7_reg_3807.read().is_01() || !ap_const_lv64_188.is_01())? sc_lv<1>(): sc_lv<1>(i_7_reg_3807.read() == ap_const_lv64_188);
}

void c_mnist::thread_exitcond_2_fu_7177_p2() {
    exitcond_2_fu_7177_p2 = (!i_28_s_fu_7171_p2.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_28_s_fu_7171_p2.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond_8_fu_7189_p2() {
    exitcond_8_fu_7189_p2 = (!i_28_1_fu_7183_p2.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_28_1_fu_7183_p2.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond_flatten9_fu_6859_p2() {
    exitcond_flatten9_fu_6859_p2 = (!indvar_flatten7_reg_3918.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten7_reg_3918.read() == ap_const_lv4_A);
}

void c_mnist::thread_exitcond_flatten_fu_5677_p2() {
    exitcond_flatten_fu_5677_p2 = (!indvar_flatten_reg_3818.read().is_01() || !ap_const_lv9_188.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_3818.read() == ap_const_lv9_188);
}

void c_mnist::thread_exitcond_fu_7135_p2() {
    exitcond_fu_7135_p2 = (!i_11_reg_3974.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_11_reg_3974.read() == ap_const_lv64_A);
}

void c_mnist::thread_exitcond_s_fu_7201_p2() {
    exitcond_s_fu_7201_p2 = (!i_28_2_fu_7195_p2.read().is_01() || !ap_const_lv64_A.is_01())? sc_lv<1>(): sc_lv<1>(i_28_2_fu_7195_p2.read() == ap_const_lv64_A);
}

void c_mnist::thread_flatten_4_output_arr_10_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_10_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_10_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_10_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_10_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_reg_8399.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_8408.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_reg_8417.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_reg_8426.read()))) {
        flatten_4_output_arr_10_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_10_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_11_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_11_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_11_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_11_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_11_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_reg_8399.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_8408.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_reg_8417.read()))) {
        flatten_4_output_arr_11_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_11_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_12_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_12_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_12_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_12_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_12_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_reg_8399.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_8408.read()))) {
        flatten_4_output_arr_12_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_12_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_13_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_13_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_13_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_13_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_13_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_reg_8399.read()))) {
        flatten_4_output_arr_13_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_13_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_14_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_14_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_14_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_14_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_14_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()))) {
        flatten_4_output_arr_14_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_14_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_15_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_15_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_15_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_15_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_15_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1))) {
        flatten_4_output_arr_15_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_15_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_1_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_1_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_1_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_1_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_1_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()))) {
        flatten_4_output_arr_1_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_1_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_2_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_2_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_2_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_2_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_2_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()))) {
        flatten_4_output_arr_2_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_2_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_3_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_3_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_3_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_3_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_3_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()))) {
        flatten_4_output_arr_3_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_3_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_4_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_4_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_4_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_4_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_4_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()))) {
        flatten_4_output_arr_4_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_4_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_5_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_5_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_5_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_5_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_5_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()))) {
        flatten_4_output_arr_5_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_5_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_6_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_6_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_6_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_6_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_6_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()))) {
        flatten_4_output_arr_6_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_6_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_7_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_7_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_7_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_7_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_7_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()))) {
        flatten_4_output_arr_7_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_7_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_8_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_8_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_8_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_8_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_8_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_reg_8399.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_8408.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_reg_8417.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_reg_8426.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_16_reg_8435.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_reg_8444.read()))) {
        flatten_4_output_arr_8_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_8_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_9_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_9_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_9_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_9_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_9_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_10_reg_8399.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_11_reg_8408.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_12_reg_8417.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_reg_8426.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_16_reg_8435.read()))) {
        flatten_4_output_arr_9_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_9_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        flatten_4_output_arr_address0 =  (sc_lv<6>) (newIndex6_cast_fu_4790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        flatten_4_output_arr_address0 =  (sc_lv<6>) (newIndex_cast_reg_8293.read());
    } else {
        flatten_4_output_arr_address0 = "XXXXXX";
    }
}

void c_mnist::thread_flatten_4_output_arr_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1)))) {
        flatten_4_output_arr_ce0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_flatten_4_output_arr_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(tmp_reg_8289.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_s_reg_8318.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_reg_8327.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_reg_8336.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_reg_8345.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_reg_8354.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_3_reg_8363.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_reg_8372.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_7_reg_8381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_9_reg_8390.read()))) {
        flatten_4_output_arr_we0 = ap_const_logic_1;
    } else {
        flatten_4_output_arr_we0 = ap_const_logic_0;
    }
}

void c_mnist::thread_grp_fu_3985_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter4.read()))) {
        grp_fu_3985_p0 = reg_4407.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_fu_3985_p0 = sum7_reg_3953.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage4.read(), ap_const_boolean_0))) {
        grp_fu_3985_p0 = ap_phi_mux_sum7_phi_fu_3956_p4.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        grp_fu_3985_p0 = sum8_reg_3852.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage4.read(), ap_const_boolean_0))) {
        grp_fu_3985_p0 = ap_phi_mux_sum8_phi_fu_3855_p4.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        grp_fu_3985_p0 = sum1_reg_3763.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0))) {
        grp_fu_3985_p0 = ap_phi_mux_sum1_phi_fu_3766_p4.read();
    } else {
        grp_fu_3985_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_3985_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter4.read()))) {
        grp_fu_3985_p1 = ap_const_lv32_3F000000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_fu_3985_p1 = dense_8_bias_array_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        grp_fu_3985_p1 = dense_7_bias_array_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        grp_fu_3985_p1 = dense_6_bias_array_q0.read();
    } else if (((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage4.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp10_stage4.read(), ap_const_boolean_0)))) {
        grp_fu_3985_p1 = reg_4407.read();
    } else {
        grp_fu_3985_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4119_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4119_p0 = dense_8_output_array_49_reg_9884.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4119_p0 = tmp_224_reg_9742.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4119_p0 = tmp_101_reg_9202.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4119_p0 = tmp_33_reg_8673.read();
    } else {
        grp_fu_4119_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4119_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4119_p1 = ap_const_lv32_3E4CCCCD;
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4119_p1 = dense_8_kernel_array_2_reg_9747.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4119_p1 = dense_7_kernel_array_2_reg_9207.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4119_p1 = dense_6_kernel_array_2_reg_8678.read();
    } else {
        grp_fu_4119_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4199_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4199_p0 = dense_8_output_array_49_reg_9884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4199_p0 = dense_7_output_array_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4199_p0 = dense_6_output_array_q0.read();
    } else {
        grp_fu_4199_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4199_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4199_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4199_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4199_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4205_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4205_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4205_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4205_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4205_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4205_p0 = dense_8_output_array_49_reg_9884.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4205_p0 = dense_7_output_array_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4205_p0 = dense_6_output_array_1_q0.read();
    } else {
        grp_fu_4205_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4205_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4205_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4205_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4205_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4211_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4211_p0 = dense_8_output_array_51_reg_9892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4211_p0 = dense_7_output_array_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4211_p0 = dense_6_output_array_2_q0.read();
    } else {
        grp_fu_4211_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4211_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4211_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4211_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4211_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4217_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4217_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4217_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4217_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4217_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4217_p0 = dense_8_output_array_51_reg_9892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4217_p0 = dense_7_output_array_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4217_p0 = dense_6_output_array_3_q0.read();
    } else {
        grp_fu_4217_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4217_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4217_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4217_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4217_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4223_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4223_p0 = dense_8_output_array_53_reg_9900.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4223_p0 = dense_7_output_array_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4223_p0 = dense_6_output_array_4_q0.read();
    } else {
        grp_fu_4223_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4223_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4223_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4223_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4223_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4229_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4229_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4229_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4229_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4229_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4229_p0 = dense_8_output_array_53_reg_9900.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4229_p0 = dense_7_output_array_5_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4229_p0 = dense_6_output_array_5_q0.read();
    } else {
        grp_fu_4229_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4229_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4229_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4229_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4229_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4235_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4235_p0 = dense_8_output_array_55_reg_9908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4235_p0 = dense_7_output_array_6_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4235_p0 = dense_6_output_array_6_q0.read();
    } else {
        grp_fu_4235_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4235_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4235_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4235_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4235_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4241_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4241_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4241_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4241_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4241_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4241_p0 = dense_8_output_array_55_reg_9908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4241_p0 = dense_7_output_array_7_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4241_p0 = dense_6_output_array_7_q0.read();
    } else {
        grp_fu_4241_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4241_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4241_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4241_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4241_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4247_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4247_p0 = dense_8_output_array_57_reg_9916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4247_p0 = dense_7_output_array_8_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4247_p0 = dense_6_output_array_8_q0.read();
    } else {
        grp_fu_4247_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4247_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4247_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4247_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4247_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4253_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4253_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4253_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4253_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4253_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4253_p0 = dense_8_output_array_57_reg_9916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4253_p0 = dense_7_output_array_9_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4253_p0 = dense_6_output_array_9_q0.read();
    } else {
        grp_fu_4253_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4253_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4253_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4253_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4253_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4259_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4259_p0 = dense_8_output_array_59_reg_9924.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4259_p0 = dense_7_output_array_10_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4259_p0 = dense_6_output_array_10_q0.read();
    } else {
        grp_fu_4259_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4259_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4259_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4259_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4259_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4265_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4265_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4265_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4265_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4265_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4265_p0 = dense_8_output_array_59_reg_9924.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4265_p0 = dense_7_output_array_11_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4265_p0 = dense_6_output_array_11_q0.read();
    } else {
        grp_fu_4265_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4265_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4265_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4265_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4265_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4271_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4271_p0 = dense_8_output_array_61_reg_9932.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4271_p0 = dense_7_output_array_12_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4271_p0 = dense_6_output_array_12_q0.read();
    } else {
        grp_fu_4271_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4271_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4271_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4271_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4271_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4277_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4277_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4277_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4277_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4277_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4277_p0 = dense_8_output_array_61_reg_9932.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4277_p0 = dense_7_output_array_13_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4277_p0 = dense_6_output_array_13_q0.read();
    } else {
        grp_fu_4277_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4277_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4277_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4277_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4277_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4283_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4283_p0 = dense_8_output_array_63_reg_9940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4283_p0 = dense_7_output_array_14_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4283_p0 = dense_6_output_array_14_q0.read();
    } else {
        grp_fu_4283_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4283_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4283_p1 = ap_const_lv32_C0200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4283_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4283_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4289_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_9767_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_9783_pp11_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0_00001.read(), ap_const_boolean_0))) {
        grp_fu_4289_opcode = ap_const_lv5_3;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0_00001.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_9232.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_8_reg_9284.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0_00001.read(), ap_const_boolean_0)))) {
        grp_fu_4289_opcode = ap_const_lv5_5;
    } else {
        grp_fu_4289_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void c_mnist::thread_grp_fu_4289_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4289_p0 = dense_8_output_array_63_reg_9940.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1))) {
        grp_fu_4289_p0 = dense_7_output_array_15_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        grp_fu_4289_p0 = dense_6_output_array_15_q0.read();
    } else {
        grp_fu_4289_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_grp_fu_4289_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4289_p1 = ap_const_lv32_40200000;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1)))) {
        grp_fu_4289_p1 = ap_const_lv32_0;
    } else {
        grp_fu_4289_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void c_mnist::thread_i_10_fu_6937_p2() {
    i_10_fu_6937_p2 = (i_s_reg_3929.read() ^ ap_const_lv1_1);
}

void c_mnist::thread_i_14_10_fu_4565_p2() {
    i_14_10_fu_4565_p2 = (i_reg_3718.read() | ap_const_lv64_B);
}

void c_mnist::thread_i_14_11_fu_4576_p2() {
    i_14_11_fu_4576_p2 = (i_reg_3718.read() | ap_const_lv64_C);
}

void c_mnist::thread_i_14_12_fu_4587_p2() {
    i_14_12_fu_4587_p2 = (i_reg_3718.read() | ap_const_lv64_D);
}

void c_mnist::thread_i_14_13_fu_4598_p2() {
    i_14_13_fu_4598_p2 = (i_reg_3718.read() | ap_const_lv64_E);
}

void c_mnist::thread_i_14_14_fu_4609_p2() {
    i_14_14_fu_4609_p2 = (i_reg_3718.read() | ap_const_lv64_F);
}

void c_mnist::thread_i_14_15_fu_4620_p2() {
    i_14_15_fu_4620_p2 = (!i_reg_3718.read().is_01() || !ap_const_lv64_10.is_01())? sc_lv<64>(): (sc_biguint<64>(i_reg_3718.read()) + sc_biguint<64>(ap_const_lv64_10));
}

void c_mnist::thread_i_14_1_fu_4466_p2() {
    i_14_1_fu_4466_p2 = (i_reg_3718.read() | ap_const_lv64_2);
}

void c_mnist::thread_i_14_2_fu_4477_p2() {
    i_14_2_fu_4477_p2 = (i_reg_3718.read() | ap_const_lv64_3);
}

void c_mnist::thread_i_14_3_fu_4488_p2() {
    i_14_3_fu_4488_p2 = (i_reg_3718.read() | ap_const_lv64_4);
}

void c_mnist::thread_i_14_4_fu_4499_p2() {
    i_14_4_fu_4499_p2 = (i_reg_3718.read() | ap_const_lv64_5);
}

void c_mnist::thread_i_14_5_fu_4510_p2() {
    i_14_5_fu_4510_p2 = (i_reg_3718.read() | ap_const_lv64_6);
}

void c_mnist::thread_i_14_6_fu_4521_p2() {
    i_14_6_fu_4521_p2 = (i_reg_3718.read() | ap_const_lv64_7);
}

void c_mnist::thread_i_14_7_fu_4532_p2() {
    i_14_7_fu_4532_p2 = (i_reg_3718.read() | ap_const_lv64_8);
}

void c_mnist::thread_i_14_8_fu_4543_p2() {
    i_14_8_fu_4543_p2 = (i_reg_3718.read() | ap_const_lv64_9);
}

void c_mnist::thread_i_14_9_fu_4554_p2() {
    i_14_9_fu_4554_p2 = (i_reg_3718.read() | ap_const_lv64_A);
}

void c_mnist::thread_i_14_s_fu_4455_p2() {
    i_14_s_fu_4455_p2 = (i_reg_3718.read() | ap_const_lv64_1);
}

void c_mnist::thread_i_16_s_fu_4662_p2() {
    i_16_s_fu_4662_p2 = (!i_2_reg_3729.read().is_01() || !ap_const_lv10_10.is_01())? sc_lv<10>(): (sc_biguint<10>(i_2_reg_3729.read()) + sc_biguint<10>(ap_const_lv10_10));
}

void c_mnist::thread_i_19_s_fu_4903_p2() {
    i_19_s_fu_4903_p2 = (!i_4_reg_3785.read().is_01() || !ap_const_lv10_10.is_01())? sc_lv<10>(): (sc_biguint<10>(i_4_reg_3785.read()) + sc_biguint<10>(ap_const_lv10_10));
}

void c_mnist::thread_i_1_fu_5828_p2() {
    i_1_fu_5828_p2 = (i_8_reg_3829.read() ^ ap_const_lv1_1);
}

void c_mnist::thread_i_20_s_fu_5617_p2() {
    i_20_s_fu_5617_p2 = (!i_6_reg_3796.read().is_01() || !ap_const_lv10_10.is_01())? sc_lv<10>(): (sc_biguint<10>(i_6_reg_3796.read()) + sc_biguint<10>(ap_const_lv10_10));
}

void c_mnist::thread_i_21_1_fu_5671_p2() {
    i_21_1_fu_5671_p2 = (!i_7_reg_3807.read().is_01() || !ap_const_lv64_10.is_01())? sc_lv<64>(): (sc_biguint<64>(i_7_reg_3807.read()) + sc_biguint<64>(ap_const_lv64_10));
}

void c_mnist::thread_i_21_s_fu_5659_p2() {
    i_21_s_fu_5659_p2 = (i_7_reg_3807.read() | ap_const_lv64_8);
}

void c_mnist::thread_i_23_1_fu_6049_p2() {
    i_23_1_fu_6049_p2 = (!i_9_reg_3885.read().is_01() || !ap_const_lv64_10.is_01())? sc_lv<64>(): (sc_biguint<64>(i_9_reg_3885.read()) + sc_biguint<64>(ap_const_lv64_10));
}

void c_mnist::thread_i_23_s_fu_6037_p2() {
    i_23_s_fu_6037_p2 = (i_9_reg_3885.read() | ap_const_lv64_8);
}

void c_mnist::thread_i_25_1_fu_6775_p2() {
    i_25_1_fu_6775_p2 = (!i_5_reg_3896.read().is_01() || !ap_const_lv9_10.is_01())? sc_lv<9>(): (sc_biguint<9>(i_5_reg_3896.read()) + sc_biguint<9>(ap_const_lv9_10));
}

void c_mnist::thread_i_25_s_fu_6763_p2() {
    i_25_s_fu_6763_p2 = (i_5_reg_3896.read() | ap_const_lv9_8);
}

void c_mnist::thread_i_26_1_fu_6829_p2() {
    i_26_1_fu_6829_p2 = (i_3_reg_3907.read() | ap_const_lv64_8);
}

void c_mnist::thread_i_26_2_fu_6841_p2() {
    i_26_2_fu_6841_p2 = (i_3_reg_3907.read() | ap_const_lv64_A);
}

void c_mnist::thread_i_26_3_fu_6853_p2() {
    i_26_3_fu_6853_p2 = (!i_3_reg_3907.read().is_01() || !ap_const_lv64_10.is_01())? sc_lv<64>(): (sc_biguint<64>(i_3_reg_3907.read()) + sc_biguint<64>(ap_const_lv64_10));
}

void c_mnist::thread_i_26_s_fu_6817_p2() {
    i_26_s_fu_6817_p2 = (i_3_reg_3907.read() | ap_const_lv64_2);
}

void c_mnist::thread_i_28_1_fu_7183_p2() {
    i_28_1_fu_7183_p2 = (i_11_reg_3974.read() | ap_const_lv64_8);
}

void c_mnist::thread_i_28_2_fu_7195_p2() {
    i_28_2_fu_7195_p2 = (i_11_reg_3974.read() | ap_const_lv64_A);
}

void c_mnist::thread_i_28_3_fu_7207_p2() {
    i_28_3_fu_7207_p2 = (!ap_const_lv64_10.is_01() || !i_11_reg_3974.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_10) + sc_biguint<64>(i_11_reg_3974.read()));
}

void c_mnist::thread_i_28_s_fu_7171_p2() {
    i_28_s_fu_7171_p2 = (i_11_reg_3974.read() | ap_const_lv64_2);
}

void c_mnist::thread_i_8_mid2_fu_5834_p3() {
    i_8_mid2_fu_5834_p3 = (!exitcond10_reg_8980.read()[0].is_01())? sc_lv<1>(): ((exitcond10_reg_8980.read()[0].to_bool())? i_1_fu_5828_p2.read(): i_8_reg_3829.read());
}

void c_mnist::thread_i_mid2_fu_6943_p3() {
    i_mid2_fu_6943_p3 = (!exitcond11_fu_6871_p2.read()[0].is_01())? sc_lv<1>(): ((exitcond11_fu_6871_p2.read()[0].to_bool())? i_10_fu_6937_p2.read(): i_s_reg_3929.read());
}

void c_mnist::thread_indvar_flatten_next8_fu_6865_p2() {
    indvar_flatten_next8_fu_6865_p2 = (!indvar_flatten7_reg_3918.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar_flatten7_reg_3918.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void c_mnist::thread_indvar_flatten_next_fu_5683_p2() {
    indvar_flatten_next_fu_5683_p2 = (!indvar_flatten_reg_3818.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar_flatten_reg_3818.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void c_mnist::thread_inneridx_1_cast_fu_6893_p3() {
    inneridx_1_cast_fu_6893_p3 = (!i_s_reg_3929.read()[0].is_01())? sc_lv<8>(): ((i_s_reg_3929.read()[0].to_bool())? ap_const_lv8_88: ap_const_lv8_0);
}

void c_mnist::thread_inneridx_1_cast_mid1_fu_6885_p3() {
    inneridx_1_cast_mid1_fu_6885_p3 = (!i_s_reg_3929.read()[0].is_01())? sc_lv<8>(): ((i_s_reg_3929.read()[0].to_bool())? ap_const_lv8_0: ap_const_lv8_88);
}

void c_mnist::thread_inneridx_1_cast_mid2_1_fu_6909_p1() {
    inneridx_1_cast_mid2_1_fu_6909_p1 = esl_sext<9,8>(inneridx_1_cast_mid2_fu_6901_p3.read());
}

void c_mnist::thread_inneridx_1_cast_mid2_fu_6901_p3() {
    inneridx_1_cast_mid2_fu_6901_p3 = (!exitcond11_fu_6871_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond11_fu_6871_p2.read()[0].to_bool())? inneridx_1_cast_mid1_fu_6885_p3.read(): inneridx_1_cast_fu_6893_p3.read());
}

void c_mnist::thread_inneridx_cast_fu_5809_p3() {
    inneridx_cast_fu_5809_p3 = (!i_8_reg_3829.read()[0].is_01())? sc_lv<9>(): ((i_8_reg_3829.read()[0].to_bool())? ap_const_lv9_110: ap_const_lv9_0);
}

void c_mnist::thread_inneridx_cast_mid1_fu_5801_p3() {
    inneridx_cast_mid1_fu_5801_p3 = (!i_8_reg_3829.read()[0].is_01())? sc_lv<9>(): ((i_8_reg_3829.read()[0].to_bool())? ap_const_lv9_0: ap_const_lv9_110);
}

void c_mnist::thread_inneridx_cast_mid2_c_fu_5824_p1() {
    inneridx_cast_mid2_c_fu_5824_p1 = esl_sext<10,9>(inneridx_cast_mid2_fu_5817_p3.read());
}

void c_mnist::thread_inneridx_cast_mid2_fu_5817_p3() {
    inneridx_cast_mid2_fu_5817_p3 = (!exitcond10_reg_8980.read()[0].is_01())? sc_lv<9>(): ((exitcond10_reg_8980.read()[0].to_bool())? inneridx_cast_mid1_fu_5801_p3.read(): inneridx_cast_fu_5809_p3.read());
}

void c_mnist::thread_input_5_input_array_0_address0() {
    input_5_input_array_0_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_0_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_0_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_10_address0() {
    input_5_input_array_10_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_10_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_10_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_11_address0() {
    input_5_input_array_11_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_11_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_11_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_12_address0() {
    input_5_input_array_12_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_12_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_12_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_13_address0() {
    input_5_input_array_13_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_13_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_13_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_14_address0() {
    input_5_input_array_14_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_14_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_14_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_15_address0() {
    input_5_input_array_15_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_15_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_15_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_1_address0() {
    input_5_input_array_1_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_1_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_1_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_2_address0() {
    input_5_input_array_2_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_2_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_2_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_3_address0() {
    input_5_input_array_3_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_3_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_3_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_4_address0() {
    input_5_input_array_4_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_4_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_4_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_5_address0() {
    input_5_input_array_5_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_5_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_5_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_6_address0() {
    input_5_input_array_6_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_6_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_6_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_7_address0() {
    input_5_input_array_7_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_7_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_7_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_8_address0() {
    input_5_input_array_8_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_8_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_8_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_array_9_address0() {
    input_5_input_array_9_address0 =  (sc_lv<6>) (newIndex_cast_fu_4435_p1.read());
}

void c_mnist::thread_input_5_input_array_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        input_5_input_array_9_ce0 = ap_const_logic_1;
    } else {
        input_5_input_array_9_ce0 = ap_const_logic_0;
    }
}

void c_mnist::thread_input_5_input_shape_address0() {
    input_5_input_shape_address0 = ap_const_lv3_0;
}

void c_mnist::thread_input_5_input_shape_address1() {
    input_5_input_shape_address1 = ap_const_lv3_0;
}

void c_mnist::thread_input_5_input_shape_ce0() {
    input_5_input_shape_ce0 = ap_const_logic_0;
}

void c_mnist::thread_input_5_input_shape_ce1() {
    input_5_input_shape_ce1 = ap_const_logic_0;
}

void c_mnist::thread_input_5_input_shape_d0() {
    input_5_input_shape_d0 = ap_const_lv64_0;
}

void c_mnist::thread_input_5_input_shape_d1() {
    input_5_input_shape_d1 = ap_const_lv64_0;
}

void c_mnist::thread_input_5_input_shape_we0() {
    input_5_input_shape_we0 = ap_const_logic_0;
}

void c_mnist::thread_input_5_input_shape_we1() {
    input_5_input_shape_we1 = ap_const_logic_0;
}

void c_mnist::thread_j3_cast1_fu_6955_p1() {
    j3_cast1_fu_6955_p1 = esl_zext<64,4>(j3_mid2_fu_6877_p3.read());
}

void c_mnist::thread_j3_cast_fu_6951_p1() {
    j3_cast_fu_6951_p1 = esl_zext<10,4>(j3_mid2_fu_6877_p3.read());
}

void c_mnist::thread_j3_mid2_fu_6877_p3() {
    j3_mid2_fu_6877_p3 = (!exitcond11_fu_6871_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond11_fu_6871_p2.read()[0].to_bool())? ap_const_lv4_0: j3_reg_3941.read());
}

void c_mnist::thread_j7_cast1_fu_5844_p1() {
    j7_cast1_fu_5844_p1 = esl_zext<64,9>(j7_mid2_reg_8986.read());
}

void c_mnist::thread_j7_cast_fu_5841_p1() {
    j7_cast_fu_5841_p1 = esl_zext<19,9>(j7_mid2_reg_8986.read());
}

void c_mnist::thread_j7_mid2_fu_5695_p3() {
    j7_mid2_fu_5695_p3 = (!exitcond10_fu_5689_p2.read()[0].is_01())? sc_lv<9>(): ((exitcond10_fu_5689_p2.read()[0].to_bool())? ap_const_lv9_0: j7_reg_3841.read());
}

void c_mnist::thread_j_1_fu_4674_p2() {
    j_1_fu_4674_p2 = (!j_reg_3740.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(j_reg_3740.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void c_mnist::thread_j_2_fu_5996_p2() {
    j_2_fu_5996_p2 = (!j7_mid2_reg_8986.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(j7_mid2_reg_8986.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void c_mnist::thread_j_3_fu_7130_p2() {
    j_3_fu_7130_p2 = (!j3_mid2_reg_9608.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j3_mid2_reg_9608.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void c_mnist::thread_j_cast1_fu_4714_p1() {
    j_cast1_fu_4714_p1 = esl_zext<64,10>(j_reg_3740.read());
}

void c_mnist::thread_j_cast_fu_4710_p1() {
    j_cast_fu_4710_p1 = esl_zext<20,10>(j_reg_3740.read());
}

void c_mnist::thread_k_1_fu_4770_p2() {
    k_1_fu_4770_p2 = (!ap_phi_mux_k_phi_fu_3756_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ap_phi_mux_k_phi_fu_3756_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void c_mnist::thread_k_2_fu_5894_p2() {
    k_2_fu_5894_p2 = (!ap_phi_mux_k9_phi_fu_3866_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ap_phi_mux_k9_phi_fu_3866_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void c_mnist::thread_k_3_fu_7003_p2() {
    k_3_fu_7003_p2 = (!ap_phi_mux_k3_phi_fu_3967_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_k3_phi_fu_3967_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void c_mnist::thread_newIndex10_cast_fu_5919_p1() {
    newIndex10_cast_fu_5919_p1 = esl_zext<64,6>(newIndex3_fu_5909_p4.read());
}

void c_mnist::thread_newIndex10_fu_6733_p4() {
    newIndex10_fu_6733_p4 = i_5_reg_3896.read().range(8, 4);
}

void c_mnist::thread_newIndex11_cast_fu_6743_p1() {
    newIndex11_cast_fu_6743_p1 = esl_zext<64,5>(newIndex10_fu_6733_p4.read());
}

void c_mnist::thread_newIndex11_fu_6787_p4() {
    newIndex11_fu_6787_p4 = i_3_reg_3907.read().range(10, 4);
}

void c_mnist::thread_newIndex12_cast_fu_6797_p1() {
    newIndex12_cast_fu_6797_p1 = esl_zext<64,7>(newIndex11_fu_6787_p4.read());
}

void c_mnist::thread_newIndex12_fu_7141_p4() {
    newIndex12_fu_7141_p4 = i_11_reg_3974.read().range(10, 4);
}

void c_mnist::thread_newIndex13_cast_fu_7151_p1() {
    newIndex13_cast_fu_7151_p1 = esl_zext<64,7>(newIndex12_fu_7141_p4.read());
}

void c_mnist::thread_newIndex13_fu_7023_p4() {
    newIndex13_fu_7023_p4 = tmp_28_fu_7013_p2.read().range(8, 4);
}

void c_mnist::thread_newIndex14_cast_fu_7033_p1() {
    newIndex14_cast_fu_7033_p1 = esl_zext<64,5>(newIndex13_fu_7023_p4.read());
}

void c_mnist::thread_newIndex1_cast_fu_4642_p1() {
    newIndex1_cast_fu_4642_p1 = esl_zext<64,6>(newIndex1_fu_4632_p4.read());
}

void c_mnist::thread_newIndex1_fu_4632_p4() {
    newIndex1_fu_4632_p4 = i_2_reg_3729.read().range(9, 4);
}

void c_mnist::thread_newIndex2_cast_fu_4690_p1() {
    newIndex2_cast_fu_4690_p1 = esl_zext<64,6>(newIndex2_fu_4680_p4.read());
}

void c_mnist::thread_newIndex2_fu_4680_p4() {
    newIndex2_fu_4680_p4 = j_reg_3740.read().range(9, 4);
}

void c_mnist::thread_newIndex3_fu_5909_p4() {
    newIndex3_fu_5909_p4 = tmp_15_fu_5904_p2.read().range(9, 4);
}

void c_mnist::thread_newIndex4_cast_fu_4883_p1() {
    newIndex4_cast_fu_4883_p1 = esl_zext<64,6>(newIndex4_fu_4873_p4.read());
}

void c_mnist::thread_newIndex4_fu_4873_p4() {
    newIndex4_fu_4873_p4 = i_4_reg_3785.read().range(9, 4);
}

void c_mnist::thread_newIndex5_cast_fu_5597_p1() {
    newIndex5_cast_fu_5597_p1 = esl_zext<64,6>(newIndex5_fu_5587_p4.read());
}

void c_mnist::thread_newIndex5_fu_5587_p4() {
    newIndex5_fu_5587_p4 = i_6_reg_3796.read().range(9, 4);
}

void c_mnist::thread_newIndex6_cast_fu_4790_p1() {
    newIndex6_cast_fu_4790_p1 = esl_zext<64,6>(newIndex6_fu_4780_p4.read());
}

void c_mnist::thread_newIndex6_fu_4780_p4() {
    newIndex6_fu_4780_p4 = ap_phi_mux_k_phi_fu_3756_p4.read().range(9, 4);
}

void c_mnist::thread_newIndex7_cast_fu_5639_p1() {
    newIndex7_cast_fu_5639_p1 = esl_zext<64,7>(newIndex7_fu_5629_p4.read());
}

void c_mnist::thread_newIndex7_fu_5629_p4() {
    newIndex7_fu_5629_p4 = i_7_reg_3807.read().range(10, 4);
}

void c_mnist::thread_newIndex8_cast_fu_6017_p1() {
    newIndex8_cast_fu_6017_p1 = esl_zext<64,7>(newIndex8_fu_6007_p4.read());
}

void c_mnist::thread_newIndex8_fu_6007_p4() {
    newIndex8_fu_6007_p4 = i_9_reg_3885.read().range(10, 4);
}

void c_mnist::thread_newIndex9_cast_fu_5781_p1() {
    newIndex9_cast_fu_5781_p1 = esl_zext<64,5>(newIndex9_fu_5771_p4.read());
}

void c_mnist::thread_newIndex9_fu_5771_p4() {
    newIndex9_fu_5771_p4 = tmp_13_fu_5759_p2.read().range(8, 4);
}

void c_mnist::thread_newIndex_cast_fu_4435_p1() {
    newIndex_cast_fu_4435_p1 = esl_zext<64,7>(newIndex_fu_4425_p4.read());
}

void c_mnist::thread_newIndex_fu_4425_p4() {
    newIndex_fu_4425_p4 = i_reg_3718.read().range(10, 4);
}

void c_mnist::thread_next_mul1_fu_5990_p2() {
    next_mul1_fu_5990_p2 = (!ap_const_lv19_188.is_01() || !phi_mul1_reg_3873.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_188) + sc_biguint<19>(phi_mul1_reg_3873.read()));
}

void c_mnist::thread_next_mul_fu_4861_p2() {
    next_mul_fu_4861_p2 = (!ap_const_lv20_310.is_01() || !phi_mul_reg_3773.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ap_const_lv20_310) + sc_biguint<20>(phi_mul_reg_3773.read()));
}

void c_mnist::thread_notlhs10_fu_5305_p2() {
    notlhs10_fu_5305_p2 = (!tmp_94_fu_5291_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_94_fu_5291_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs11_fu_6115_p2() {
    notlhs11_fu_6115_p2 = (!tmp_100_fu_6101_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_100_fu_6101_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs12_fu_5347_p2() {
    notlhs12_fu_5347_p2 = (!tmp_107_fu_5333_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_107_fu_5333_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs13_fu_6157_p2() {
    notlhs13_fu_6157_p2 = (!tmp_112_fu_6143_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_112_fu_6143_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs14_fu_5389_p2() {
    notlhs14_fu_5389_p2 = (!tmp_118_fu_5375_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_118_fu_5375_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs15_fu_6199_p2() {
    notlhs15_fu_6199_p2 = (!tmp_123_fu_6185_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_123_fu_6185_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs16_fu_5431_p2() {
    notlhs16_fu_5431_p2 = (!tmp_128_fu_5417_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_128_fu_5417_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs17_fu_6241_p2() {
    notlhs17_fu_6241_p2 = (!tmp_133_fu_6227_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_133_fu_6227_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs18_fu_5473_p2() {
    notlhs18_fu_5473_p2 = (!tmp_138_fu_5459_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_138_fu_5459_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs19_fu_6283_p2() {
    notlhs19_fu_6283_p2 = (!tmp_143_fu_6269_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_6269_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs1_fu_4969_p2() {
    notlhs1_fu_4969_p2 = (!tmp_38_fu_4955_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_38_fu_4955_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs20_fu_5515_p2() {
    notlhs20_fu_5515_p2 = (!tmp_148_fu_5501_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_148_fu_5501_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs21_fu_6325_p2() {
    notlhs21_fu_6325_p2 = (!tmp_153_fu_6311_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_153_fu_6311_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs22_fu_5557_p2() {
    notlhs22_fu_5557_p2 = (!tmp_158_fu_5543_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_158_fu_5543_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs23_fu_6367_p2() {
    notlhs23_fu_6367_p2 = (!tmp_163_fu_6353_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_163_fu_6353_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs24_fu_6409_p2() {
    notlhs24_fu_6409_p2 = (!tmp_168_fu_6395_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_168_fu_6395_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs25_fu_6451_p2() {
    notlhs25_fu_6451_p2 = (!tmp_173_fu_6437_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_6437_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs26_fu_6493_p2() {
    notlhs26_fu_6493_p2 = (!tmp_178_fu_6479_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_178_fu_6479_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs27_fu_6535_p2() {
    notlhs27_fu_6535_p2 = (!tmp_183_fu_6521_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_183_fu_6521_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs28_fu_6577_p2() {
    notlhs28_fu_6577_p2 = (!tmp_188_fu_6563_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_188_fu_6563_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs29_fu_6619_p2() {
    notlhs29_fu_6619_p2 = (!tmp_193_fu_6605_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_193_fu_6605_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs2_fu_5011_p2() {
    notlhs2_fu_5011_p2 = (!tmp_44_fu_4997_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_44_fu_4997_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs30_fu_6661_p2() {
    notlhs30_fu_6661_p2 = (!tmp_198_fu_6647_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_198_fu_6647_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs31_fu_6703_p2() {
    notlhs31_fu_6703_p2 = (!tmp_203_fu_6689_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_203_fu_6689_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs32_fu_7230_p2() {
    notlhs32_fu_7230_p2 = (!tmp_209_fu_7216_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_209_fu_7216_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs33_fu_7265_p2() {
    notlhs33_fu_7265_p2 = (!tmp_216_fu_7251_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_216_fu_7251_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs34_fu_7300_p2() {
    notlhs34_fu_7300_p2 = (!tmp_225_fu_7286_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_225_fu_7286_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs35_fu_7335_p2() {
    notlhs35_fu_7335_p2 = (!tmp_232_fu_7321_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_232_fu_7321_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs36_fu_7370_p2() {
    notlhs36_fu_7370_p2 = (!tmp_239_fu_7356_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_239_fu_7356_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs37_fu_7405_p2() {
    notlhs37_fu_7405_p2 = (!tmp_246_fu_7391_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_246_fu_7391_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs38_fu_7440_p2() {
    notlhs38_fu_7440_p2 = (!tmp_253_fu_7426_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_253_fu_7426_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs39_fu_7475_p2() {
    notlhs39_fu_7475_p2 = (!tmp_260_fu_7461_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_260_fu_7461_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs3_fu_5053_p2() {
    notlhs3_fu_5053_p2 = (!tmp_51_fu_5039_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_5039_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs40_fu_7510_p2() {
    notlhs40_fu_7510_p2 = (!tmp_267_fu_7496_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_267_fu_7496_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs41_fu_7545_p2() {
    notlhs41_fu_7545_p2 = (!tmp_274_fu_7531_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_274_fu_7531_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs42_fu_7580_p2() {
    notlhs42_fu_7580_p2 = (!tmp_281_fu_7566_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_281_fu_7566_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs43_fu_7615_p2() {
    notlhs43_fu_7615_p2 = (!tmp_288_fu_7601_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_288_fu_7601_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs44_fu_7650_p2() {
    notlhs44_fu_7650_p2 = (!tmp_295_fu_7636_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_295_fu_7636_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs45_fu_7685_p2() {
    notlhs45_fu_7685_p2 = (!tmp_302_fu_7671_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_302_fu_7671_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs46_fu_7720_p2() {
    notlhs46_fu_7720_p2 = (!tmp_309_fu_7706_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_309_fu_7706_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs47_fu_7755_p2() {
    notlhs47_fu_7755_p2 = (!tmp_316_fu_7741_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_316_fu_7741_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs4_fu_5095_p2() {
    notlhs4_fu_5095_p2 = (!tmp_57_fu_5081_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_5081_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs5_fu_5137_p2() {
    notlhs5_fu_5137_p2 = (!tmp_62_fu_5123_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_62_fu_5123_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs6_fu_5179_p2() {
    notlhs6_fu_5179_p2 = (!tmp_68_fu_5165_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_68_fu_5165_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs7_fu_5221_p2() {
    notlhs7_fu_5221_p2 = (!tmp_74_fu_5207_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_74_fu_5207_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs8_fu_5263_p2() {
    notlhs8_fu_5263_p2 = (!tmp_80_fu_5249_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_80_fu_5249_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs9_fu_6073_p2() {
    notlhs9_fu_6073_p2 = (!tmp_86_fu_6059_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_86_fu_6059_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notlhs_fu_4927_p2() {
    notlhs_fu_4927_p2 = (!tmp_24_fu_4913_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_24_fu_4913_p4.read() != ap_const_lv8_FF);
}

void c_mnist::thread_notrhs10_fu_5311_p2() {
    notrhs10_fu_5311_p2 = (!tmp_103_fu_5301_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_103_fu_5301_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs11_fu_6121_p2() {
    notrhs11_fu_6121_p2 = (!tmp_108_fu_6111_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_108_fu_6111_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs12_fu_5353_p2() {
    notrhs12_fu_5353_p2 = (!tmp_113_fu_5343_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_5343_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs13_fu_6163_p2() {
    notrhs13_fu_6163_p2 = (!tmp_117_fu_6153_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_117_fu_6153_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs14_fu_5395_p2() {
    notrhs14_fu_5395_p2 = (!tmp_119_fu_5385_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_119_fu_5385_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs15_fu_6205_p2() {
    notrhs15_fu_6205_p2 = (!tmp_124_fu_6195_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_124_fu_6195_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs16_fu_5437_p2() {
    notrhs16_fu_5437_p2 = (!tmp_129_fu_5427_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_129_fu_5427_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs17_fu_6247_p2() {
    notrhs17_fu_6247_p2 = (!tmp_134_fu_6237_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_134_fu_6237_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs18_fu_5479_p2() {
    notrhs18_fu_5479_p2 = (!tmp_139_fu_5469_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_139_fu_5469_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs19_fu_6289_p2() {
    notrhs19_fu_6289_p2 = (!tmp_144_fu_6279_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_144_fu_6279_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs1_fu_4975_p2() {
    notrhs1_fu_4975_p2 = (!tmp_39_fu_4965_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_39_fu_4965_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs20_fu_5521_p2() {
    notrhs20_fu_5521_p2 = (!tmp_149_fu_5511_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_149_fu_5511_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs21_fu_6331_p2() {
    notrhs21_fu_6331_p2 = (!tmp_154_fu_6321_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_154_fu_6321_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs22_fu_5563_p2() {
    notrhs22_fu_5563_p2 = (!tmp_159_fu_5553_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_159_fu_5553_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs23_fu_6373_p2() {
    notrhs23_fu_6373_p2 = (!tmp_164_fu_6363_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_164_fu_6363_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs24_fu_6415_p2() {
    notrhs24_fu_6415_p2 = (!tmp_169_fu_6405_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_169_fu_6405_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs25_fu_6457_p2() {
    notrhs25_fu_6457_p2 = (!tmp_174_fu_6447_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_174_fu_6447_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs26_fu_6499_p2() {
    notrhs26_fu_6499_p2 = (!tmp_179_fu_6489_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_6489_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs27_fu_6541_p2() {
    notrhs27_fu_6541_p2 = (!tmp_184_fu_6531_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_184_fu_6531_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs28_fu_6583_p2() {
    notrhs28_fu_6583_p2 = (!tmp_189_fu_6573_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_189_fu_6573_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs29_fu_6625_p2() {
    notrhs29_fu_6625_p2 = (!tmp_194_fu_6615_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_194_fu_6615_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs2_fu_5017_p2() {
    notrhs2_fu_5017_p2 = (!tmp_45_fu_5007_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_45_fu_5007_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs30_fu_6667_p2() {
    notrhs30_fu_6667_p2 = (!tmp_199_fu_6657_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_199_fu_6657_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs31_fu_6709_p2() {
    notrhs31_fu_6709_p2 = (!tmp_204_fu_6699_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_204_fu_6699_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs32_fu_7236_p2() {
    notrhs32_fu_7236_p2 = (!tmp_210_fu_7226_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_210_fu_7226_p1.read() == ap_const_lv23_0);
}

void c_mnist::thread_notrhs33_fu_7271_p2() {
    notrhs33_fu_7271_p2 = (!tmp_217_fu_7261_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_217_fu_7261_p1.read() == ap_const_lv23_0);
}

}

