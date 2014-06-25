
/* autogenerated from volk_gnsssdr_32fc_s32fc_multiply_32fc.orc */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <math.h>

#ifndef _ORC_INTEGER_TYPEDEFS_
#define _ORC_INTEGER_TYPEDEFS_
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <stdint.h>
typedef int8_t orc_int8;
typedef int16_t orc_int16;
typedef int32_t orc_int32;
typedef int64_t orc_int64;
typedef uint8_t orc_uint8;
typedef uint16_t orc_uint16;
typedef uint32_t orc_uint32;
typedef uint64_t orc_uint64;
#define ORC_UINT64_C(x) UINT64_C(x)
#elif defined(_MSC_VER)
typedef signed __int8 orc_int8;
typedef signed __int16 orc_int16;
typedef signed __int32 orc_int32;
typedef signed __int64 orc_int64;
typedef unsigned __int8 orc_uint8;
typedef unsigned __int16 orc_uint16;
typedef unsigned __int32 orc_uint32;
typedef unsigned __int64 orc_uint64;
#define ORC_UINT64_C(x) (x##Ui64)
#define inline __inline
#else
#include <limits.h>
typedef signed char orc_int8;
typedef short orc_int16;
typedef int orc_int32;
typedef unsigned char orc_uint8;
typedef unsigned short orc_uint16;
typedef unsigned int orc_uint32;
#if INT_MAX == LONG_MAX
typedef long long orc_int64;
typedef unsigned long long orc_uint64;
#define ORC_UINT64_C(x) (x##ULL)
#else
typedef long orc_int64;
typedef unsigned long orc_uint64;
#define ORC_UINT64_C(x) (x##UL)
#endif
#endif
typedef union { orc_int16 i; orc_int8 x2[2]; } orc_union16;
typedef union { orc_int32 i; float f; orc_int16 x2[2]; orc_int8 x4[4]; } orc_union32;
typedef union { orc_int64 i; double f; orc_int32 x2[2]; float x2f[2]; orc_int16 x4[4]; } orc_union64;
#endif
#ifndef ORC_RESTRICT
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define ORC_RESTRICT restrict
#elif defined(__GNUC__) && __GNUC__ >= 4
#define ORC_RESTRICT __restrict__
#else
#define ORC_RESTRICT
#endif
#endif

#ifndef ORC_INTERNAL
#if defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define ORC_INTERNAL __attribute__((visibility("hidden")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x550)
#define ORC_INTERNAL __hidden
#elif defined (__GNUC__)
#define ORC_INTERNAL __attribute__((visibility("hidden")))
#else
#define ORC_INTERNAL
#endif
#endif


#ifndef DISABLE_ORC
#include <orc/orc.h>
#endif
void volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl (orc_uint64 * ORC_RESTRICT d1, const orc_uint64 * ORC_RESTRICT s1, float p1, int n);


