/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is false */

#pragma clang assume_nonnull begin
#pragma clang assume_nonnull end
#pragma clang assume_nonnull begin
#pragma clang assume_nonnull end
#pragma clang assume_nonnull begin
#pragma clang assume_nonnull end
struct _2_init_tigress_1_opaque_NodeStruct ;
struct __darwin_pthread_handler_rec ;
struct __sFILE ;
struct __sFILEX ;
struct __sbuf ;
struct _opaque_pthread_attr_t ;
struct _opaque_pthread_cond_t ;
struct _opaque_pthread_condattr_t ;
struct _opaque_pthread_mutex_t ;
struct _opaque_pthread_mutexattr_t ;
struct _opaque_pthread_t ;
struct timespec ;
struct timeval ;
struct _2_init_tigress_1_opaque_NodeStruct {
   struct _2_init_tigress_1_opaque_NodeStruct *prev ;
   struct _2_init_tigress_1_opaque_NodeStruct *next ;
   int data ;
};
extern int gettimeofday(struct timeval *tv , void *tz ) ;
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
extern int pthread_cond_broadcast(struct _opaque_pthread_cond_t *cond ) ;
char **_global_argv  =    (char **)0;
typedef long long __int64_t;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned int alignment , unsigned int size ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
struct _opaque_pthread_attr_t {
   long __sig ;
   char __opaque[56] ;
};
typedef __darwin_pthread_attr_t pthread_attr_t;
extern unsigned int strlen(char const   *s ) ;
extern int open(char const   *filename , int oflag  , ...) ;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
extern int pthread_barrier_destroy(int *barrier ) ;
struct _opaque_pthread_mutex_t {
   long __sig ;
   char __opaque[56] ;
};
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef __darwin_pthread_mutex_t pthread_mutex_t;
struct _opaque_pthread_mutexattr_t {
   long __sig ;
   char __opaque[8] ;
};
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
extern int __attribute__((__availability__(ios,introduced=2.0), __availability__(macos,introduced=10.4)))  pthread_mutex_init(pthread_mutex_t * __restrict   ,
                                                                                                                              pthread_mutexattr_t const   * _Nullable __restrict   ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned int maxlen ) ;
