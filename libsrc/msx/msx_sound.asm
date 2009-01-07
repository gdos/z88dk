;
;	MSX specific routines
;	by Stefano Bodrato, December 2007
;
;	int msx_sound(int reg, int val);
;
;	Play a sound by PSG
;
;
;	$Id: msx_sound.asm,v 1.2 2009-01-07 09:50:15 stefano Exp $
;

	XLIB	msx_sound
	LIB     msxbios
	
        INCLUDE "#msxbios.def"

msx_sound:

	pop	bc
	pop	de
	pop	hl
	push	hl
	push	de
	push	bc
	
	ld	a,l
	
	ld	ix, WRTPSG
	jp	msxbios
