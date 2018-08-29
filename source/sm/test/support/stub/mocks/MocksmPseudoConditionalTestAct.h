/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKSMPSEUDOCONDITIONALTESTACT_H
#define _MOCKSMPSEUDOCONDITIONALTESTACT_H

#include "smPseudoConditionalTestAct.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MocksmPseudoConditionalTestAct_Init(void);
void MocksmPseudoConditionalTestAct_Destroy(void);
void MocksmPseudoConditionalTestAct_Verify(void);




#define smPCT_tr1_Expect(me, pe) smPCT_tr1_CMockExpect(__LINE__, me, pe)
void smPCT_tr1_CMockExpect(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe);
#define smPCT_tr2_Expect(me, pe) smPCT_tr2_CMockExpect(__LINE__, me, pe)
void smPCT_tr2_CMockExpect(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe);
#define smPCT_tr3_Expect(me, pe) smPCT_tr3_CMockExpect(__LINE__, me, pe)
void smPCT_tr3_CMockExpect(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe);
#define smPCT_tr4_Expect(me, pe) smPCT_tr4_CMockExpect(__LINE__, me, pe)
void smPCT_tr4_CMockExpect(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe);
#define smPCT_setCondition_Expect(me, pe) smPCT_setCondition_CMockExpect(__LINE__, me, pe)
void smPCT_setCondition_CMockExpect(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe);
#define smPCT_onEventA_ExpectAndReturn(me, pe, cmock_retval) smPCT_onEventA_CMockExpectAndReturn(__LINE__, me, pe, cmock_retval)
void smPCT_onEventA_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe, rbool_t cmock_to_return);
#define smPCT_onEventD_ExpectAndReturn(me, pe, cmock_retval) smPCT_onEventD_CMockExpectAndReturn(__LINE__, me, pe, cmock_retval)
void smPCT_onEventD_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe, rbool_t cmock_to_return);
#define smPCT_guardTrue_ExpectAndReturn(me, pe, cmock_retval) smPCT_guardTrue_CMockExpectAndReturn(__LINE__, me, pe, cmock_retval)
void smPCT_guardTrue_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, SmPseudoConditionalTest* const me, RKH_EVT_T* pe, rbool_t cmock_to_return);

#endif