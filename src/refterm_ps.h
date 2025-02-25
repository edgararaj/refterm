#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[5], immediateIndexed
dcl_resource_structured t0, 12
dcl_resource_texture2d (float,float,float,float) t1
dcl_input_ps_siv linear noperspective v0.xy, position
dcl_output o0.xyzw
dcl_temps 8
ftou r0.xy, v0.xyxx
iadd r0.zw, r0.xxxy, -cb0[1].xxxy
udiv r1.xy, null, r0.wzww, cb0[0].yxyy
uge r0.xy, r0.xyxx, cb0[1].xyxx
and r0.x, r0.y, r0.x
ult r1.zw, r1.yyyx, cb0[0].zzzw
and r0.x, r0.x, r1.z
and r0.x, r1.w, r0.x
if_nz r0.x
  udiv null, r0.xy, r0.zwzz, cb0[0].xyxx
  imad r0.z, r1.x, cb0[0].z, r1.y
  ld_structured_indexable(structured_buffer, stride=12)(mixed,mixed,mixed,mixed) r2.xyz, r0.z, l(0), t0.xyzx
  and r3.xyz, r2.xzyx, l(0x0000ffff, 255, 255, 0)
  ushr r0.zw, r2.xxxy, l(0, 0, 16, 31)
  mov r3.w, r0.z
  imad r4.xy, r3.xwxx, cb0[0].xyxx, r0.xyxx
  mov r4.zw, l(0,0,0,0)
  ld_indexable(texture2d)(float,float,float,float) r4.xyzw, r4.xyzw, t1.xyzw
  ubfe r5.xyzw, l(8, 8, 8, 8), l(8, 16, 8, 16), r2.zzyy
  itof r6.x, r3.y
  itof r6.yz, r5.xxyx
  mul r2.xzw, r6.xxyz, l(0.003922, 0.000000, 0.003922, 0.003922)
  itof r3.x, r3.z
  itof r3.yz, r5.zzwz
  mul r3.xyz, r3.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000)
  and r0.z, cb0[1].z, l(255)
  ubfe r1.zw, l(0, 0, 8, 8), l(0, 0, 8, 16), cb0[1].zzzz
  itof r5.x, r0.z
  itof r5.yz, r1.zzwz
  mul r5.xyz, r3.xyzx, r5.xyzx
  and r0.z, cb0[4].x, l(255)
  ubfe r1.zw, l(0, 0, 8, 8), l(0, 0, 8, 16), cb0[4].xxxx
  itof r6.x, r0.z
  itof r6.yz, r1.zzwz
  mul r6.xyz, r6.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000)
  ubfe r7.xyz, l(1, 1, 1, 0), l(28, 25, 27, 0), r2.yyyy
  mul r5.xyz, r5.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000)
  movc r3.xyz, r7.xxxx, r5.xyzx, r3.xyzx
  mul r5.xyz, r3.xyzx, l(0.500000, 0.500000, 0.500000, 0.000000)
  movc r3.xyz, r7.yyyy, r5.xyzx, r3.xyzx
  add r0.z, -r4.w, l(1.000000)
  mul r4.xyz, r3.xyzx, r4.xyzx
  mad r2.xyz, r0.zzzz, r2.xzwx, r4.xyzx
  ine r0.z, r7.z, l(0)
  uge r1.zw, r0.yyyy, cb0[2].zzzx
  and r0.z, r0.z, r1.z
  ult r4.xy, r0.yyyy, cb0[2].wyww
  and r0.y, r0.z, r4.x
  ine r0.z, r0.w, l(0)
  and r0.z, r1.w, r0.z
  and r0.z, r4.y, r0.z
  or r0.y, r0.z, r0.y
  movc r0.yzw, r0.yyyy, r3.xxyz, r2.xxyz
  ieq r1.xy, r1.xyxx, cb0[3].yxyy
  and r1.x, r1.y, r1.x
  uge r1.y, r0.x, cb0[3].z
  and r1.x, r1.y, r1.x
  iadd r1.y, cb0[3].z, l(1)
  ult r0.x, r0.x, r1.y
  and r0.x, r0.x, r1.x
  movc r0.xyz, r0.xxxx, r6.xyzx, r0.yzwy
else 
  and r0.w, cb0[1].w, l(255)
  ubfe r1.xy, l(8, 8, 0, 0), l(8, 16, 0, 0), cb0[1].wwww
  itof r2.x, r0.w
  itof r2.yz, r1.xxyx
  mul r0.xyz, r2.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000)
endif 
mov o0.xyz, r0.xyzx
mov o0.w, l(1.000000)
ret 
// Approximately 0 instruction slots used
#endif

