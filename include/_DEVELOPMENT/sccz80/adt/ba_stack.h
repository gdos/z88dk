
// automatically generated by m4 from headers in proto subdir


#ifndef _ADT_BA_STACK_H
#define _ADT_BA_STACK_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct ba_stack_s
{

   void       *data;
   size_t      size;
   size_t      capacity;

} ba_stack_t;

extern size_t __LIB__ __FASTCALL__ ba_stack_capacity(ba_stack_t *s);


extern void __LIB__ __FASTCALL__ ba_stack_clear(ba_stack_t *s);


extern void __LIB__ __FASTCALL__ ba_stack_destroy(ba_stack_t *s);


extern int __LIB__ __FASTCALL__ ba_stack_empty(ba_stack_t *s);


extern ba_stack_t __LIB__ *ba_stack_init(void *p,void *data,size_t capacity) __smallc;
extern ba_stack_t __LIB__ __CALLEE__ *ba_stack_init_callee(void *p,void *data,size_t capacity) __smallc;
#define ba_stack_init(a,b,c) ba_stack_init_callee(a,b,c)


extern int __LIB__ __FASTCALL__ ba_stack_pop(ba_stack_t *s);


extern int __LIB__ ba_stack_push(ba_stack_t *s,int c) __smallc;
extern int __LIB__ __CALLEE__ ba_stack_push_callee(ba_stack_t *s,int c) __smallc;
#define ba_stack_push(a,b) ba_stack_push_callee(a,b)


extern size_t __LIB__ __FASTCALL__ ba_stack_size(ba_stack_t *s);


extern int __LIB__ __FASTCALL__ ba_stack_top(ba_stack_t *s);



#endif