/* begin Orc C target preamble */
#define ORC_CLAMP(x,a,b) ((x)<(a) ? (a) : ((x)>(b) ? (b) : (x)))
#define ORC_ABS(a) ((a)<0 ? -(a) : (a))
#define ORC_MIN(a,b) ((a)<(b) ? (a) : (b))
#define ORC_MAX(a,b) ((a)>(b) ? (a) : (b))
#define ORC_SB_MAX 127
#define ORC_SB_MIN (-1-ORC_SB_MAX)
#define ORC_UB_MAX 255
#define ORC_UB_MIN 0
#define ORC_SW_MAX 32767
#define ORC_SW_MIN (-1-ORC_SW_MAX)
#define ORC_UW_MAX 65535
#define ORC_UW_MIN 0
#define ORC_SL_MAX 2147483647
#define ORC_SL_MIN (-1-ORC_SL_MAX)
#define ORC_UL_MAX 4294967295U
#define ORC_UL_MIN 0
#define ORC_CLAMP_SB(x) ORC_CLAMP(x,ORC_SB_MIN,ORC_SB_MAX)
#define ORC_CLAMP_UB(x) ORC_CLAMP(x,ORC_UB_MIN,ORC_UB_MAX)
#define ORC_CLAMP_SW(x) ORC_CLAMP(x,ORC_SW_MIN,ORC_SW_MAX)
#define ORC_CLAMP_UW(x) ORC_CLAMP(x,ORC_UW_MIN,ORC_UW_MAX)
#define ORC_CLAMP_SL(x) ORC_CLAMP(x,ORC_SL_MIN,ORC_SL_MAX)
#define ORC_CLAMP_UL(x) ORC_CLAMP(x,ORC_UL_MIN,ORC_UL_MAX)
#define ORC_SWAP_W(x) ((((x)&0xff)<<8) | (((x)&0xff00)>>8))
#define ORC_SWAP_L(x) ((((x)&0xff)<<24) | (((x)&0xff00)<<8) | (((x)&0xff0000)>>8) | (((x)&0xff000000)>>24))
#define ORC_SWAP_Q(x) ((((x)&ORC_UINT64_C(0xff))<<56) | (((x)&ORC_UINT64_C(0xff00))<<40) | (((x)&ORC_UINT64_C(0xff0000))<<24) | (((x)&ORC_UINT64_C(0xff000000))<<8) | (((x)&ORC_UINT64_C(0xff00000000))>>8) | (((x)&ORC_UINT64_C(0xff0000000000))>>24) | (((x)&ORC_UINT64_C(0xff000000000000))>>40) | (((x)&ORC_UINT64_C(0xff00000000000000))>>56))
#define ORC_PTR_OFFSET(ptr,offset) ((void *)(((unsigned char *)(ptr)) + (offset)))
#define ORC_DENORMAL(x) ((x) & ((((x)&0x7f800000) == 0) ? 0xff800000 : 0xffffffff))
#define ORC_ISNAN(x) ((((x)&0x7f800000) == 0x7f800000) && (((x)&0x007fffff) != 0))
#define ORC_DENORMAL_DOUBLE(x) ((x) & ((((x)&ORC_UINT64_C(0x7ff0000000000000)) == 0) ? ORC_UINT64_C(0xfff0000000000000) : ORC_UINT64_C(0xffffffffffffffff)))
#define ORC_ISNAN_DOUBLE(x) ((((x)&ORC_UINT64_C(0x7ff0000000000000)) == ORC_UINT64_C(0x7ff0000000000000)) && (((x)&ORC_UINT64_C(0x000fffffffffffff)) != 0))
#ifndef ORC_RESTRICT
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define ORC_RESTRICT restrict
#elif defined(__GNUC__) && __GNUC__ >= 4
#define ORC_RESTRICT __restrict__
#else
#define ORC_RESTRICT
#endif
#endif
/* end Orc C target preamble */



/* volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl */
#ifdef DISABLE_ORC
void
volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl (orc_uint64 * ORC_RESTRICT d1, const orc_uint64 * ORC_RESTRICT s1, float p1, int n){
  int i;
  orc_union64 * ORC_RESTRICT ptr0;
  const orc_union64 * ORC_RESTRICT ptr4;
  orc_union64 var38;
  orc_union64 var39;
  orc_union64 var40;
  orc_union64 var41;
  orc_union64 var42;
  orc_union64 var43;
  orc_union32 var44;
  orc_union32 var45;
  orc_union32 var46;
  orc_union64 var47;
  orc_union64 var48;
  orc_union32 var49;
  orc_union32 var50;
  orc_union32 var51;

  ptr0 = (orc_union64 *)d1;
  ptr4 = (orc_union64 *)s1;

    /* 1: loadpl */
    var39.x2f[0] = p1;
    var39.x2f[1] = p1;
    /* 7: loadpl */
    var41.x2f[0] = p1;
    var41.x2f[1] = p1;

  for (i = 0; i < n; i++) {
    /* 0: loadq */
    var38 = ptr4[i];
    /* 2: mulf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var38.x2[0]);
       _src2.i = ORC_DENORMAL(var39.x2[0]);
       _dest1.f = _src1.f * _src2.f;
       var43.x2[0] = ORC_DENORMAL(_dest1.i);
    }
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var38.x2[1]);
       _src2.i = ORC_DENORMAL(var39.x2[1]);
       _dest1.f = _src1.f * _src2.f;
       var43.x2[1] = ORC_DENORMAL(_dest1.i);
    }
    /* 3: splitql */
    {
       orc_union64 _src;
       _src.i = var43.i;
       var44.i = _src.x2[1];
       var45.i = _src.x2[0];
    }
    /* 4: subf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var45.i);
       _src2.i = ORC_DENORMAL(var44.i);
       _dest1.f = _src1.f - _src2.f;
       var46.i = ORC_DENORMAL(_dest1.i);
    }
    /* 5: loadq */
    var40 = ptr4[i];
    /* 6: swaplq */
    var47.i = (ORC_UINT64_C(var40.i&0x00000000ffffffff) << 32) | (ORC_UINT64_C(var40.i&0xffffffff00000000) >> 32);
    /* 8: mulf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var47.x2[0]);
       _src2.i = ORC_DENORMAL(var41.x2[0]);
       _dest1.f = _src1.f * _src2.f;
       var48.x2[0] = ORC_DENORMAL(_dest1.i);
    }
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var47.x2[1]);
       _src2.i = ORC_DENORMAL(var41.x2[1]);
       _dest1.f = _src1.f * _src2.f;
       var48.x2[1] = ORC_DENORMAL(_dest1.i);
    }
    /* 9: splitql */
    {
       orc_union64 _src;
       _src.i = var48.i;
       var49.i = _src.x2[1];
       var50.i = _src.x2[0];
    }
    /* 10: addf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var50.i);
       _src2.i = ORC_DENORMAL(var49.i);
       _dest1.f = _src1.f + _src2.f;
       var51.i = ORC_DENORMAL(_dest1.i);
    }
    /* 11: mergelq */
    {
       orc_union64 _dest;
       _dest.x2[0] = var46.i;
       _dest.x2[1] = var51.i;
       var42.i = _dest.i;
    }
    /* 12: storeq */
    ptr0[i] = var42;
  }

}