const BYTE ReftermPSShaderBytes[] =
{
     68,  88,  66,  67, 228, 101, 
    209,  58,  30,  70, 148, 237, 
      0,  68, 160, 254,  17, 188, 
    158, 152,   1,   0,   0,   0, 
    164,   9,   0,   0,   3,   0, 
      0,   0,  44,   0,   0,   0, 
     96,   0,   0,   0, 148,   0, 
      0,   0,  73,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   3,   0,   0, 
     83,  86,  95,  80,  79,  83, 
     73,  84,  73,  79,  78,   0, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  65,  82,  71,  69, 
     84,   0, 171, 171,  83,  72, 
     69,  88,   8,   9,   0,   0, 
     80,   0,   0,   0,  66,   2, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      5,   0,   0,   0, 162,   0, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  12,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   1,   0, 
      0,   0,  85,  85,   0,   0, 
    100,  32,   0,   4,  50,  16, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   8,   0,   0,   0, 
     28,   0,   0,   5,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  16,  16,   0,   0,   0, 
      0,   0,  30,   0,   0,   9, 
    194,   0,  16,   0,   0,   0, 
      0,   0,   6,   4,  16,   0, 
      0,   0,   0,   0,   6, 132, 
     32, 128,  65,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  78,   0,   0,   9, 
     50,   0,  16,   0,   1,   0, 
      0,   0,   0, 208,   0,   0, 
    182,  15,  16,   0,   0,   0, 
      0,   0,  22, 133,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  80,   0,   0,   8, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      0,   0,   0,   0,  70, 128, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  79,   0,   0,   8, 
    194,   0,  16,   0,   1,   0, 
      0,   0,  86,   1,  16,   0, 
      1,   0,   0,   0, 166, 142, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   1,   0, 
      0,   0,   1,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     31,   0,   4,   3,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     78,   0,   0,   9,   0, 208, 
      0,   0,  50,   0,  16,   0, 
      0,   0,   0,   0, 230,  10, 
     16,   0,   0,   0,   0,   0, 
     70, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     35,   0,   0,  10,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  42, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0, 167,   0, 
      0, 139,   2,  99,   0, 128, 
    131, 153,  25,   0, 114,   0, 
     16,   0,   2,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  70, 114, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,  10, 114,   0, 
     16,   0,   3,   0,   0,   0, 
    134,   1,  16,   0,   2,   0, 
      0,   0,   2,  64,   0,   0, 
    255, 255,   0,   0, 255,   0, 
      0,   0, 255,   0,   0,   0, 
      0,   0,   0,   0,  85,   0, 
      0,  10, 194,   0,  16,   0, 
      0,   0,   0,   0,   6,   4, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   0,   0,   0,  31,   0, 
      0,   0,  54,   0,   0,   5, 
    130,   0,  16,   0,   3,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  35,   0, 
      0,  10,  50,   0,  16,   0, 
      4,   0,   0,   0, 198,   0, 
     16,   0,   3,   0,   0,   0, 
     70, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   8, 
    194,   0,  16,   0,   4,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  45,   0, 
      0, 137, 194,   0,   0, 128, 
     67,  85,  21,   0, 242,   0, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  70, 126,  16,   0, 
      1,   0,   0,   0, 138,   0, 
      0,  15, 242,   0,  16,   0, 
      5,   0,   0,   0,   2,  64, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      2,  64,   0,   0,   8,   0, 
      0,   0,  16,   0,   0,   0, 
      8,   0,   0,   0,  16,   0, 
      0,   0, 166,   5,  16,   0, 
      2,   0,   0,   0,  43,   0, 
      0,   5,  18,   0,  16,   0, 
      6,   0,   0,   0,  26,   0, 
     16,   0,   3,   0,   0,   0, 
     43,   0,   0,   5,  98,   0, 
     16,   0,   6,   0,   0,   0, 
      6,   1,  16,   0,   5,   0, 
      0,   0,  56,   0,   0,  10, 
    210,   0,  16,   0,   2,   0, 
      0,   0,   6,   9,  16,   0, 
      6,   0,   0,   0,   2,  64, 
      0,   0, 129, 128, 128,  59, 
      0,   0,   0,   0, 129, 128, 
    128,  59, 129, 128, 128,  59, 
     43,   0,   0,   5,  18,   0, 
     16,   0,   3,   0,   0,   0, 
     42,   0,  16,   0,   3,   0, 
      0,   0,  43,   0,   0,   5, 
     98,   0,  16,   0,   3,   0, 
      0,   0, 166,  11,  16,   0, 
      5,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      3,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
      2,  64,   0,   0, 129, 128, 
    128,  59, 129, 128, 128,  59, 
    129, 128, 128,  59,   0,   0, 
      0,   0,   1,   0,   0,   8, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42, 128,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
    255,   0,   0,   0, 138,   0, 
      0,  16, 194,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  16,   0, 
      0,   0, 166, 138,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  43,   0,   0,   5, 
     18,   0,  16,   0,   5,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  43,   0, 
      0,   5,  98,   0,  16,   0, 
      5,   0,   0,   0, 166,  11, 
     16,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   5,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      5,   0,   0,   0,   1,   0, 
      0,   8,  66,   0,  16,   0, 
      0,   0,   0,   0,  10, 128, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,   1,  64, 
      0,   0, 255,   0,   0,   0, 
    138,   0,   0,  16, 194,   0, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     16,   0,   0,   0,   6, 128, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  43,   0, 
      0,   5,  18,   0,  16,   0, 
      6,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     43,   0,   0,   5,  98,   0, 
     16,   0,   6,   0,   0,   0, 
    166,  11,  16,   0,   1,   0, 
      0,   0,  56,   0,   0,  10, 
    114,   0,  16,   0,   6,   0, 
      0,   0,  70,   2,  16,   0, 
      6,   0,   0,   0,   2,  64, 
      0,   0, 129, 128, 128,  59, 
    129, 128, 128,  59, 129, 128, 
    128,  59,   0,   0,   0,   0, 
    138,   0,   0,  15, 114,   0, 
     16,   0,   7,   0,   0,   0, 
      2,  64,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     28,   0,   0,   0,  25,   0, 
      0,   0,  27,   0,   0,   0, 
      0,   0,   0,   0,  86,   5, 
     16,   0,   2,   0,   0,   0, 
     56,   0,   0,  10, 114,   0, 
     16,   0,   5,   0,   0,   0, 
     70,   2,  16,   0,   5,   0, 
      0,   0,   2,  64,   0,   0, 
    129, 128, 128,  59, 129, 128, 
    128,  59, 129, 128, 128,  59, 
      0,   0,   0,   0,  55,   0, 
      0,   9, 114,   0,  16,   0, 
      3,   0,   0,   0,   6,   0, 
     16,   0,   7,   0,   0,   0, 
     70,   2,  16,   0,   5,   0, 
      0,   0,  70,   2,  16,   0, 
      3,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      5,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      0,   0,   0,  63,   0,   0, 
      0,   0,  55,   0,   0,   9, 
    114,   0,  16,   0,   3,   0, 
      0,   0,  86,   5,  16,   0, 
      7,   0,   0,   0,  70,   2, 
     16,   0,   5,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,   0,   0,   0,   8, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16, 128, 
     65,   0,   0,   0,   4,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   4,   0, 
      0,   0,  50,   0,   0,   9, 
    114,   0,  16,   0,   2,   0, 
      0,   0, 166,  10,  16,   0, 
      0,   0,   0,   0, 134,   3, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   4,   0, 
      0,   0,  39,   0,   0,   7, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      7,   0,   0,   0,   1,  64, 
      0,   0,   0,   0,   0,   0, 
     80,   0,   0,   8, 194,   0, 
     16,   0,   1,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0, 166, 130,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   7, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   1,   0,   0,   0, 
     79,   0,   0,   8,  50,   0, 
     16,   0,   4,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0, 118, 143,  32,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   7, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   4,   0,   0,   0, 
     39,   0,   0,   7,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   7,  66,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   7, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      4,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     60,   0,   0,   7,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     42,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  55,   0, 
      0,   9, 226,   0,  16,   0, 
      0,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
      6,   9,  16,   0,   3,   0, 
      0,   0,   6,   9,  16,   0, 
      2,   0,   0,   0,  32,   0, 
      0,   8,  50,   0,  16,   0, 
      1,   0,   0,   0,  70,   0, 
     16,   0,   1,   0,   0,   0, 
     22, 133,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   7,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,  80,   0, 
      0,   8,  34,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   7,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,  30,   0, 
      0,   8,  34,   0,  16,   0, 
      1,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     79,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  55,   0,   0,   9, 
    114,   0,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   6,   0,   0,   0, 
    150,   7,  16,   0,   0,   0, 
      0,   0,  18,   0,   0,   1, 
      1,   0,   0,   8, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58, 128,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,  64,   0,   0, 255,   0, 
      0,   0, 138,   0,   0,  16, 
     50,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   8,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    246, 143,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     43,   0,   0,   5,  18,   0, 
     16,   0,   2,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  43,   0,   0,   5, 
     98,   0,  16,   0,   2,   0, 
      0,   0,   6,   1,  16,   0, 
      1,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
      2,  64,   0,   0, 129, 128, 
    128,  59, 129, 128, 128,  59, 
    129, 128, 128,  59,   0,   0, 
      0,   0,  21,   0,   0,   1, 
     54,   0,   0,   5, 114,  32, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  62,   0, 
      0,   1
};
