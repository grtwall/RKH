/**
 *  \file       common.h
 *  \ingroup    Test
 *
 *  \brief      Common functions for unit test of state machine module.
 */

/* -------------------------- Development history -------------------------- */
/*
 *  2016.03.17  LeFr  v1.0.00  Initial version
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  francuccilea@gmail.com
 */

/* --------------------------------- Notes --------------------------------- */
/* --------------------------------- Module -------------------------------- */

#ifndef __COMMON_H__
#define __COMMON_H__

/* ----------------------------- Include files ----------------------------- */

#include "rkh.h"

/* ---------------------- External C language linkage ---------------------- */

#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------- Macros -------------------------------- */
#define RKH_STATE_CAST(state_)      ((RKH_ST_T *)state_)

/* -------------------------------- Constants ------------------------------ */
enum
{
    TRN_INTERNAL, TRN_NOT_INTERNAL
};

enum
{
    EXPECT_TS_STATE, EXPECT_EXSTATE, EXPECT_ENSTATE
};

/* ------------------------------- Data types ------------------------------ */
/* -------------------------- External variables --------------------------- */
/* -------------------------- Function prototypes -------------------------- */
const RKH_ST_T *getHistory(const RKH_SHIST_T *history);
void setHistory(const RKH_SHIST_T *history, const RKH_ST_T *state);
void setStateForcesfully(RKH_SMA_T *const me, const RKH_ST_T *state);
void setProfile(RKH_SMA_T *const me, const RKH_ST_T *currentState, 
                const RKH_ST_T *sourceState, const RKH_ST_T **targetState, 
                const RKH_ST_T **entryStates, const RKH_ST_T **exitStates, 
                const RKH_ST_T *mainTargetState, int nExecEffectActions, 
                int kindOfTrn);

/* -------------------- External C language linkage end -------------------- */

#ifdef __cplusplus
}
#endif

/* ------------------------------ Module end ------------------------------- */

#endif

/* ------------------------------ End of file ------------------------------ */
