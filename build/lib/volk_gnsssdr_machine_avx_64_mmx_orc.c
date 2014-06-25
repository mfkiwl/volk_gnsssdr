

/* this file was generated by volk_gnsssdr template utils, do not edit! */

/*
 * Copyright 2011-2012 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#define LV_HAVE_GENERIC 1
#define LV_HAVE_64 1
#define LV_HAVE_MMX 1
#define LV_HAVE_SSE 1
#define LV_HAVE_SSE2 1
#define LV_HAVE_SSE3 1
#define LV_HAVE_SSSE3 1
#define LV_HAVE_SSE4_1 1
#define LV_HAVE_SSE4_2 1
#define LV_HAVE_POPCOUNT 1
#define LV_HAVE_AVX 1
#define LV_HAVE_ORC 1

#include <volk_gnsssdr/volk_gnsssdr_common.h>
#include "volk_gnsssdr_machines.h"
#include <volk_gnsssdr/volk_gnsssdr_config_fixed.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <volk_gnsssdr/volk_gnsssdr_32f_accumulator_s32f.h>
#include <volk_gnsssdr/volk_gnsssdr_32f_index_max_16u.h>
#include <volk_gnsssdr/volk_gnsssdr_32f_x2_add_32f.h>
#include <volk_gnsssdr/volk_gnsssdr_32fc_conjugate_32fc.h>
#include <volk_gnsssdr/volk_gnsssdr_32fc_magnitude_squared_32f.h>
#include <volk_gnsssdr/volk_gnsssdr_32fc_s32fc_multiply_32fc.h>
#include <volk_gnsssdr/volk_gnsssdr_32fc_x2_dot_prod_32fc.h>
#include <volk_gnsssdr/volk_gnsssdr_32fc_x2_multiply_32fc.h>






struct volk_gnsssdr_machine volk_gnsssdr_machine_avx_64_mmx_orc = {
    (1 << LV_GENERIC) | (1 << LV_64) | (1 << LV_MMX) | (1 << LV_SSE) | (1 << LV_SSE2) | (1 << LV_SSE3) | (1 << LV_SSSE3) | (1 << LV_SSE4_1) | (1 << LV_SSE4_2) | (1 << LV_POPCOUNT) | (1 << LV_AVX) | (1 << LV_ORC),
    "avx_64_mmx_orc",
    32,
    "volk_gnsssdr_32f_accumulator_s32f",                                   
    {"a_sse", "generic"},                   
    {(1 << LV_SSE), (1 << LV_GENERIC)},                   
    {true, false},                  
    {volk_gnsssdr_32f_accumulator_s32f_a_sse, volk_gnsssdr_32f_accumulator_s32f_generic},        
    2,                                 
    "volk_gnsssdr_32f_index_max_16u",                                   
    {"a_sse4_1", "a_sse", "generic"},                   
    {(1 << LV_SSE4_1), (1 << LV_SSE), (1 << LV_GENERIC)},                   
    {true, true, false},                  
    {volk_gnsssdr_32f_index_max_16u_a_sse4_1, volk_gnsssdr_32f_index_max_16u_a_sse, volk_gnsssdr_32f_index_max_16u_generic},        
    3,                                 
    "volk_gnsssdr_32f_x2_add_32f",                                   
    {"u_sse", "generic", "a_sse", "a_generic", "u_orc"},                   
    {(1 << LV_SSE), (1 << LV_GENERIC), (1 << LV_SSE), (1 << LV_GENERIC), (1 << LV_ORC)},                   
    {false, false, true, true, false},                  
    {volk_gnsssdr_32f_x2_add_32f_u_sse, volk_gnsssdr_32f_x2_add_32f_generic, volk_gnsssdr_32f_x2_add_32f_a_sse, volk_gnsssdr_32f_x2_add_32f_a_generic, volk_gnsssdr_32f_x2_add_32f_u_orc},        
    5,                                 
    "volk_gnsssdr_32fc_conjugate_32fc",                                   
    {"u_sse3", "generic", "a_sse3", "a_generic"},                   
    {(1 << LV_SSE3), (1 << LV_GENERIC), (1 << LV_SSE3), (1 << LV_GENERIC)},                   
    {false, false, true, true},                  
    {volk_gnsssdr_32fc_conjugate_32fc_u_sse3, volk_gnsssdr_32fc_conjugate_32fc_generic, volk_gnsssdr_32fc_conjugate_32fc_a_sse3, volk_gnsssdr_32fc_conjugate_32fc_a_generic},        
    4,                                 
    "volk_gnsssdr_32fc_magnitude_squared_32f",                                   
    {"u_sse3", "u_sse", "generic", "a_sse3", "a_sse", "a_generic"},                   
    {(1 << LV_SSE3), (1 << LV_SSE), (1 << LV_GENERIC), (1 << LV_SSE3), (1 << LV_SSE), (1 << LV_GENERIC)},                   
    {false, false, false, true, true, true},                  
    {volk_gnsssdr_32fc_magnitude_squared_32f_u_sse3, volk_gnsssdr_32fc_magnitude_squared_32f_u_sse, volk_gnsssdr_32fc_magnitude_squared_32f_generic, volk_gnsssdr_32fc_magnitude_squared_32f_a_sse3, volk_gnsssdr_32fc_magnitude_squared_32f_a_sse, volk_gnsssdr_32fc_magnitude_squared_32f_a_generic},        
    6,                                 
    "volk_gnsssdr_32fc_s32fc_multiply_32fc",                                   
    {"u_sse3", "generic", "a_sse3", "a_generic"},                   
    {(1 << LV_SSE3), (1 << LV_GENERIC), (1 << LV_SSE3), (1 << LV_GENERIC)},                   
    {false, false, true, true},                  
    {volk_gnsssdr_32fc_s32fc_multiply_32fc_u_sse3, volk_gnsssdr_32fc_s32fc_multiply_32fc_generic, volk_gnsssdr_32fc_s32fc_multiply_32fc_a_sse3, volk_gnsssdr_32fc_s32fc_multiply_32fc_a_generic},        
    4,                                 
    "volk_gnsssdr_32fc_x2_dot_prod_32fc",                                   
    {"generic", "u_sse_64", "u_sse3", "u_sse4_1", "a_generic", "a_sse_64", "a_sse3", "a_sse4_1"},                   
    {(1 << LV_GENERIC), (1 << LV_SSE) | (1 << LV_64), (1 << LV_SSE3), (1 << LV_SSE4_1), (1 << LV_GENERIC), (1 << LV_SSE) | (1 << LV_64), (1 << LV_SSE3), (1 << LV_SSE4_1)},                   
    {false, false, false, false, true, true, true, true},                  
    {volk_gnsssdr_32fc_x2_dot_prod_32fc_generic, volk_gnsssdr_32fc_x2_dot_prod_32fc_u_sse_64, volk_gnsssdr_32fc_x2_dot_prod_32fc_u_sse3, volk_gnsssdr_32fc_x2_dot_prod_32fc_u_sse4_1, volk_gnsssdr_32fc_x2_dot_prod_32fc_a_generic, volk_gnsssdr_32fc_x2_dot_prod_32fc_a_sse_64, volk_gnsssdr_32fc_x2_dot_prod_32fc_a_sse3, volk_gnsssdr_32fc_x2_dot_prod_32fc_a_sse4_1},        
    8,                                 
    "volk_gnsssdr_32fc_x2_multiply_32fc",                                   
    {"u_sse3", "generic", "a_sse3", "a_generic", "u_orc"},                   
    {(1 << LV_SSE3), (1 << LV_GENERIC), (1 << LV_SSE3), (1 << LV_GENERIC), (1 << LV_ORC)},                   
    {false, false, true, true, false},                  
    {volk_gnsssdr_32fc_x2_multiply_32fc_u_sse3, volk_gnsssdr_32fc_x2_multiply_32fc_generic, volk_gnsssdr_32fc_x2_multiply_32fc_a_sse3, volk_gnsssdr_32fc_x2_multiply_32fc_a_generic, volk_gnsssdr_32fc_x2_multiply_32fc_u_orc},        
    5,                                 
};