unsigned long _1_entropy  =    9042506488591766566UL;
typedef long __darwin_time_t;
struct timespec {
   __darwin_time_t tv_sec ;
   long tv_nsec ;
};
extern int ( /* format attribute */  printf)(char const   * __restrict    , ...) ;
int _global_argc  =    0;
extern int pthread_cond_signal(struct _opaque_pthread_cond_t *cond ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_ptr_2  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
extern int scanf(char const   *format  , ...) ;
extern int raise(int sig ) ;
extern int pthread_barrier_init(int *barrier , int *attr , unsigned int count ) ;
char **_global_envp  =    (char **)0;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
extern int unlink(char const   *filename ) ;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
extern double difftime(long tv1 , long tv0 ) ;
extern int pthread_barrier_wait(int *barrier ) ;
extern int pthread_mutex_lock(struct _opaque_pthread_mutex_t *mutex ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned int size ) ;
unsigned long _1_alwaysZero  =    0;
extern void *dlsym(void *handle , char *symbol ) ;
extern int gethostname(char *name , unsigned int namelen ) ;
extern void abort() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
struct __darwin_pthread_handler_rec {
   void (*__routine)(void * ) ;
   void *__arg ;
   struct __darwin_pthread_handler_rec *__next ;
};
extern int fprintf(struct __sFILE *stream , char const   *format  , ...) ;
extern void free(void *ptr ) ;
extern void signal(int sig , void *func ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern void exit(int status ) ;
void init_tigress(void) ;
typedef struct __sFILE FILE;
__inline extern int ( __attribute__((__always_inline__)) __sputc)(int _c , FILE *_p ) ;
extern int mprotect(void *addr , unsigned int len , int prot ) ;
extern int close(int filedes ) ;
struct _opaque_pthread_t {
   long __sig ;
   struct __darwin_pthread_handler_rec *__cleanup_stack ;
   char __opaque[8176] ;
};
extern double log(double x ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern double ceil(double x ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_ptr_1  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
struct __sbuf {
   unsigned char *_base ;
   int _size ;
};
extern int fclose(void *stream ) ;
extern int fcntl(int filedes , int cmd  , ...) ;
typedef __int64_t __darwin_off_t;
void _3_bf_1(unsigned long offset )  __attribute__((__optimize__(0), __optimize__("-fno-omit-frame-pointer"),
__noinline__)) ;
extern void perror(char const   *str ) ;
extern int pthread_cond_wait(struct _opaque_pthread_cond_t *cond , struct _opaque_pthread_cond_t *mutex ) ;
void fac(int n ) ;
struct _opaque_pthread_condattr_t {
   long __sig ;
   char __opaque[8] ;
};
struct _opaque_pthread_cond_t {
   long __sig ;
   char __opaque[40] ;
};
typedef __darwin_pthread_cond_t pthread_cond_t;
typedef __darwin_pthread_condattr_t pthread_condattr_t;
extern int __attribute__((__availability__(ios,introduced=2.0), __availability__(macos,introduced=10.4)))  pthread_cond_init(pthread_cond_t * __restrict   ,
                                                                                                                             pthread_condattr_t const   * _Nullable __restrict   )  __asm__("_pthread_cond_init")  ;
extern int write(int filedes , void *buf , unsigned int nbyte ) ;
typedef struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_StructureType;
extern int ptrace(int request , void *pid , void *addr , int data ) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_list_1  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
extern unsigned int strnlen(char const   *s , unsigned int maxlen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
struct timeval {
   long tv_sec ;
   int tv_usec ;
};
extern void qsort(void *base , unsigned int nel , unsigned int width , int (*compar)(void *a ,
                                                                                     void *b ) ) ;
extern long clock(void) ;
typedef __darwin_off_t fpos_t;
extern long time(long *tloc ) ;
extern int read(int filedes , void *buf , unsigned int nbyte ) ;
extern int rand() ;
typedef __darwin_pthread_t pthread_t;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int __swbuf(int  , FILE * ) ;
extern double sqrt(double x ) ;
extern void *malloc(unsigned int size ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int snprintf(char *str , unsigned int size , char const   *format  , ...) ;
extern int nanosleep(struct timespec  const  *__rqtp , struct timespec *__rmtp )  __asm__("_nanosleep")  ;
struct __sFILE {
   unsigned char *_p ;
   int _r ;
   int _w ;
   short _flags ;
   short _file ;
   struct __sbuf _bf ;
   int _lbfsize ;
   void *_cookie ;
   int (* _Nullable  _close)(void * ) ;
   int (* _Nullable  _read)(void * , char * , int  ) ;
   fpos_t (* _Nullable  _seek)(void * , fpos_t  , int  ) ;
   int (* _Nullable  _write)(void * , char const   * , int  ) ;
   struct __sbuf _ub ;
   struct __sFILEX *_extra ;
   int _ur ;
   unsigned char _ubuf[3] ;
   unsigned char _nbuf[1] ;
   struct __sbuf _lb ;
   int _blksize ;
   fpos_t _offset ;
};
extern int pthread_mutex_unlock(struct _opaque_pthread_mutex_t *mutex ) ;
extern int atoi(char const   *s ) ;
extern int __attribute__((__availability__(ios,introduced=2.0), __availability__(macos,introduced=10.4)))  pthread_create(pthread_t __attribute__((__nullable__))  * _Nonnull __restrict   ,
                                                                                                                          pthread_attr_t const   * _Nullable __restrict   ,
                                                                                                                          void * _Nullable  (* _Nonnull  )(void * _Nullable   ) ,
                                                                                                                          void * _Nullable __restrict   ) ;
unsigned int _2_init_tigress__opaque_array[30]  = 
  {      8,      362,      3,      493, 
        432,      5,      303,      390, 
        5,      383,      5,      7, 
        133,      47,      1,      288, 
        502,      95,      218,      628, 
        22,      428,      656,      41, 
        68,      201,      34,      403, 
        698};
extern int fseek(struct __sFILE *stream , long offs , int whence ) ;
extern int fscanf(struct __sFILE *stream , char const   *format  , ...) ;
struct _2_init_tigress_1_opaque_NodeStruct *_2_init_tigress_1_opaque_list_2  =    (struct _2_init_tigress_1_opaque_NodeStruct *)0;
void megaInit(void) ;
void fib(int n ) ;
__inline extern int ( __attribute__((__always_inline__)) __sputc)(int _c , FILE *_p ) 
{ 
  unsigned char *tmp ;
  unsigned char tmp___0 ;
  int tmp___1 ;

  {
  (_p->_w) --;
  if (_p->_w >= 0) {
    tmp = _p->_p;
    (_p->_p) ++;
    tmp___0 = (unsigned char )_c;
    *tmp = tmp___0;
    return ((int )tmp___0);
  } else
  if (_p->_w >= _p->_lbfsize) {
    if ((int )((char )_c) != 10) {
      tmp = _p->_p;
      (_p->_p) ++;
      tmp___0 = (unsigned char )_c;
      *tmp = tmp___0;
      return ((int )tmp___0);
    } else {
      tmp___1 = __swbuf(_c, _p);
      return (tmp___1);
    }
  } else {
    tmp___1 = __swbuf(_c, _p);
    return (tmp___1);
  }
}
}
void init_tigress(void) 
{ 
  struct _2_init_tigress_1_opaque_NodeStruct *p1 ;
  int i2 ;
  struct _2_init_tigress_1_opaque_NodeStruct *p3 ;
  int _2_init_tigress__BEGIN_1 ;
  int _2_init_tigress__END_1 ;
  int _2_init_tigress__BARRIER_2 ;

  {
  _2_init_tigress__BEGIN_1 = 1;
  p1 = (struct _2_init_tigress_1_opaque_NodeStruct *)malloc(sizeof(struct _2_init_tigress_1_opaque_NodeStruct ));
  p1->next = p1;
  p1->prev = p1;
  _2_init_tigress_1_opaque_list_1 = p1;
  i2 = 0;
  while (i2 < 2) {
    p3 = (struct _2_init_tigress_1_opaque_NodeStruct *)malloc(sizeof(struct _2_init_tigress_1_opaque_NodeStruct ));
    p3->data = i2 * (((_1_entropy + 10) + 1UL) + ((- _1_entropy - 1UL) | (- 10 - 1UL)));
    p3->next = _2_init_tigress_1_opaque_list_1->next;
    p3->prev = _2_init_tigress_1_opaque_list_1;
    (_2_init_tigress_1_opaque_list_1->next)->prev = p3;
    _2_init_tigress_1_opaque_list_1->next = p3;
    i2 ++;
  }
  _2_init_tigress_1_opaque_ptr_1 = _2_init_tigress_1_opaque_list_1->next;
  _2_init_tigress_1_opaque_ptr_2 = _2_init_tigress_1_opaque_ptr_1;
  _2_init_tigress_1_opaque_ptr_2 = _2_init_tigress_1_opaque_ptr_2->next;
  _2_init_tigress__END_1 = 1;
  _2_init_tigress__BARRIER_2 = 1;
  return;
}
}
void _3_bf_1(unsigned long offset )  __attribute__((__optimize__(0), __optimize__("-fno-omit-frame-pointer"),
__noinline__)) ;
void _3_bf_1(unsigned long offset ) 
{ 


  {
  __asm__  volatile   ("movq  %0, 8(%%rbp)": : "r" (offset));
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  init_tigress();
  fac(10);
  fib(10);
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
void fib(int n ) 
{ 
  int a ;
  int b ;
  int s ;
  int i ;
  unsigned long _5_fib_next ;
  void *_5_fib_jumpTab[9]  = {&& _5_fib_lab0, && _5_fib_lab0, && _5_fib_lab2, && _5_fib_lab3,
                              && _5_fib_lab0, && _5_fib_lab5, && _5_fib_lab6, && _5_fib_lab7,
                              && _5_fib_lab8};
  int _5_fib__BEGIN_11 ;
  int _5_fib__END_11 ;
  int _5_fib__BEGIN_12 ;
  int _5_fib__END_12 ;
  int _5_fib__BEGIN_13 ;
  int _5_fib__END_13 ;
  int _5_fib__BEGIN_14 ;
  int _5_fib__END_14 ;
  int _5_fib__BEGIN_15 ;
  int _5_fib__END_15 ;
  int _5_fib__BEGIN_16 ;
  int _5_fib__END_16 ;
  int _5_fib__BEGIN_17 ;
  int _5_fib__END_17 ;
  int _5_fib__BEGIN_18 ;
  int _5_fib__END_18 ;

  {
  _5_fib_next = 2;
  goto *(_5_fib_jumpTab[_5_fib_next - 0]);
  _5_fib_lab8: /* CIL Label */ ;
  return;
  _5_fib_lab3: /* CIL Label */ 
  s = (a | b) + (a & b);
  a = b;
  b = s;
  i = (i ^ 1) + ((i & 1) << 1);
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fib__BEGIN_11 = 1;
  _3_bf_1((unsigned long )(&& _5_fib_lab5));
  Lab_2000009: /* CIL Label */ 
  __asm__  volatile   (".byte 0x33,0x0,0x0,0x55,0x48,0x89,0xe5":);
  _5_fib__END_11 = 1;
  }


  _5_fib_lab6: /* CIL Label */ 
  printf((char const   */* __restrict  */)"fib(%i)=%i\n", n, s);
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fib__BEGIN_12 = 1;
  _3_bf_1((unsigned long )(&& _5_fib_lab8));
  Lab_2000010: /* CIL Label */ 
  __asm__  volatile   (".byte 0x31,0xd8,0x4a,0xf0,0x28,0xa9,0xe5":);
  _5_fib__END_12 = 1;
  }


  _5_fib_lab5: /* CIL Label */ ;
  if (_2_init_tigress_1_opaque_ptr_1 != _2_init_tigress_1_opaque_ptr_2) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fib__BEGIN_13 = 1;
    _3_bf_1((unsigned long )(&& _5_fib_lab7));
    Lab_2000011: /* CIL Label */ 
    __asm__  volatile   (".byte 0x3f,0x76,0x5d,0x5a,0x83":);
    _5_fib__END_13 = 1;
    }


  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fib__BEGIN_14 = 1;
    _3_bf_1((unsigned long )(&& _5_fib_lab0));
    Lab_2000012: /* CIL Label */ 
    __asm__  volatile   (".byte 0x0,0xc7,0x85,0xa8,0xf9,0xff":);
    _5_fib__END_14 = 1;
    }


  }
  _5_fib_lab0: /* CIL Label */ ;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fib__BEGIN_15 = 1;
  _3_bf_1((unsigned long )(&& _5_fib_lab3));
  Lab_2000013: /* CIL Label */ 
  __asm__  volatile   (".byte 0x9f,0x3d,0x0,0x1":);
  _5_fib__END_15 = 1;
  }


  _5_fib_lab7: /* CIL Label */ ;
  if (((unsigned int )(((((n - i) & - (n >= i)) << 1) & (((n - i) & - (n >= i)) >> 31)) - ((n - i) & - (n >= i))) >> 31U) & 1) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fib__BEGIN_16 = 1;
    _3_bf_1((unsigned long )(&& _5_fib_lab3));
    Lab_2000014: /* CIL Label */ 
    __asm__  volatile   (".byte 0x21,0x3,0x0,0x0,0x41,0x81,0xe7,0xed":);
    _5_fib__END_16 = 1;
    }


  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fib__BEGIN_17 = 1;
    _3_bf_1((unsigned long )(&& _5_fib_lab6));
    Lab_2000015: /* CIL Label */ 
    __asm__  volatile   (".byte 0x8b,0x51,0x60,0x4c,0x8b,0x42,0x40,0x48":);
    _5_fib__END_17 = 1;
    }


  }
  _5_fib_lab2: /* CIL Label */ 
  a = 0;
  b = 1;
  s = 1;
  i = 1;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fib__BEGIN_18 = 1;
  _3_bf_1((unsigned long )(&& _5_fib_lab5));
  Lab_2000016: /* CIL Label */ 
  __asm__  volatile   (".byte 0xf7,0xf0,0xcb,0x3f,0x59,0x1f,0x8,0x74":);
  _5_fib__END_18 = 1;
  }


}
}
void fac(int n ) 
{ 
  int s ;
  int i ;
  unsigned long _5_fac_next ;
  void *_5_fac_jumpTab[8]  = {&& _5_fac_lab0, && _5_fac_lab1, && _5_fac_lab2, && _5_fac_lab3,
                              && _5_fac_lab0, && _5_fac_lab5, && _5_fac_lab6, && _5_fac_lab7};
  int _5_fac__BEGIN_3 ;
  int _5_fac__END_3 ;
  int _5_fac__BEGIN_4 ;
  int _5_fac__END_4 ;
  int _5_fac__BEGIN_5 ;
  int _5_fac__END_5 ;
  int _5_fac__BEGIN_6 ;
  int _5_fac__END_6 ;
  int _5_fac__BEGIN_7 ;
  int _5_fac__END_7 ;
  int _5_fac__BEGIN_8 ;
  int _5_fac__END_8 ;
  int _5_fac__BEGIN_9 ;
  int _5_fac__END_9 ;
  int _5_fac__BEGIN_10 ;
  int _5_fac__END_10 ;

  {
  _5_fac_next = 6;
  goto *(_5_fac_jumpTab[_5_fac_next - 0]);
  _5_fac_lab1: /* CIL Label */ 
  s = (s & i) * (s | i) + (s & ~ i) * (~ s & i);
  i = (i ^ 1) + ((i & 1) << 1);
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fac__BEGIN_3 = 1;
  _3_bf_1((unsigned long )(&& _5_fac_lab0));
  Lab_2000001: /* CIL Label */ 
  __asm__  volatile   (".byte 0x6,0xb2,0xaf,0x63,0x7e,0x8,0xfa,0x7e":);
  _5_fac__END_3 = 1;
  }


  _5_fac_lab3: /* CIL Label */ ;
  if (_2_init_tigress_1_opaque_ptr_1 == _2_init_tigress_1_opaque_ptr_2) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fac__BEGIN_4 = 1;
    _3_bf_1((unsigned long )(&& _5_fac_lab2));
    Lab_2000002: /* CIL Label */ 
    __asm__  volatile   (".byte 0xf8,0xff,0x74,0x3b,0x8d,0x48,0xcf,0xf9":);
    _5_fac__END_4 = 1;
    }


  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fac__BEGIN_5 = 1;
    _3_bf_1((unsigned long )(&& _5_fac_lab0));
    Lab_2000003: /* CIL Label */ 
    __asm__  volatile   (".byte 0x0,0xbb,0x1,0x0":);
    _5_fac__END_5 = 1;
    }


  }
  _5_fac_lab6: /* CIL Label */ 
  s = 1;
  i = 2;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fac__BEGIN_6 = 1;
  _3_bf_1((unsigned long )(&& _5_fac_lab3));
  Lab_2000004: /* CIL Label */ 
  __asm__  volatile   (".byte 0x55,0xc9,0xe5,0x2f,0xdb,0x2f,0x8a,0x6f":);
  _5_fac__END_6 = 1;
  }


  _5_fac_lab5: /* CIL Label */ ;
  return;
  _5_fac_lab0: /* CIL Label */ ;
  if (((unsigned int )((i | ~ n) & ((i ^ n) | ~ (n - i))) >> 31U) & 1) {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fac__BEGIN_7 = 1;
    _3_bf_1((unsigned long )(&& _5_fac_lab1));
    Lab_2000005: /* CIL Label */ 
    __asm__  volatile   (".byte 0x54,0x26,0x21,0x16":);
    _5_fac__END_7 = 1;
    }


  } else {
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _5_fac__BEGIN_8 = 1;
    _3_bf_1((unsigned long )(&& _5_fac_lab7));
    Lab_2000006: /* CIL Label */ 
    __asm__  volatile   (".byte 0x37,0x0,0x0,0x31,0xff":);
    _5_fac__END_8 = 1;
    }


  }
  _5_fac_lab7: /* CIL Label */ 
  printf((char const   */* __restrict  */)"fac(%i)=%i\n", n, s);
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fac__BEGIN_9 = 1;
  _3_bf_1((unsigned long )(&& _5_fac_lab5));
  Lab_2000007: /* CIL Label */ 
  __asm__  volatile   (".byte 0x60,0x48,0x8b,0x7e,0x60,0xb8":);
  _5_fac__END_9 = 1;
  }


  _5_fac_lab2: /* CIL Label */ ;
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _5_fac__BEGIN_10 = 1;
  _3_bf_1((unsigned long )(&& _5_fac_lab7));
  Lab_2000008: /* CIL Label */ 
  __asm__  volatile   (".byte 0x48,0x8d,0x35":);
  _5_fac__END_10 = 1;
  }


}
}
