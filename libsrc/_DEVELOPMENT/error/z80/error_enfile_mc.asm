
INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_ERROR
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   ; verbose mode

   SECTION seg_code_error
   
   PUBLIC error_enfile_mc
   
   EXTERN __ENFILE, errno_mc
   
      pop hl
   
   error_enfile_mc:
   
      ; set hl = -1
      ; set carry flag
      ; set errno = ENFILE
      
      ld l,__ENFILE
      jp errno_mc
   
   
   SECTION seg_rodata_error_strings

   IF __CLIB_OPT_ERROR & $02

      defb __ENFILE
      defm "ENFILE - File descriptor unavailable"
      defb 0

   ELSE
   
      defb __ENFILE
      defm "ENFILE"
      defb 0
   
   ENDIF

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   SECTION seg_code_error
   
   PUBLIC error_enfile_mc
   
   EXTERN errno_mc
   
   defc error_enfile_mc = errno_mc - 2

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;