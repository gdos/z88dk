
; float acos(float x)

SECTION code_fp_math48

PUBLIC cm48_sdcciy_acos

EXTERN cm48_sdcciy_acos_fastcall

cm48_sdcciy_acos:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af

   jp cm48_sdcciy_acos_fastcall