#else
static void
_backup_volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl (OrcExecutor * ORC_RESTRICT ex)
{
  int i;
  int n = ex->n;
  orc_union64 * ORC_RESTRICT ptr0;
  const orc_union64 * ORC_RESTRICT ptr4;
  orc_union64 var38;
  orc_union64 var39;
  orc_union64 var40;
  orc_union64 var41;
  orc_union64 var42;
  orc_union64 var43;
  orc_union32 var44;
  orc_union32 var45;
  orc_union32 var46;
  orc_union64 var47;
  orc_union64 var48;
  orc_union32 var49;
  orc_union32 var50;
  orc_union32 var51;

  ptr0 = (orc_union64 *)ex->arrays[0];
  ptr4 = (orc_union64 *)ex->arrays[4];

    /* 1: loadpl */
    var39.x2[0] = ex->params[24];
    var39.x2[1] = ex->params[24];
    /* 7: loadpl */
    var41.x2[0] = ex->params[24];
    var41.x2[1] = ex->params[24];

  for (i = 0; i < n; i++) {
    /* 0: loadq */
    var38 = ptr4[i];
    /* 2: mulf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var38.x2[0]);
       _src2.i = ORC_DENORMAL(var39.x2[0]);
       _dest1.f = _src1.f * _src2.f;
       var43.x2[0] = ORC_DENORMAL(_dest1.i);
    }
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var38.x2[1]);
       _src2.i = ORC_DENORMAL(var39.x2[1]);
       _dest1.f = _src1.f * _src2.f;
       var43.x2[1] = ORC_DENORMAL(_dest1.i);
    }
    /* 3: splitql */
    {
       orc_union64 _src;
       _src.i = var43.i;
       var44.i = _src.x2[1];
       var45.i = _src.x2[0];
    }
    /* 4: subf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var45.i);
       _src2.i = ORC_DENORMAL(var44.i);
       _dest1.f = _src1.f - _src2.f;
       var46.i = ORC_DENORMAL(_dest1.i);
    }
    /* 5: loadq */
    var40 = ptr4[i];
    /* 6: swaplq */
    var47.i = (ORC_UINT64_C(var40.i&0x00000000ffffffff) << 32) | (ORC_UINT64_C(var40.i&0xffffffff00000000) >> 32);
    /* 8: mulf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var47.x2[0]);
       _src2.i = ORC_DENORMAL(var41.x2[0]);
       _dest1.f = _src1.f * _src2.f;
       var48.x2[0] = ORC_DENORMAL(_dest1.i);
    }
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var47.x2[1]);
       _src2.i = ORC_DENORMAL(var41.x2[1]);
       _dest1.f = _src1.f * _src2.f;
       var48.x2[1] = ORC_DENORMAL(_dest1.i);
    }
    /* 9: splitql */
    {
       orc_union64 _src;
       _src.i = var48.i;
       var49.i = _src.x2[1];
       var50.i = _src.x2[0];
    }
    /* 10: addf */
    {
       orc_union32 _src1;
       orc_union32 _src2;
       orc_union32 _dest1;
       _src1.i = ORC_DENORMAL(var50.i);
       _src2.i = ORC_DENORMAL(var49.i);
       _dest1.f = _src1.f + _src2.f;
       var51.i = ORC_DENORMAL(_dest1.i);
    }
    /* 11: mergelq */
    {
       orc_union64 _dest;
       _dest.x2[0] = var46.i;
       _dest.x2[1] = var51.i;
       var42.i = _dest.i;
    }
    /* 12: storeq */
    ptr0[i] = var42;
  }

}

