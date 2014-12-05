
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; LIBRARY CONSTANTS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; error
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   ; consistent with "error.h"
   
   PUBLIC __EOK, __EACCES, __EBADF
   PUBLIC __EBDFD, __EDOM, __EFBIG
   PUBLIC __EINVAL, __EMFILE, __ENFILE
   PUBLIC __ENOLCK, __ENOMEM, __ENOTSUP
   PUBLIC __EOVERFLOW, __ERANGE
   
   defgroup
   {
      __EOK = 0,
      __EACCES,
      __EBADF,
      __EBDFD,
      __EDOM,
      __EFBIG,
      __EINVAL,
      __EMFILE,
      __ENFILE,
      __ENOLCK,
      __ENOMEM,
      __ENOTSUP,
      __EOVERFLOW,
      __ERANGE,
      
      ; define next error number for targets
      
      __ERROR_NEXT__
   }
   
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; stdio
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   ; must not be changed consistent with "stdio.h"
   
   PUBLIC STDIO_SEEK_SET, STDIO_SEEK_CUR, STDIO_SEEK_END

   defc STDIO_SEEK_SET = 0
   defc STDIO_SEEK_CUR = 1
   defc STDIO_SEEK_END = 2
   
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; threads
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   PUBLIC mtx_plain, mtx_recursive, mtx_timed

   defc mtx_plain     = $01
   defc mtx_recursive = $02
   defc mtx_timed     = $04

   PUBLIC thrd_success, thrd_error, thrd_nomem
   PUBLIC thrd_busy, thrd_timedout

   defc thrd_success  = $0000
   defc thrd_error    = $0001
   defc thrd_nomem    = $0002
   defc thrd_busy     = $0004
   defc thrd_timedout = $0008

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; messages
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   ; relative sequence of these messages is significant
   ; but can insert other messages as needed
   
   PUBLIC STDIO_MSG_PUTC, STDIO_MSG_WRIT, STDIO_MSG_GETC
   PUBLIC STDIO_MSG_EATC, STDIO_MSG_READ, STDIO_MSG_SEEK
   PUBLIC STDIO_MSG_ICTL, STDIO_MSG_FLSH, STDIO_MSG_CLOS
   
   PUBLIC ITERM_MSG_GETC, ITERM_MSG_PUTC, ITERM_MSG_PRINT_CURSOR
   PUBLIC ITERM_MSG_ERASE_CURSOR, ITERM_MSG_BS, ITERM_MSG_BS_PWD
   PUBLIC ITERM_MSG_READLINE_BEGIN, ITERM_MSG_READLINE_END, ITERM_MSG_BELL
   
   PUBLIC OTERM_MSG_PUTC, OTERM_MSG_TTY, OTERM_MSG_PRINTC
   PUBLIC OTERM_MSG_SCROLL, OTERM_MSG_CLS, OTERM_MSG_PAUSE
   PUBLIC OTERM_MSG_BELL
   
   defgroup
   {
      ; stdio messages
      
      STDIO_MSG_PUTC = 1,
      STDIO_MSG_WRIT,
      STDIO_MSG_GETC,
      STDIO_MSG_EATC,
      STDIO_MSG_READ,
      STDIO_MSG_SEEK,
      STDIO_MSG_ICTL,
      STDIO_MSG_FLSH,
      STDIO_MSG_CLOS,
      
      ; input terminal messages
      
      ITERM_MSG_GETC = 15,
      ITERM_MSG_PUTC,
      ITERM_MSG_PRINT_CURSOR,
      ITERM_MSG_ERASE_CURSOR,
      ITERM_MSG_BS,
      ITERM_MSG_BS_PWD,
      ITERM_MSG_READLINE_BEGIN,
      ITERM_MSG_READLINE_END,
      ITERM_MSG_BELL,
      
      __MESSAGE_ITERM_NEXT__,
      
      ; output terminal messages
      
      OTERM_MSG_PUTC = 30,
      OTERM_MSG_TTY,
      OTERM_MSG_PRINTC,
      OTERM_MSG_SCROLL,
      OTERM_MSG_CLS,
      OTERM_MSG_PAUSE,
      OTERM_MSG_BELL,
      
      __MESSAGE_OTERM_NEXT__,
      
      ; define next message id for targets
      
      __MESSAGE_NEXT__ = 45
   
   }

   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   ;; ioctls
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   
   ; bit patterns are significant, consistent with "ioctl.h"
   
   ; console_01_input_terminal, FILE type = $01
   
   PUBLIC IOCTL_ITERM_ECHO, IOCTL_ITERM_PASS, IOCTL_ITERM_LINE
   PUBLIC IOCTL_ITERM_COOK, IOCTL_ITERM_CAPS, IOCTL_ITERM_CRLF
   PUBLIC IOCTL_ITERM_CURS
   
   defc IOCTL_ITERM_ECHO = $c081
   defc IOCTL_ITERM_PASS = $c041
   defc IOCTL_ITERM_LINE = $c021
   defc IOCTL_ITERM_COOK = $c011
   defc IOCTL_ITERM_CAPS = $c009
   defc IOCTL_ITERM_CRLF = $c101
   defc IOCTL_ITERM_CURS = $c201
   
   PUBLIC IOCTL_ITERM_TIE, IOCTL_ITERM_GET_EDITBUF, IOCTL_ITERM_SET_EDITBUF
   
   defc IOCTL_ITERM_TIE         = $0101
   defc IOCTL_ITERM_GET_EDITBUF = $0281
   defc IOCTL_ITERM_SET_EDITBUF = $0201
   
   ; console_01_output_terminal, FILE type = $02
   
   PUBLIC IOCTL_OTERM_PAGE, IOCTL_OTERM_PAUSE, IOCTL_OTERM_COOK
   PUBLIC IOCTL_OTERM_CRLF, IOCTL_OTERM_CLEAR, IOCTL_OTERM_SIGNAL
   PUBLIC IOCTL_OTERM_BELL
   
   defc IOCTL_OTERM_PAGE   = $c082
   defc IOCTL_OTERM_PAUSE  = $c042
   defc IOCTL_OTERM_COOK   = $c022
   defc IOCTL_OTERM_CRLF   = $c012
   defc IOCTL_OTERM_CLEAR  = $e002
   defc IOCTL_OTERM_SIGNAL = $c202
   defc IOCTL_OTERM_BELL   = $c102
   
   PUBLIC IOCTL_OTERM_CLS, IOCTL_OTERM_RESET_SCROLL
   PUBLIC IOCTL_OTERM_GET_WINDOW_COORD, IOCTL_OTERM_SET_WINDOW_COORD
   PUBLIC IOCTL_OTERM_GET_WINDOW_RECT, IOCTL_OTERM_SET_WINDOW_RECT
   
   defc IOCTL_OTERM_CLS              = $0102
   defc IOCTL_OTERM_RESET_SCROLL     = $0202
   defc IOCTL_OTERM_GET_WINDOW_COORD = $0382
   defc IOCTL_OTERM_SET_WINDOW_COORD = $0302
   defc IOCTL_OTERM_GET_WINDOW_RECT  = $0482
   defc IOCTL_OTERM_SET_WINDOW_RECT  = $0402

;; END LIBRARY CONSTANTS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;