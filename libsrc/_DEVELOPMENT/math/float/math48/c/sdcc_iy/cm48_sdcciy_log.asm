
; float log(float x)

SECTION code_fp_math48

PUBLIC cm48_sdcciy_log

EXTERN cm48_sdcciy_log_fastcall

cm48_sdcciy_log:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp cm48_sdcciy_log_fastcall