void
volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl (orc_uint64 * ORC_RESTRICT d1, const orc_uint64 * ORC_RESTRICT s1, float p1, int n)
{
  OrcExecutor _ex, *ex = &_ex;
  static volatile int p_inited = 0;
  static OrcCode *c = 0;
  void (*func) (OrcExecutor *);

  if (!p_inited) {
    orc_once_mutex_lock ();
    if (!p_inited) {
      OrcProgram *p;

#if 1
    static const orc_uint8 bc[] = {
      1, 9, 48, 118, 111, 108, 107, 95, 103, 110, 115, 115, 115, 100, 114, 95, 
      51, 50, 102, 99, 95, 115, 51, 50, 102, 99, 95, 109, 117, 108, 116, 105, 
      112, 108, 121, 95, 51, 50, 102, 99, 95, 97, 95, 111, 114, 99, 95, 105, 
      109, 112, 108, 11, 8, 8, 12, 8, 8, 17, 8, 20, 8, 20, 4, 20, 
      4, 20, 4, 20, 4, 20, 8, 21, 1, 202, 32, 4, 24, 197, 36, 35, 
      32, 201, 33, 35, 36, 187, 37, 4, 21, 1, 202, 32, 37, 24, 197, 36, 
      35, 32, 200, 34, 35, 36, 194, 0, 33, 34, 2, 0, 
    };
    p = orc_program_new_from_static_bytecode (bc);
    orc_program_set_backup_function (p, _backup_volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl);
#else
      p = orc_program_new ();
      orc_program_set_name (p, "volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl");
      orc_program_set_backup_function (p, _backup_volk_gnsssdr_32fc_s32fc_multiply_32fc_a_orc_impl);
      orc_program_add_destination (p, 8, "d1");
      orc_program_add_source (p, 8, "s1");
      orc_program_add_parameter_float (p, 8, "p1");
      orc_program_add_temporary (p, 8, "t1");
      orc_program_add_temporary (p, 4, "t2");
      orc_program_add_temporary (p, 4, "t3");
      orc_program_add_temporary (p, 4, "t4");
      orc_program_add_temporary (p, 4, "t5");
      orc_program_add_temporary (p, 8, "t6");

      orc_program_append_2 (p, "mulf", 1, ORC_VAR_T1, ORC_VAR_S1, ORC_VAR_P1, ORC_VAR_D1);
      orc_program_append_2 (p, "splitql", 0, ORC_VAR_T5, ORC_VAR_T4, ORC_VAR_T1, ORC_VAR_D1);
      orc_program_append_2 (p, "subf", 0, ORC_VAR_T2, ORC_VAR_T4, ORC_VAR_T5, ORC_VAR_D1);
      orc_program_append_2 (p, "swaplq", 0, ORC_VAR_T6, ORC_VAR_S1, ORC_VAR_D1, ORC_VAR_D1);
      orc_program_append_2 (p, "mulf", 1, ORC_VAR_T1, ORC_VAR_T6, ORC_VAR_P1, ORC_VAR_D1);
      orc_program_append_2 (p, "splitql", 0, ORC_VAR_T5, ORC_VAR_T4, ORC_VAR_T1, ORC_VAR_D1);
      orc_program_append_2 (p, "addf", 0, ORC_VAR_T3, ORC_VAR_T4, ORC_VAR_T5, ORC_VAR_D1);
      orc_program_append_2 (p, "mergelq", 0, ORC_VAR_D1, ORC_VAR_T2, ORC_VAR_T3, ORC_VAR_D1);
#endif

      orc_program_compile (p);
      c = orc_program_take_code (p);
      orc_program_free (p);
    }
    p_inited = TRUE;
    orc_once_mutex_unlock ();
  }
  ex->arrays[ORC_VAR_A2] = c;
  ex->program = 0;

  ex->n = n;
  ex->arrays[ORC_VAR_D1] = d1;
  ex->arrays[ORC_VAR_S1] = (void *)s1;
  {
    orc_union32 tmp;
    tmp.f = p1;
    ex->params[ORC_VAR_P1] = tmp.i;
  }

  func = c->exec;
  func (ex);
}
#endif


