// This file was generated on Tue Nov 24 19:15:14 CET 2020
// If necessary please modify this file according to the instructions
// Contact: eda@tum

#ifndef ETISS_RV64GCVArch_RV64GCV_H_
#define ETISS_RV64GCVArch_RV64GCV_H_
#include <stdio.h>
#include "etiss/jit/CPU.h"

#ifdef __cplusplus
extern "C" {
#endif
#pragma pack(push, 1) 
struct RV64GCV {
	ETISS_CPU cpu; // original cpu struct must be defined as the first field of the new structure. this allows to cast X * to ETISS_CPU * and vice vers
	etiss_uint64 ZERO;
	etiss_uint64 RA;
	etiss_uint64 SP;
	etiss_uint64 GP;
	etiss_uint64 TP;
	etiss_uint64 T0;
	etiss_uint64 T1;
	etiss_uint64 T2;
	etiss_uint64 S0;
	etiss_uint64 S1;
	etiss_uint64 A0;
	etiss_uint64 A1;
	etiss_uint64 A2;
	etiss_uint64 A3;
	etiss_uint64 A4;
	etiss_uint64 A5;
	etiss_uint64 A6;
	etiss_uint64 A7;
	etiss_uint64 S2;
	etiss_uint64 S3;
	etiss_uint64 S4;
	etiss_uint64 S5;
	etiss_uint64 S6;
	etiss_uint64 S7;
	etiss_uint64 S8;
	etiss_uint64 S9;
	etiss_uint64 S10;
	etiss_uint64 S11;
	etiss_uint64 T3;
	etiss_uint64 T4;
	etiss_uint64 T5;
	etiss_uint64 T6;
	etiss_uint64 *X[32];
	etiss_uint64 ins_X[32];
	etiss_uint64 CSR[4096];
	etiss_uint64 FENCE[4];
	etiss_uint64 RES;
	etiss_uint8* V;
};

#pragma pack(pop) // undo changes
typedef struct RV64GCV RV64GCV; // convenient use of X instead of struct X in generated C code
#ifdef __cplusplus
} // extern "C"
#endif
#endif
