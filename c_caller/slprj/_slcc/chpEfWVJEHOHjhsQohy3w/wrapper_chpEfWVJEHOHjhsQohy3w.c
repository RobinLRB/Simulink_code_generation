# 1 "/tmp/cxxfe_92667371169904.in"
# 15 "/usr/local/MATLAB/R2020b/extern/include/mex.h"
#ifndef mex_h
#define mex_h
# 23 "/usr/include/stdio.h" 3
#ifndef _STDIO_H
#define _STDIO_H 1
# 18 "/usr/include/features.h" 3
#ifndef _FEATURES_H
#define _FEATURES_H 1
# 18 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3
#ifndef _SYS_CDEFS_H
#define _SYS_CDEFS_H 1
# 492
#endif /* _SYS_CDEFS_H */
# 451 "/usr/include/features.h" 3
#endif /* _FEATURES_H */
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3
typedef unsigned long size_t; 
# 23 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
#ifndef _BITS_TYPES_H
#define _BITS_TYPES_H 1





typedef unsigned char __u_char; 
typedef unsigned short __u_short; 
typedef unsigned __u_int; 
typedef unsigned long __u_long; 


typedef signed char __int8_t; 
typedef unsigned char __uint8_t; 
typedef signed short __int16_t; 
typedef unsigned short __uint16_t; 
typedef signed int __int32_t; 
typedef unsigned __uint32_t; 

typedef signed long __int64_t; 
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
typedef unsigned long __u_quad_t; 
# 61
typedef long __intmax_t; 
typedef unsigned long __uintmax_t; 
# 23 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3
#ifndef _BITS_TYPESIZES_H
#define _BITS_TYPESIZES_H 1
# 95
#endif /* _BITS_TYPESIZES_H */
# 133 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned long __dev_t; 
typedef unsigned __uid_t; 
typedef unsigned __gid_t; 
typedef unsigned long __ino_t; 
typedef unsigned long __ino64_t; 
typedef unsigned __mode_t; 
typedef unsigned long __nlink_t; 
typedef long __off_t; 
typedef long __off64_t; 
typedef int __pid_t; 
typedef struct { int __val[2]; } __fsid_t; 
typedef long __clock_t; 
typedef unsigned long __rlim_t; 
typedef unsigned long __rlim64_t; 
typedef unsigned __id_t; 
typedef long __time_t; 
typedef unsigned __useconds_t; 
typedef long __suseconds_t; 

typedef int __daddr_t; 
typedef int __key_t; 


typedef int __clockid_t; 


typedef void *__timer_t; 


typedef long __blksize_t; 




typedef long __blkcnt_t; 
typedef long __blkcnt64_t; 


typedef unsigned long __fsblkcnt_t; 
typedef unsigned long __fsblkcnt64_t; 


typedef unsigned long __fsfilcnt_t; 
typedef unsigned long __fsfilcnt64_t; 


typedef long __fsword_t; 

typedef long __ssize_t; 


typedef long __syscall_slong_t; 

typedef unsigned long __syscall_ulong_t; 



typedef __off64_t __loff_t; 
typedef char *__caddr_t; 


typedef long __intptr_t; 


typedef unsigned __socklen_t; 




typedef int __sig_atomic_t; 



#endif /* _BITS_TYPES_H */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 3
#ifndef ____FILE_defined
#define ____FILE_defined 1

struct _IO_FILE; 
typedef struct _IO_FILE __FILE; 

#endif /* ____FILE_defined */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 3
#ifndef __FILE_defined
#define __FILE_defined 1

struct _IO_FILE; 


typedef struct _IO_FILE FILE; 

#endif /* __FILE_defined */
# 28 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3
#ifndef _BITS_LIBIO_H
#define _BITS_LIBIO_H 1
# 4 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3
#ifndef _BITS_G_CONFIG_H
#define _BITS_G_CONFIG_H 1
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3
#ifndef ____mbstate_t_defined
#define ____mbstate_t_defined 1
# 21
typedef 
# 14
struct { 
int __count; 

union { 
unsigned __wch; 
char __wchb[4]; 
} __value; 
} __mbstate_t; 

#endif /* ____mbstate_t_defined */
# 30 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3
typedef 
# 27
struct { 
__off_t __pos; 
__mbstate_t __state; 
} _G_fpos_t; 




typedef 
# 32
struct { 
__off64_t __pos; 
__mbstate_t __state; 
} _G_fpos64_t; 
# 63
#endif /* _BITS_G_CONFIG_H */
# 38 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
typedef __builtin_va_list __gnuc_va_list; 
#endif /* __GNUC_VA_LIST */
# 65 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3
#ifndef EOF
#define EOF (-1)
#endif /* EOF */
# 149
struct _IO_jump_t; struct _IO_FILE; 




typedef void _IO_lock_t; 
# 160
struct _IO_marker { 
struct _IO_marker *_next; 
struct _IO_FILE *_sbuf; 



int _pos; 
# 177
}; 


enum __codecvt_result { 

__codecvt_ok, 
__codecvt_partial, 
__codecvt_error, 
__codecvt_noconv
}; 
# 245
struct _IO_FILE { 
int _flags; 




char *_IO_read_ptr; 
char *_IO_read_end; 
char *_IO_read_base; 
char *_IO_write_base; 
char *_IO_write_ptr; 
char *_IO_write_end; 
char *_IO_buf_base; 
char *_IO_buf_end; 

char *_IO_save_base; 
char *_IO_backup_base; 
char *_IO_save_end; 

struct _IO_marker *_markers; 

struct _IO_FILE *_chain; 

int _fileno; 



int _flags2; 

__off_t _old_offset; 



unsigned short _cur_column; 
signed char _vtable_offset; 
char _shortbuf[1]; 



_IO_lock_t *_lock; 
# 293
__off64_t _offset; 
# 301
void *__pad1; 
void *__pad2; 
void *__pad3; 
void *__pad4; 

size_t __pad5; 
int _mode; 

char _unused2[((15) * sizeof(int) - (4) * sizeof(void *)) - sizeof(size_t)]; 

}; 


typedef struct _IO_FILE _IO_FILE; 


struct _IO_FILE_plus; 

extern struct _IO_FILE_plus _IO_2_1_stdin_; 
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
# 337
typedef __ssize_t __io_read_fn(void * __cookie, char * __buf, size_t __nbytes); 
# 345
typedef __ssize_t __io_write_fn(void * __cookie, const char * __buf, size_t __n); 
# 354
typedef int __io_seek_fn(void * __cookie, __off64_t * __pos, int __w); 


typedef int __io_close_fn(void * __cookie); 




typedef __io_read_fn cookie_read_function_t; 
typedef __io_write_fn cookie_write_function_t; 
typedef __io_seek_fn cookie_seek_function_t; 
typedef __io_close_fn cookie_close_function_t; 
# 374
typedef 
# 369
struct { 
__io_read_fn *read; 
__io_write_fn *write; 
__io_seek_fn *seek; 
__io_close_fn *close; 
} _IO_cookie_io_functions_t; 
typedef _IO_cookie_io_functions_t cookie_io_functions_t; 

struct _IO_cookie_file; 


extern void _IO_cookie_init(struct _IO_cookie_file * __cfile, int __read_write, void * __cookie, _IO_cookie_io_functions_t __fns); 
# 389
extern int __underflow(_IO_FILE *); 
extern int __uflow(_IO_FILE *); 
extern int __overflow(_IO_FILE *, int); 
# 433
extern int _IO_getc(_IO_FILE * __fp); 
extern int _IO_putc(int __c, _IO_FILE * __fp); 
extern int _IO_feof(_IO_FILE * __fp) __attribute((__nothrow__, __leaf__)); 
extern int _IO_ferror(_IO_FILE * __fp) __attribute((__nothrow__, __leaf__)); 

extern int _IO_peekc_locked(_IO_FILE * __fp); 
# 444
extern void _IO_flockfile(_IO_FILE *) __attribute((__nothrow__, __leaf__)); 
extern void _IO_funlockfile(_IO_FILE *) __attribute((__nothrow__, __leaf__)); 
extern int _IO_ftrylockfile(_IO_FILE *) __attribute((__nothrow__, __leaf__)); 





#ifndef _IO_cleanup_region_start
#define _IO_cleanup_region_start(_fct,_fp) 
#endif /* _IO_cleanup_region_start */
#ifndef _IO_cleanup_region_end
#define _IO_cleanup_region_end(_Doit) 
#endif /* _IO_cleanup_region_end */




extern int _IO_vfscanf(_IO_FILE *, const char *, __gnuc_va_list, int *); 

extern int _IO_vfprintf(_IO_FILE *, const char *, __gnuc_va_list); 

extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t); 
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t); 

extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int); 
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int); 

extern void _IO_free_backup_area(_IO_FILE *) __attribute((__nothrow__, __leaf__)); 
# 527
#endif /* _BITS_LIBIO_H */
# 45 "/usr/include/stdio.h" 3
#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED
# 46
typedef __gnuc_va_list va_list; 

#endif /* _VA_LIST_DEFINED */
# 55
#ifndef __off_t_defined
#define __off_t_defined
typedef __off_t off_t; 




#endif /* __off_t_defined */

typedef __off64_t off64_t; 





#ifndef __ssize_t_defined
#define __ssize_t_defined
# 71
typedef __ssize_t ssize_t; 

#endif /* __ssize_t_defined */




typedef _G_fpos_t fpos_t; 




typedef _G_fpos64_t fpos64_t; 
# 93
#ifndef BUFSIZ
#define BUFSIZ _IO_BUFSIZ
#endif /* BUFSIZ */
# 18 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3
#ifndef _BITS_STDIO_LIM_H
#define _BITS_STDIO_LIM_H 1
# 39
#endif /* _BITS_STDIO_LIM_H */
# 135 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stdin; 
extern struct _IO_FILE *stdout; 
extern struct _IO_FILE *stderr; 
# 144
extern int remove(const char * __filename) __attribute((__nothrow__, __leaf__)); 

extern int rename(const char * __old, const char * __new) __attribute((__nothrow__, __leaf__)); 



extern int renameat(int __oldfd, const char * __old, int __newfd, const char * __new)
 __attribute((__nothrow__, __leaf__)); 
# 159
extern FILE *tmpfile(void) __attribute((__warn_unused_result__)); 
# 169
extern FILE *tmpfile64(void) __attribute((__warn_unused_result__)); 



extern char *tmpnam(char * __s) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 




extern char *tmpnam_r(char * __s) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 190
extern char *tempnam(const char * __dir, const char * __pfx)
 __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__warn_unused_result__)); 
# 199
extern int fclose(FILE * __stream); 




extern int fflush(FILE * __stream); 
# 213
extern int fflush_unlocked(FILE * __stream); 
# 223
extern int fcloseall(void); 
# 232
extern FILE *fopen(const char * __filename, const char * __modes)
 __attribute((__warn_unused_result__)); 




extern FILE *freopen(const char * __filename, const char * __modes, FILE * __stream)

 __attribute((__warn_unused_result__)); 
# 256
extern FILE *fopen64(const char * __filename, const char * __modes)
 __attribute((__warn_unused_result__)); 
extern FILE *freopen64(const char * __filename, const char * __modes, FILE * __stream)

 __attribute((__warn_unused_result__)); 




extern FILE *fdopen(int __fd, const char * __modes) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 271
extern FILE *fopencookie(void * __magic_cookie, const char * __modes, _IO_cookie_io_functions_t __io_funcs)

 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 




extern FILE *fmemopen(void * __s, size_t __len, const char * __modes)
 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 




extern FILE *open_memstream(char ** __bufloc, size_t * __sizeloc) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 290
extern void setbuf(FILE * __stream, char * __buf) __attribute((__nothrow__, __leaf__)); 



extern int setvbuf(FILE * __stream, char * __buf, int __modes, size_t __n)
 __attribute((__nothrow__, __leaf__)); 




extern void setbuffer(FILE * __stream, char * __buf, size_t __size)
 __attribute((__nothrow__, __leaf__)); 


extern void setlinebuf(FILE * __stream) __attribute((__nothrow__, __leaf__)); 
# 312
extern __attribute((gnu_inline)) __inline__ int fprintf(FILE * __stream, const char * __format, ...); 
# 318
extern __attribute((gnu_inline)) __inline__ int printf(const char * __format, ...); 

extern __attribute((gnu_inline)) __inline__ int sprintf(char * __s, const char * __format, ...)
 __attribute((__nothrow__)); 
# 327
extern __attribute((gnu_inline)) __inline__ int vfprintf(FILE * __s, const char * __format, __gnuc_va_list __arg); 
# 333
extern __attribute((gnu_inline)) __inline__ int vprintf(const char * __format, __gnuc_va_list __arg); 

extern __attribute((gnu_inline)) __inline__ int vsprintf(char * __s, const char * __format, __gnuc_va_list __arg)
 __attribute((__nothrow__)); 



extern __attribute((gnu_inline)) __inline__ int snprintf(char * __s, size_t __maxlen, const char * __format, ...)

 __attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))); 

extern __attribute((gnu_inline)) __inline__ int vsnprintf(char * __s, size_t __maxlen, const char * __format, __gnuc_va_list __arg)

 __attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 0))); 
# 352
extern __attribute((gnu_inline)) __inline__ int vasprintf(char ** __ptr, const char * __f, __gnuc_va_list __arg)

 __attribute((__nothrow__)) __attribute((__format__(__printf__, 2, 0))) __attribute((__warn_unused_result__)); 
extern __attribute((gnu_inline)) __inline__ int __asprintf(char ** __ptr, const char * __fmt, ...)

 __attribute((__nothrow__)) __attribute((__format__(__printf__, 2, 3))) __attribute((__warn_unused_result__)); 
extern __attribute((gnu_inline)) __inline__ int asprintf(char ** __ptr, const char * __fmt, ...)

 __attribute((__nothrow__)) __attribute((__format__(__printf__, 2, 3))) __attribute((__warn_unused_result__)); 




extern __attribute((gnu_inline)) __inline__ int vdprintf(int __fd, const char * __fmt, __gnuc_va_list __arg)

 __attribute((__format__(__printf__, 2, 0))); 
extern __attribute((gnu_inline)) __inline__ int dprintf(int __fd, const char * __fmt, ...)
 __attribute((__format__(__printf__, 2, 3))); 
# 377
extern int fscanf(FILE * __stream, const char * __format, ...)
 __attribute((__warn_unused_result__)); 




extern int scanf(const char * __format, ...) __attribute((__warn_unused_result__)); 

extern int sscanf(const char * __s, const char * __format, ...)
 __attribute((__nothrow__, __leaf__)); 
# 420
extern int vfscanf(FILE * __s, const char * __format, __gnuc_va_list __arg)

 __attribute((__format__(__scanf__, 2, 0))) __attribute((__warn_unused_result__)); 
# 428
extern int vscanf(const char * __format, __gnuc_va_list __arg)
 __attribute((__format__(__scanf__, 1, 0))) __attribute((__warn_unused_result__)); 


extern int vsscanf(const char * __s, const char * __format, __gnuc_va_list __arg)

 __attribute((__nothrow__, __leaf__)) __attribute((__format__(__scanf__, 2, 0))); 
# 477
extern int fgetc(FILE * __stream); 
extern int getc(FILE * __stream); 
# 484
extern __attribute((gnu_inline)) __inline__ int getchar(void); 
# 495
extern __attribute((gnu_inline)) __inline__ int getc_unlocked(FILE * __stream); 
extern __attribute((gnu_inline)) __inline__ int getchar_unlocked(void); 
# 506
extern __attribute((gnu_inline)) __inline__ int fgetc_unlocked(FILE * __stream); 
# 517
extern int fputc(int __c, FILE * __stream); 
extern int putc(int __c, FILE * __stream); 
# 524
extern __attribute((gnu_inline)) __inline__ int putchar(int __c); 
# 537
extern __attribute((gnu_inline)) __inline__ int fputc_unlocked(int __c, FILE * __stream); 
# 545
extern __attribute((gnu_inline)) __inline__ int putc_unlocked(int __c, FILE * __stream); 
extern __attribute((gnu_inline)) __inline__ int putchar_unlocked(int __c); 
# 553
extern int getw(FILE * __stream); 


extern int putw(int __w, FILE * __stream); 
# 564
extern __attribute((gnu_inline)) __inline__ char *fgets(char * __s, int __n, FILE * __stream)
 __attribute((__warn_unused_result__)); 
# 587
extern __attribute((gnu_inline)) __inline__ char *fgets_unlocked(char * __s, int __n, FILE * __stream)
 __attribute((__warn_unused_result__)); 
# 603
extern __ssize_t __getdelim(char ** __lineptr, size_t * __n, int __delimiter, FILE * __stream)

 __attribute((__warn_unused_result__)); 
extern __ssize_t getdelim(char ** __lineptr, size_t * __n, int __delimiter, FILE * __stream)

 __attribute((__warn_unused_result__)); 
# 616
extern __attribute((gnu_inline)) __inline__ __ssize_t getline(char ** __lineptr, size_t * __n, FILE * __stream)

 __attribute((__warn_unused_result__)); 
# 626
extern int fputs(const char * __s, FILE * __stream); 
# 632
extern int puts(const char * __s); 
# 639
extern int ungetc(int __c, FILE * __stream); 
# 646
extern __attribute((gnu_inline)) __inline__ size_t fread(void * __ptr, size_t __size, size_t __n, FILE * __stream)
 __attribute((__warn_unused_result__)); 




extern size_t fwrite(const void * __ptr, size_t __size, size_t __n, FILE * __s); 
# 662
extern int fputs_unlocked(const char * __s, FILE * __stream); 
# 673
extern __attribute((gnu_inline)) __inline__ size_t fread_unlocked(void * __ptr, size_t __size, size_t __n, FILE * __stream)
 __attribute((__warn_unused_result__)); 
extern size_t fwrite_unlocked(const void * __ptr, size_t __size, size_t __n, FILE * __stream); 
# 684
extern int fseek(FILE * __stream, long __off, int __whence); 




extern long ftell(FILE * __stream) __attribute((__warn_unused_result__)); 




extern void rewind(FILE * __stream); 
# 707
extern int fseeko(FILE * __stream, __off_t __off, int __whence); 




extern __off_t ftello(FILE * __stream) __attribute((__warn_unused_result__)); 
# 731
extern int fgetpos(FILE * __stream, fpos_t * __pos); 




extern int fsetpos(FILE * __stream, const fpos_t * __pos); 
# 750
extern int fseeko64(FILE * __stream, __off64_t __off, int __whence); 
extern __off64_t ftello64(FILE * __stream) __attribute((__warn_unused_result__)); 
extern int fgetpos64(FILE * __stream, fpos64_t * __pos); 
extern int fsetpos64(FILE * __stream, const fpos64_t * __pos); 



extern void clearerr(FILE * __stream) __attribute((__nothrow__, __leaf__)); 

extern int feof(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 

extern int ferror(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 



extern void clearerr_unlocked(FILE * __stream) __attribute((__nothrow__, __leaf__)); 
extern __attribute((gnu_inline)) __inline__ int feof_unlocked(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
extern __attribute((gnu_inline)) __inline__ int ferror_unlocked(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 775
extern void perror(const char * __s); 
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern int sys_nerr; 
extern const char *const sys_errlist[]; 


extern int _sys_nerr; 
extern const char *const _sys_errlist[]; 
# 786 "/usr/include/stdio.h" 3
extern int fileno(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 




extern int fileno_unlocked(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 800
extern FILE *popen(const char * __command, const char * __modes) __attribute((__warn_unused_result__)); 
# 806
extern int pclose(FILE * __stream); 
# 812
extern char *ctermid(char * __s) __attribute((__nothrow__, __leaf__)); 
# 818
extern char *cuserid(char * __s); 




struct obstack; 


extern __attribute((gnu_inline)) __inline__ int obstack_printf(struct obstack * __obstack, const char * __format, ...)

 __attribute((__nothrow__)) __attribute((__format__(__printf__, 2, 3))); 
extern __attribute((gnu_inline)) __inline__ int obstack_vprintf(struct obstack * __obstack, const char * __format, __gnuc_va_list __args)


 __attribute((__nothrow__)) __attribute((__format__(__printf__, 2, 0))); 
# 840
extern void flockfile(FILE * __stream) __attribute((__nothrow__, __leaf__)); 



extern int ftrylockfile(FILE * __stream) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 


extern void funlockfile(FILE * __stream) __attribute((__nothrow__, __leaf__)); 
# 43 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3
__attribute((__gnu_inline__)) extern __inline__ int 
getchar(void) 
{ 
return _IO_getc(stdin); 
} 




__attribute((__gnu_inline__)) extern __inline__ int 
fgetc_unlocked(FILE *__fp) 
{ 
return __builtin_expect(__fp->_IO_read_ptr >= __fp->_IO_read_end, 0) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++))); 
} 
# 62
__attribute((__gnu_inline__)) extern __inline__ int 
getc_unlocked(FILE *__fp) 
{ 
return __builtin_expect(__fp->_IO_read_ptr >= __fp->_IO_read_end, 0) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++))); 
} 


__attribute((__gnu_inline__)) extern __inline__ int 
getchar_unlocked(void) 
{ 
return __builtin_expect(stdin->_IO_read_ptr >= stdin->_IO_read_end, 0) ? __uflow(stdin) : (*((unsigned char *)((stdin->_IO_read_ptr)++))); 
} 




__attribute((__gnu_inline__)) extern __inline__ int 
putchar(int __c) 
{ 
return _IO_putc(__c, stdout); 
} 




__attribute((__gnu_inline__)) extern __inline__ int 
fputc_unlocked(int __c, FILE *__stream) 
{ 
return __builtin_expect(__stream->_IO_write_ptr >= __stream->_IO_write_end, 0) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)(*((__stream->_IO_write_ptr)++) = __c)); 
} 
# 97
__attribute((__gnu_inline__)) extern __inline__ int 
putc_unlocked(int __c, FILE *__stream) 
{ 
return __builtin_expect(__stream->_IO_write_ptr >= __stream->_IO_write_end, 0) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)(*((__stream->_IO_write_ptr)++) = __c)); 
} 


__attribute((__gnu_inline__)) extern __inline__ int 
putchar_unlocked(int __c) 
{ 
return __builtin_expect(stdout->_IO_write_ptr >= stdout->_IO_write_end, 0) ? __overflow(stdout, (unsigned char)__c) : ((unsigned char)(*((stdout->_IO_write_ptr)++) = __c)); 
} 
# 114
__attribute((__gnu_inline__)) extern __inline__ __ssize_t 
getline(char **__lineptr, size_t *__n, FILE *__stream) 
{ 
return __getdelim(__lineptr, __n, 10, __stream); 
} 
# 124
__attribute((__gnu_inline__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) feof_unlocked(FILE *__stream) 
{ 
return ((__stream->_flags) & 0x10) != 0; 
} 


__attribute((__gnu_inline__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) ferror_unlocked(FILE *__stream) 
{ 
return ((__stream->_flags) & 0x20) != 0; 
} 
# 23 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3
extern int __sprintf_chk(char * __s, int __flag, size_t __slen, const char * __format, ...)
 __attribute((__nothrow__, __leaf__)); 
extern int __vsprintf_chk(char * __s, int __flag, size_t __slen, const char * __format, __gnuc_va_list __ap)

 __attribute((__nothrow__, __leaf__)); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) sprintf(char *__s, const char *__fmt, ...) 
{ 
return __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack()); 

} 
# 42
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) vsprintf(char *__s, const char *__fmt, __gnuc_va_list __ap) 

{ 
return __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap); 

} 



extern int __snprintf_chk(char * __s, size_t __n, int __flag, size_t __slen, const char * __format, ...)

 __attribute((__nothrow__, __leaf__)); 
extern int __vsnprintf_chk(char * __s, size_t __n, int __flag, size_t __slen, const char * __format, __gnuc_va_list __ap)

 __attribute((__nothrow__, __leaf__)); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) snprintf(char *__s, size_t __n, const char *__fmt, ...) 

{ 
return __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack()); 

} 
# 73
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) vsnprintf(char *__s, size_t __n, const char *__fmt, __gnuc_va_list __ap) 

{ 
return __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap); 

} 
# 85
extern int __fprintf_chk(FILE * __stream, int __flag, const char * __format, ...); 

extern int __printf_chk(int __flag, const char * __format, ...); 
extern int __vfprintf_chk(FILE * __stream, int __flag, const char * __format, __gnuc_va_list __ap); 

extern int __vprintf_chk(int __flag, const char * __format, __gnuc_va_list __ap); 



__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) extern __inline__ int 
fprintf(FILE *__stream, const char *__fmt, ...) 
{ 
return __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack()); 

} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) extern __inline__ int 
printf(const char *__fmt, ...) 
{ 
return __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack()); 
} 
# 113
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) extern __inline__ int 
vprintf(const char *__fmt, __gnuc_va_list __ap) 
{ 

return __vfprintf_chk(stdout, 2 - 1, __fmt, __ap); 



} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) extern __inline__ int 
vfprintf(FILE *__stream, const char *
__fmt, __gnuc_va_list __ap) 
{ 
return __vfprintf_chk(__stream, 2 - 1, __fmt, __ap); 
} 


extern int __dprintf_chk(int __fd, int __flag, const char * __fmt, ...)
 __attribute((__format__(__printf__, 3, 4))); 
extern int __vdprintf_chk(int __fd, int __flag, const char * __fmt, __gnuc_va_list __arg)

 __attribute((__format__(__printf__, 3, 0))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) extern __inline__ int 
dprintf(int __fd, const char *__fmt, ...) 
{ 
return __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack()); 

} 
# 149
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) extern __inline__ int 
vdprintf(int __fd, const char *__fmt, __gnuc_va_list __ap) 
{ 
return __vdprintf_chk(__fd, 2 - 1, __fmt, __ap); 
} 




extern int __asprintf_chk(char ** __ptr, int __flag, const char * __fmt, ...)

 __attribute((__nothrow__, __leaf__)) __attribute((__format__(__printf__, 3, 4))) __attribute((__warn_unused_result__)); 
extern int __vasprintf_chk(char ** __ptr, int __flag, const char * __fmt, __gnuc_va_list __arg)

 __attribute((__nothrow__, __leaf__)) __attribute((__format__(__printf__, 3, 0))) __attribute((__warn_unused_result__)); 
extern int __obstack_printf_chk(struct obstack * __obstack, int __flag, const char * __format, ...)


 __attribute((__nothrow__, __leaf__)) __attribute((__format__(__printf__, 3, 4))); 
extern int __obstack_vprintf_chk(struct obstack * __obstack, int __flag, const char * __format, __gnuc_va_list __args)



 __attribute((__nothrow__, __leaf__)) __attribute((__format__(__printf__, 3, 0))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) asprintf(char **__ptr, const char *__fmt, ...) 
{ 
return __asprintf_chk(__ptr, 2 - 1, __fmt, __builtin_va_arg_pack()); 

} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) __asprintf(char **__ptr, const char *__fmt, ...) 

{ 
return __asprintf_chk(__ptr, 2 - 1, __fmt, __builtin_va_arg_pack()); 

} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) obstack_printf(struct obstack *__obstack, const char *__fmt, ...) 

{ 
return __obstack_printf_chk(__obstack, 2 - 1, __fmt, __builtin_va_arg_pack()); 

} 
# 206
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) vasprintf(char **__ptr, const char *__fmt, __gnuc_va_list __ap) 

{ 
return __vasprintf_chk(__ptr, 2 - 1, __fmt, __ap); 
} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) obstack_vprintf(struct obstack *__obstack, const char *__fmt, __gnuc_va_list __ap) 

{ 
return __obstack_vprintf_chk(__obstack, 2 - 1, __fmt, __ap); 

} 
# 240
extern char *__fgets_chk(char * __s, size_t __size, int __n, FILE * __stream)
 __attribute((__warn_unused_result__)); 
extern char *__fgets_alias(char * __s, int __n, FILE * __stream) __asm__("fgets")

 __attribute((__warn_unused_result__)); 
extern char *__fgets_chk_warn(char * __s, size_t __size, int __n, FILE * __stream) __asm__("__fgets_chk")


 __attribute((__warn_unused_result__)) __attribute((__warning__("fgets called with bigger size than length of destination buffer"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) __attribute((__warn_unused_result__)) extern __inline__ char *
fgets(char *__s, int __n, FILE *__stream) 
{ { 
if (__builtin_object_size(__s, 2 > 1) != (size_t)(-1)) 
{ { 
if ((!0) || (__n <= 0)) { 
return __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }  } { 

if ((size_t)__n > __builtin_object_size(__s, 2 > 1)) { 
return __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }  } 
}  } 
return __fgets_alias(__s, __n, __stream); 
} 

extern size_t __fread_chk(void * __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE * __stream)

 __attribute((__warn_unused_result__)); 
extern size_t __fread_alias(void * __ptr, size_t __size, size_t __n, FILE * __stream) __asm__("fread")


 __attribute((__warn_unused_result__)); 
extern size_t __fread_chk_warn(void * __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE * __stream) __asm__("__fread_chk")




 __attribute((__warn_unused_result__)) __attribute((__warning__("fread called with bigger size * nmemb than length of destination buffer"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) __attribute((__warn_unused_result__)) extern __inline__ size_t 
fread(void *__ptr, size_t __size, size_t __n, FILE *
__stream) 
{ { 
if (__builtin_object_size(__ptr, 0) != (size_t)(-1)) 
{ { 
if (((!0) || (!0)) || ((__size | __n) >= ((size_t)1) << (((8) * sizeof(size_t)) / (2)))) { 


return __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }  } { 

if (__size * __n > __builtin_object_size(__ptr, 0)) { 
return __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }  } 
}  } 
return __fread_alias(__ptr, __size, __n, __stream); 
} 


extern char *__fgets_unlocked_chk(char * __s, size_t __size, int __n, FILE * __stream)
 __attribute((__warn_unused_result__)); 
extern char *__fgets_unlocked_alias(char * __s, int __n, FILE * __stream) __asm__("fgets_unlocked")

 __attribute((__warn_unused_result__)); 
extern char *__fgets_unlocked_chk_warn(char * __s, size_t __size, int __n, FILE * __stream) __asm__("__fgets_unlocked_chk")


 __attribute((__warn_unused_result__)) __attribute((__warning__("fgets_unlocked called with bigger size than length of destination buffer"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) __attribute((__warn_unused_result__)) extern __inline__ char *
fgets_unlocked(char *__s, int __n, FILE *__stream) 
{ { 
if (__builtin_object_size(__s, 2 > 1) != (size_t)(-1)) 
{ { 
if ((!0) || (__n <= 0)) { 
return __fgets_unlocked_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }  } { 

if ((size_t)__n > __builtin_object_size(__s, 2 > 1)) { 
return __fgets_unlocked_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }  } 
}  } 
return __fgets_unlocked_alias(__s, __n, __stream); 
} 




extern size_t __fread_unlocked_chk(void * __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE * __stream)

 __attribute((__warn_unused_result__)); 
extern size_t __fread_unlocked_alias(void * __ptr, size_t __size, size_t __n, FILE * __stream) __asm__("fread_unlocked")


 __attribute((__warn_unused_result__)); 
extern size_t __fread_unlocked_chk_warn(void * __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE * __stream) __asm__("__fread_unlocked_chk")




 __attribute((__warn_unused_result__)) __attribute((__warning__("fread_unlocked called with bigger size * nmemb than length of destination buffer"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) __attribute((__warn_unused_result__)) extern __inline__ size_t 
fread_unlocked(void *__ptr, size_t __size, size_t __n, FILE *
__stream) 
{ { 
if (__builtin_object_size(__ptr, 0) != (size_t)(-1)) 
{ { 
if (((!0) || (!0)) || ((__size | __n) >= ((size_t)1) << (((8) * sizeof(size_t)) / (2)))) { 


return __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }  } { 


if (__size * __n > __builtin_object_size(__ptr, 0)) { 
return __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }  } 

}  } { 


if (((0 && 0) && ((__size | __n) < ((size_t)1) << (((8) * sizeof(size_t)) / (2)))) && (__size * __n <= (8))) 



{ 
size_t __cnt = __size * __n; 
char *__cptr = (char *)__ptr; { 
if (__cnt == (0)) { 
return 0; }  } { 

for (; __cnt > (0); --__cnt) 
{ 
int __c = __builtin_expect(__stream->_IO_read_ptr >= __stream->_IO_read_end, 0) ? __uflow(__stream) : (*((unsigned char *)((__stream->_IO_read_ptr)++))); { 
if (__c == (-1)) { 
break; }  } 
*(__cptr++) = __c; 
}  } 
return (__cptr - (char *)__ptr) / __size; 
}  } 

return __fread_unlocked_alias(__ptr, __size, __n, __stream); 
} 
# 870 "/usr/include/stdio.h" 3
#endif /* _STDIO_H */
# 41 "/usr/local/MATLAB/R2020b/extern/include/mex.h"
typedef struct impl_info_tag *MEX_impl_info; 
# 19 "/usr/local/MATLAB/R2020b/extern/include/matrix.h"
#ifndef matrix_h
#define matrix_h
# 293 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3
#ifdef _BSD_WCHAR_T_
#undef _BSD_WCHAR_T_
#endif /* _BSD_WCHAR_T_ */
# 328
typedef int wchar_t; 
# 43 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#ifndef __ENUM_IDTYPE_T
#define __ENUM_IDTYPE_T 1
# 57
typedef 
# 53
enum { 
P_ALL, 
P_PID, 
P_PGID
} idtype_t; 
#endif /* __ENUM_IDTYPE_T */
# 62 "/usr/include/stdlib.h" 3
typedef 
# 59
struct { 
int quot; 
int rem; 
} div_t; 


#ifndef __ldiv_t_defined
#define __ldiv_t_defined 1



typedef 
# 67
struct { 
long quot; 
long rem; 
} ldiv_t; 

#endif /* __ldiv_t_defined */
# 80
__extension__ typedef 
# 77
struct { 
long long quot; 
long long rem; 
} lldiv_t; 
# 97
extern size_t __ctype_get_mb_cur_max(void) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 



extern __attribute((gnu_inline)) __inline__ double atof(const char * __nptr)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 

extern __attribute((gnu_inline)) __inline__ int atoi(const char * __nptr)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 

extern __attribute((gnu_inline)) __inline__ long atol(const char * __nptr)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 



__extension__ extern __attribute((gnu_inline)) __inline__ long long atoll(const char * __nptr)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 



extern double strtod(const char * __nptr, char ** __endptr)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 



extern float strtof(const char * __nptr, char ** __endptr)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 

extern long double strtold(const char * __nptr, char ** __endptr)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 176
extern long strtol(const char * __nptr, char ** __endptr, int __base)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 

extern unsigned long strtoul(const char * __nptr, char ** __endptr, int __base)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 




__extension__ extern long long strtoq(const char * __nptr, char ** __endptr, int __base)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


__extension__ extern unsigned long long strtouq(const char * __nptr, char ** __endptr, int __base)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 200
__extension__ extern long long strtoll(const char * __nptr, char ** __endptr, int __base)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


__extension__ extern unsigned long long strtoull(const char * __nptr, char ** __endptr, int __base)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 




extern int strfromd(char * __dest, size_t __size, const char * __format, double __f)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3))); 

extern int strfromf(char * __dest, size_t __size, const char * __format, float __f)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3))); 

extern int strfroml(char * __dest, size_t __size, const char * __format, long double __f)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3))); 
# 19 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3
#ifndef _BITS_TYPES_LOCALE_T_H
#define _BITS_TYPES_LOCALE_T_H 1
# 20 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3
#ifndef _BITS_TYPES___LOCALE_T_H
#define _BITS_TYPES___LOCALE_T_H 1
# 28
struct __locale_struct { 


struct __locale_data *__locales[13]; 


const unsigned short *__ctype_b; 
const int *__ctype_tolower; 
const int *__ctype_toupper; 


const char *__names[13]; 
}; 

typedef struct __locale_struct *__locale_t; 

#endif /* _BITS_TYPES___LOCALE_T_H */
# 24 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3
typedef __locale_t locale_t; 

#endif /* _BITS_TYPES_LOCALE_T_H */
# 274 "/usr/include/stdlib.h" 3
extern long strtol_l(const char * __nptr, char ** __endptr, int __base, locale_t __loc)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 4))); 

extern unsigned long strtoul_l(const char * __nptr, char ** __endptr, int __base, locale_t __loc)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 4))); 


__extension__ extern long long strtoll_l(const char * __nptr, char ** __endptr, int __base, locale_t __loc)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 4))); 


__extension__ extern unsigned long long strtoull_l(const char * __nptr, char ** __endptr, int __base, locale_t __loc)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 4))); 

extern double strtod_l(const char * __nptr, char ** __endptr, locale_t __loc)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 3))); 

extern float strtof_l(const char * __nptr, char ** __endptr, locale_t __loc)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 3))); 

extern long double strtold_l(const char * __nptr, char ** __endptr, locale_t __loc)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 3))); 
# 360
__attribute((__gnu_inline__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) atoi(const char *__nptr) 
{ 
return (int)strtol(__nptr, 0, 10); 
} 
__attribute((__gnu_inline__)) 
__attribute((__nothrow__)) extern __inline__ long __attribute((__leaf__)) atol(const char *__nptr) 
{ 
return strtol(__nptr, 0, 10); 
} 



__extension__ 
# 372
__attribute((__gnu_inline__)) 
__attribute((__nothrow__)) extern __inline__ long long __attribute((__leaf__)) atoll(const char *__nptr) 
{ 
return strtoll(__nptr, 0, 10); 
} 
# 385
extern char *l64a(long __n) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 


extern long a64l(const char * __s)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 22 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
#ifndef _SYS_TYPES_H
#define _SYS_TYPES_H 1
# 32
#ifndef __u_char_defined
#define __u_char_defined
# 33
typedef __u_char u_char; 
typedef __u_short u_short; 
typedef __u_int u_int; 
typedef __u_long u_long; 
typedef __quad_t quad_t; 
typedef __u_quad_t u_quad_t; 
typedef __fsid_t fsid_t; 

#endif /* __u_char_defined */


typedef __loff_t loff_t; 

#ifndef __ino_t_defined
#define __ino_t_defined
typedef __ino_t ino_t; 




#endif /* __ino_t_defined */

typedef __ino64_t ino64_t; 



#ifndef __dev_t_defined
#define __dev_t_defined
# 60
typedef __dev_t dev_t; 

#endif /* __dev_t_defined */

#ifndef __gid_t_defined
#define __gid_t_defined
# 65
typedef __gid_t gid_t; 

#endif /* __gid_t_defined */

#ifndef __mode_t_defined
#define __mode_t_defined
# 70
typedef __mode_t mode_t; 

#endif /* __mode_t_defined */

#ifndef __nlink_t_defined
#define __nlink_t_defined
# 75
typedef __nlink_t nlink_t; 

#endif /* __nlink_t_defined */

#ifndef __uid_t_defined
#define __uid_t_defined
# 80
typedef __uid_t uid_t; 

#endif /* __uid_t_defined */
# 97
#ifndef __pid_t_defined
#define __pid_t_defined
# 98
typedef __pid_t pid_t; 

#endif /* __pid_t_defined */



typedef __id_t id_t; 
# 114
#ifndef __daddr_t_defined
#define __daddr_t_defined
# 115
typedef __daddr_t daddr_t; 
typedef __caddr_t caddr_t; 

#endif /* __daddr_t_defined */



typedef __key_t key_t; 
# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 3
#ifndef __clock_t_defined
#define __clock_t_defined 1




typedef __clock_t clock_t; 

#endif /* __clock_t_defined */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 3
#ifndef __clockid_t_defined
#define __clockid_t_defined 1




typedef __clockid_t clockid_t; 

#endif /* __clockid_t_defined */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3
#ifndef __time_t_defined
#define __time_t_defined 1




typedef __time_t time_t; 

#endif /* __time_t_defined */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 3
#ifndef __timer_t_defined
#define __timer_t_defined 1




typedef __timer_t timer_t; 

#endif /* __timer_t_defined */
# 134 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
#ifndef __useconds_t_defined
#define __useconds_t_defined
# 135
typedef __useconds_t useconds_t; 

#endif /* __useconds_t_defined */
#ifndef __suseconds_t_defined
#define __suseconds_t_defined
# 139
typedef __suseconds_t suseconds_t; 

#endif /* __suseconds_t_defined */
# 149
typedef unsigned long ulong; 
typedef unsigned short ushort; 
typedef unsigned uint; 
# 19 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3
#ifndef _BITS_STDINT_INTN_H
#define _BITS_STDINT_INTN_H 1



typedef __int8_t int8_t; 
typedef __int16_t int16_t; 
typedef __int32_t int32_t; 
typedef __int64_t int64_t; 

#endif /* _BITS_STDINT_INTN_H */
# 178 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 

typedef int register_t __attribute((__mode__(__word__))); 
# 18 "/usr/include/endian.h" 3
#ifndef _ENDIAN_H
#define _ENDIAN_H 1
# 40
#ifndef __FLOAT_WORD_ORDER
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#endif /* __FLOAT_WORD_ORDER */
# 23 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
#ifndef _BITS_BYTESWAP_H
#define _BITS_BYTESWAP_H 1
# 45
static __inline__ unsigned __bswap_32(unsigned __bsx) 
{ 
return __builtin_bswap32(__bsx); 
} 
# 109
static __inline__ __uint64_t __bswap_64(__uint64_t __bsx) 
{ 
return __builtin_bswap64(__bsx); 
} 
# 155
#endif /* _BITS_BYTESWAP_H */
# 23 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3
#ifndef _BITS_UINTN_IDENTITY_H
#define _BITS_UINTN_IDENTITY_H 1
# 33
static __inline__ __uint16_t __uint16_identity(__uint16_t __x) 
{ 
return __x; 
} 


static __inline__ __uint32_t __uint32_identity(__uint32_t __x) 
{ 
return __x; 
} 


static __inline__ __uint64_t __uint64_identity(__uint64_t __x) 
{ 
return __x; 
} 

#endif /* _BITS_UINTN_IDENTITY_H */
# 97 "/usr/include/endian.h" 3
#endif /* _ENDIAN_H */
# 21 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H 1
# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 3
#ifndef __sigset_t_defined
#define __sigset_t_defined 1
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 3
#ifndef ____sigset_t_defined
#define ____sigset_t_defined





typedef 
# 6
struct { 
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
} __sigset_t; 

#endif /* ____sigset_t_defined */
# 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 3
typedef __sigset_t sigset_t; 

#endif /* __sigset_t_defined */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 3
#ifndef __timeval_defined
#define __timeval_defined 1





struct timeval { 

__time_t tv_sec; 
__suseconds_t tv_usec; 
}; 
#endif /* __timeval_defined */
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3
#ifndef __timespec_defined
#define __timespec_defined 1





struct timespec { 

__time_t tv_sec; 
__syscall_slong_t tv_nsec; 
}; 

#endif /* __timespec_defined */
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef long __fd_mask; 
# 70
typedef 
# 60
struct { 



__fd_mask fds_bits[1024 / (8 * (int)sizeof(__fd_mask))]; 
# 70
} fd_set; 
# 77
typedef __fd_mask fd_mask; 
# 101
extern int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, struct timeval * __timeout); 
# 113
extern int pselect(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, const struct timespec * __timeout, const __sigset_t * __sigmask); 
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3
extern long __fdelt_chk(long __d); 
extern long __fdelt_warn(long __d)
 __attribute((__warning__("bit outside of fd_set selected"))); 
# 128 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
#endif /* _SYS_SELECT_H */
# 36 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
#ifndef _SYS_SYSMACROS_H
#define _SYS_SYSMACROS_H 1
# 19 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 3
#ifndef _BITS_SYSMACROS_H
#define _BITS_SYSMACROS_H 1
# 74
#endif /* _BITS_SYSMACROS_H */
# 73 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern __attribute((gnu_inline)) __inline__ unsigned gnu_dev_major(__dev_t __dev) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
extern __attribute((gnu_inline)) __inline__ unsigned gnu_dev_minor(__dev_t __dev) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
extern __attribute((gnu_inline)) __inline__ __dev_t gnu_dev_makedev(unsigned __major, unsigned __minor) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



__extension__ __attribute((__gnu_inline__)) __attribute((const)) __attribute((__nothrow__)) extern __inline__ unsigned __attribute((__leaf__)) gnu_dev_major(__dev_t __dev) { unsigned __major; __major = (__dev & ((__dev_t)0xfff00U)) >> 8; __major |= (__dev & ((__dev_t)0xfffff00000000000UL)) >> 32; return __major; } 
__extension__ __attribute((__gnu_inline__)) __attribute((const)) __attribute((__nothrow__)) extern __inline__ unsigned __attribute((__leaf__)) gnu_dev_minor(__dev_t __dev) { unsigned __minor; __minor = (__dev & ((__dev_t)0xffU)) >> 0; __minor |= (__dev & ((__dev_t)0xffffff00000UL)) >> 12; return __minor; } 
__extension__ __attribute((__gnu_inline__)) __attribute((const)) __attribute((__nothrow__)) extern __inline__ __dev_t __attribute((__leaf__)) gnu_dev_makedev(unsigned __major, unsigned __minor) { __dev_t __dev; __dev = ((__dev_t)(__major & 0xfffU)) << 8; __dev |= ((__dev_t)(__major & 0xfffff000U)) << 32; __dev |= ((__dev_t)(__minor & 0xffU)) << 0; __dev |= ((__dev_t)(__minor & 0xffffff00U)) << 12; return __dev; } 





#endif /* _SYS_SYSMACROS_H */
# 212 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t; 





#ifndef __blkcnt_t_defined
#define __blkcnt_t_defined
# 219
typedef __blkcnt_t blkcnt_t; 

#endif /* __blkcnt_t_defined */
#ifndef __fsblkcnt_t_defined
#define __fsblkcnt_t_defined
# 223
typedef __fsblkcnt_t fsblkcnt_t; 

#endif /* __fsblkcnt_t_defined */
#ifndef __fsfilcnt_t_defined
#define __fsfilcnt_t_defined
# 227
typedef __fsfilcnt_t fsfilcnt_t; 

#endif /* __fsfilcnt_t_defined */
# 246
typedef __blkcnt64_t blkcnt64_t; 
typedef __fsblkcnt64_t fsblkcnt64_t; 
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 19 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
#ifndef _BITS_PTHREADTYPES_COMMON_H
#define _BITS_PTHREADTYPES_COMMON_H 1
# 19 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3
#ifndef _THREAD_SHARED_TYPES_H
#define _THREAD_SHARED_TYPES_H 1
# 18 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3
#ifndef _BITS_PTHREADTYPES_ARCH_H
#define _BITS_PTHREADTYPES_ARCH_H 1
# 65
struct __pthread_rwlock_arch_t { 

unsigned __readers; 
unsigned __writers; 
unsigned __wrphase_futex; 
unsigned __writers_futex; 
unsigned __pad3; 
unsigned __pad4; 

int __cur_writer; 
int __shared; 
signed char __rwelision; 




unsigned char __pad1[7]; 


unsigned long __pad2; 


unsigned __flags; 
# 99
}; 
# 106
#endif /* _BITS_PTHREADTYPES_ARCH_H */
# 86 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3
typedef 
# 82
struct __pthread_internal_list { 

struct __pthread_internal_list *__prev; 
struct __pthread_internal_list *__next; 
} __pthread_list_t; 
# 118
struct __pthread_mutex_s { 

int __lock; 
unsigned __count; 
int __owner; 

unsigned __nusers; 



int __kind; 
# 134
short __spins; short __elision; 
__pthread_list_t __list; 
# 146
}; 




struct __pthread_cond_s { 


__extension__ union { 
__extension__ unsigned long long __wseq; 

struct { 
unsigned __low; 
unsigned __high; 
} __wseq32; 
}; 

__extension__ union { 
__extension__ unsigned long long __g1_start; 

struct { 
unsigned __low; 
unsigned __high; 
} __g1_start32; 
}; 
unsigned __g_refs[2]; 
unsigned __g_size[2]; 
unsigned __g1_orig_size; 
unsigned __wrefs; 
unsigned __g_signals[2]; 
}; 

#endif /* _THREAD_SHARED_TYPES_H */
# 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 36
typedef 
# 33
union { 
char __size[4]; 
int __align; 
} pthread_mutexattr_t; 
# 45
typedef 
# 42
union { 
char __size[4]; 
int __align; 
} pthread_condattr_t; 



typedef unsigned pthread_key_t; 



typedef int pthread_once_t; 


union pthread_attr_t { 

char __size[56]; 
long __align; 
}; 
#ifndef __have_pthread_attr_t
#define __have_pthread_attr_t 1
# 62
typedef union pthread_attr_t pthread_attr_t; 

#endif /* __have_pthread_attr_t */
# 72
typedef 
# 68
union { 
struct __pthread_mutex_s __data; 
char __size[40]; 
long __align; 
} pthread_mutex_t; 
# 80
typedef 
# 76
union { 
struct __pthread_cond_s __data; 
char __size[48]; 
__extension__ long long __align; 
} pthread_cond_t; 
# 91
typedef 
# 87
union { 
struct __pthread_rwlock_arch_t __data; 
char __size[56]; 
long __align; 
} pthread_rwlock_t; 
# 97
typedef 
# 94
union { 
char __size[8]; 
long __align; 
} pthread_rwlockattr_t; 
# 103
typedef volatile int pthread_spinlock_t; 
# 112
typedef 
# 109
union { 
char __size[32]; 
long __align; 
} pthread_barrier_t; 
# 118
typedef 
# 115
union { 
char __size[4]; 
int __align; 
} pthread_barrierattr_t; 


#endif /* _BITS_PTHREADTYPES_COMMON_H */
# 259 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
#endif /* _SYS_TYPES_H */
# 401 "/usr/include/stdlib.h" 3
extern long random(void) __attribute((__nothrow__, __leaf__)); 


extern void srandom(unsigned __seed) __attribute((__nothrow__, __leaf__)); 
# 410
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 



extern char *setstate(char * __statebuf) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 423
struct random_data { 

int32_t *fptr; 
int32_t *rptr; 
int32_t *state; 
int rand_type; 
int rand_deg; 
int rand_sep; 
int32_t *end_ptr; 
}; 

extern int random_r(struct random_data * __buf, int32_t * __result)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 

extern int srandom_r(unsigned __seed, struct random_data * __buf)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 

extern int initstate_r(unsigned __seed, char * __statebuf, size_t __statelen, struct random_data * __buf)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2, 4))); 

extern int setstate_r(char * __statebuf, struct random_data * __buf)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
# 453
extern int rand(void) __attribute((__nothrow__, __leaf__)); 

extern void srand(unsigned __seed) __attribute((__nothrow__, __leaf__)); 



extern int rand_r(unsigned * __seed) __attribute((__nothrow__, __leaf__)); 
# 467
extern double drand48(void) __attribute((__nothrow__, __leaf__)); 
extern double erand48(unsigned short  __xsubi[3]) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


extern long lrand48(void) __attribute((__nothrow__, __leaf__)); 
extern long nrand48(unsigned short  __xsubi[3])
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


extern long mrand48(void) __attribute((__nothrow__, __leaf__)); 
extern long jrand48(unsigned short  __xsubi[3])
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


extern void srand48(long __seedval) __attribute((__nothrow__, __leaf__)); 
extern unsigned short *seed48(unsigned short  __seed16v[3])
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
extern void lcong48(unsigned short  __param[7]) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 490
struct drand48_data { 

unsigned short __x[3]; 
unsigned short __old_x[3]; 
unsigned short __c; 
unsigned short __init; 
__extension__ unsigned long long __a; 

}; 


extern int drand48_r(struct drand48_data * __buffer, double * __result)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
extern int erand48_r(unsigned short  __xsubi[3], struct drand48_data * __buffer, double * __result)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern int lrand48_r(struct drand48_data * __buffer, long * __result)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
extern int nrand48_r(unsigned short  __xsubi[3], struct drand48_data * __buffer, long * __result)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern int mrand48_r(struct drand48_data * __buffer, long * __result)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
extern int jrand48_r(unsigned short  __xsubi[3], struct drand48_data * __buffer, long * __result)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern int srand48_r(long __seedval, struct drand48_data * __buffer)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 

extern int seed48_r(unsigned short  __seed16v[3], struct drand48_data * __buffer)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 

extern int lcong48_r(unsigned short  __param[7], struct drand48_data * __buffer)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 




extern void *malloc(size_t __size) __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__warn_unused_result__)); 

extern void *calloc(size_t __nmemb, size_t __size)
 __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__warn_unused_result__)); 
# 549
extern void *realloc(void * __ptr, size_t __size)
 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 558
extern void *reallocarray(void * __ptr, size_t __nmemb, size_t __size)
 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 



extern void free(void * __ptr) __attribute((__nothrow__, __leaf__)); 
# 18 "/usr/include/alloca.h" 3
#ifndef _ALLOCA_H
#define _ALLOCA_H 1
# 32
extern void *alloca(size_t __size) __attribute((__nothrow__, __leaf__)); 
# 40
#endif /* _ALLOCA_H */
# 572 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__warn_unused_result__)); 




extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 




extern void *aligned_alloc(size_t __alignment, size_t __size)
 __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__alloc_size__(2))) __attribute((__warn_unused_result__)); 



extern void abort(void) __attribute((__nothrow__, __leaf__)) __attribute((__noreturn__)); 



extern int atexit(void (* __func)(void)) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 600
extern int at_quick_exit(void (* __func)(void)) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 607
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 614
extern void exit(int __status) __attribute((__nothrow__, __leaf__)) __attribute((__noreturn__)); 
# 620
extern void quick_exit(int __status) __attribute((__nothrow__, __leaf__)) __attribute((__noreturn__)); 
# 626
extern void _Exit(int __status) __attribute((__nothrow__, __leaf__)) __attribute((__noreturn__)); 




extern char *getenv(const char * __name) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 




extern char *secure_getenv(const char * __name)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 644
extern int putenv(char * __string) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 650
extern int setenv(const char * __name, const char * __value, int __replace)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 


extern int unsetenv(const char * __name) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 661
extern int clearenv(void) __attribute((__nothrow__, __leaf__)); 
# 672
extern char *mktemp(char * __template) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 685
extern int mkstemp(char * __template) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 695
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 707
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 717
extern int mkstemps64(char * __template, int __suffixlen)
 __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 728
extern char *mkdtemp(char * __template) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 739
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 749
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 759
extern int mkostemps(char * __template, int __suffixlen, int __flags)
 __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 771
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
 __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 781
extern int system(const char * __command) __attribute((__warn_unused_result__)); 
# 787
extern char *canonicalize_file_name(const char * __name)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 797
extern __attribute((gnu_inline)) __inline__ char *realpath(const char * __name, char * __resolved)
 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 




#ifndef __COMPAR_FN_T
#define __COMPAR_FN_T
typedef int (*__compar_fn_t)(const void *, const void *); 


typedef __compar_fn_t comparison_fn_t; 

#endif /* __COMPAR_FN_T */

typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 




extern __attribute((gnu_inline)) __inline__ void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)

 __attribute((__nonnull__(1, 2, 5))) __attribute((__warn_unused_result__)); 
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__attribute((__gnu_inline__)) extern __inline__ void *
bsearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compar_fn_t 
__compar) 
{ 
size_t __l, __u, __idx; 
const void *__p; 
int __comparison; 

__l = (0); 
__u = __nmemb; { 
while (__l < __u) 
{ 
__idx = (__l + __u) / (2); 
__p = (void *)((const char *)__base + __idx * __size); 
__comparison = (*__compar)(__key, __p); { 
if (__comparison < 0) { 
__u = __idx; } else { { 
if (__comparison > 0) { 
__l = __idx + (1); } else { 

return (void *)__p; }  } }  } 
}  } 

return 0; 
} 
# 827 "/usr/include/stdlib.h" 3
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
 __attribute((__nonnull__(1, 4))); 

extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)

 __attribute((__nonnull__(1, 4))); 




extern int abs(int __x) __attribute((__nothrow__, __leaf__)) __attribute((const)) __attribute((__warn_unused_result__)); 
extern long labs(long __x) __attribute((__nothrow__, __leaf__)) __attribute((const)) __attribute((__warn_unused_result__)); 


__extension__ extern long long llabs(long long __x)
 __attribute((__nothrow__, __leaf__)) __attribute((const)) __attribute((__warn_unused_result__)); 
# 849
extern div_t div(int __numer, int __denom)
 __attribute((__nothrow__, __leaf__)) __attribute((const)) __attribute((__warn_unused_result__)); 
extern ldiv_t ldiv(long __numer, long __denom)
 __attribute((__nothrow__, __leaf__)) __attribute((const)) __attribute((__warn_unused_result__)); 


__extension__ extern lldiv_t lldiv(long long __numer, long long __denom)

 __attribute((__nothrow__, __leaf__)) __attribute((const)) __attribute((__warn_unused_result__)); 
# 869
extern char *ecvt(double __value, int __ndigit, int * __decpt, int * __sign)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4))) __attribute((__warn_unused_result__)); 




extern char *fcvt(double __value, int __ndigit, int * __decpt, int * __sign)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4))) __attribute((__warn_unused_result__)); 




extern char *gcvt(double __value, int __ndigit, char * __buf)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3))) __attribute((__warn_unused_result__)); 




extern char *qecvt(long double __value, int __ndigit, int * __decpt, int * __sign)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4))) __attribute((__warn_unused_result__)); 
extern char *qfcvt(long double __value, int __ndigit, int * __decpt, int * __sign)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4))) __attribute((__warn_unused_result__)); 
extern char *qgcvt(long double __value, int __ndigit, char * __buf)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3))) __attribute((__warn_unused_result__)); 




extern int ecvt_r(double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4, 5))); 
extern int fcvt_r(double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4, 5))); 

extern int qecvt_r(long double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4, 5))); 
extern int qfcvt_r(long double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, size_t __len)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(3, 4, 5))); 
# 919
extern int mblen(const char * __s, size_t __n) __attribute((__nothrow__, __leaf__)); 


extern int mbtowc(wchar_t * __pwc, const char * __s, size_t __n)
 __attribute((__nothrow__, __leaf__)); 


extern __attribute((gnu_inline)) __inline__ int wctomb(char * __s, wchar_t __wchar) __attribute((__nothrow__, __leaf__)); 



extern __attribute((gnu_inline)) __inline__ size_t mbstowcs(wchar_t * __pwcs, const char * __s, size_t __n)
 __attribute((__nothrow__, __leaf__)); 

extern __attribute((gnu_inline)) __inline__ size_t wcstombs(char * __s, const wchar_t * __pwcs, size_t __n)

 __attribute((__nothrow__, __leaf__)); 
# 943
extern int rpmatch(const char * __response) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))) __attribute((__warn_unused_result__)); 
# 954
extern int getsubopt(char ** __optionp, char *const * __tokens, char ** __valuep)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2, 3))) __attribute((__warn_unused_result__)); 
# 963
extern void setkey(const char * __key) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 971
extern int posix_openpt(int __oflag) __attribute((__warn_unused_result__)); 
# 979
extern int grantpt(int __fd) __attribute((__nothrow__, __leaf__)); 



extern int unlockpt(int __fd) __attribute((__nothrow__, __leaf__)); 




extern char *ptsname(int __fd) __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
# 995
extern __attribute((gnu_inline)) __inline__ int ptsname_r(int __fd, char * __buf, size_t __buflen)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 


extern int getpt(void); 
# 1006
extern int getloadavg(double  __loadavg[], int __nelem)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3
__attribute((__gnu_inline__)) 
__attribute((__nothrow__)) extern __inline__ double __attribute((__leaf__)) atof(const char *__nptr) 
{ 
return strtod(__nptr, 0); 
} 
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern char *__realpath_chk(const char * __name, char * __resolved, size_t __resolvedlen)

 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
extern char *__realpath_alias(const char * __name, char * __resolved) __asm__("realpath") __attribute((__nothrow__, __leaf__))

 __attribute((__warn_unused_result__)); 
extern char *__realpath_chk_warn(const char * __name, char * __resolved, size_t __resolvedlen) __asm__("__realpath_chk") __attribute((__nothrow__, __leaf__))


 __attribute((__warn_unused_result__))
 __attribute((__warning__("second argument of realpath must be either NULL or at least PATH_MAX bytes long buffer"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) __attribute((__warn_unused_result__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *realpath(const char *__name, char *__resolved) 
{ { 
if (__builtin_object_size(__resolved, 2 > 1) != (size_t)(-1)) 
{ 




return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1)); 
}  } 

return __realpath_alias(__name, __resolved); 
} 


extern int __ptsname_r_chk(int __fd, char * __buf, size_t __buflen, size_t __nreal)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 
extern int __ptsname_r_alias(int __fd, char * __buf, size_t __buflen) __asm__("ptsname_r") __attribute((__nothrow__, __leaf__))

 __attribute((__nonnull__(2))); 
extern int __ptsname_r_chk_warn(int __fd, char * __buf, size_t __buflen, size_t __nreal) __asm__("__ptsname_r_chk") __attribute((__nothrow__, __leaf__))


 __attribute((__nonnull__(2))) __attribute((__warning__("ptsname_r called with buflen bigger than size of buf"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) ptsname_r(int __fd, char *__buf, size_t __buflen) 
{ { 
if (__builtin_object_size(__buf, 2 > 1) != (size_t)(-1)) 
{ { 
if (!0) { 
return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }  } { 
if (__buflen > __builtin_object_size(__buf, 2 > 1)) { 
return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }  } 
}  } 
return __ptsname_r_alias(__fd, __buf, __buflen); 
} 


extern int __wctomb_chk(char * __s, wchar_t __wchar, size_t __buflen)
 __attribute((__nothrow__, __leaf__)) __attribute((__warn_unused_result__)); 
extern int __wctomb_alias(char * __s, wchar_t __wchar) __asm__("wctomb") __attribute((__nothrow__, __leaf__))
 __attribute((__warn_unused_result__)); 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) __attribute((__warn_unused_result__)) 
__attribute((__nothrow__)) extern __inline__ int __attribute((__leaf__)) wctomb(char *__s, wchar_t __wchar) 
{ { 
# 92
if ((__builtin_object_size(__s, 2 > 1) != (size_t)(-1)) && ((16) > __builtin_object_size(__s, 2 > 1))) { 
return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1)); }  } 
return __wctomb_alias(__s, __wchar); 
} 


extern size_t __mbstowcs_chk(wchar_t * __dst, const char * __src, size_t __len, size_t __dstlen)

 __attribute((__nothrow__, __leaf__)); 
extern size_t __mbstowcs_alias(wchar_t * __dst, const char * __src, size_t __len) __asm__("mbstowcs") __attribute((__nothrow__, __leaf__)); 



extern size_t __mbstowcs_chk_warn(wchar_t * __dst, const char * __src, size_t __len, size_t __dstlen) __asm__("__mbstowcs_chk") __attribute((__nothrow__, __leaf__))



 __attribute((__warning__("mbstowcs called with dst buffer smaller than len * sizeof (wchar_t)"))); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ size_t __attribute((__leaf__)) mbstowcs(wchar_t *__dst, const char *__src, size_t __len) 

{ { 
if (__builtin_object_size(__dst, 2 > 1) != (size_t)(-1)) 
{ { 
if (!0) { 
return __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }  } { 


if (__len > __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)) { 
return __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }  } 

}  } 
return __mbstowcs_alias(__dst, __src, __len); 
} 


extern size_t __wcstombs_chk(char * __dst, const wchar_t * __src, size_t __len, size_t __dstlen)

 __attribute((__nothrow__, __leaf__)); 
extern size_t __wcstombs_alias(char * __dst, const wchar_t * __src, size_t __len) __asm__("wcstombs") __attribute((__nothrow__, __leaf__)); 



extern size_t __wcstombs_chk_warn(char * __dst, const wchar_t * __src, size_t __len, size_t __dstlen) __asm__("__wcstombs_chk") __attribute((__nothrow__, __leaf__))



 __attribute((__warning__("wcstombs called with dst buffer smaller than len"))); 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ size_t __attribute((__leaf__)) wcstombs(char *__dst, const wchar_t *__src, size_t __len) 

{ { 
if (__builtin_object_size(__dst, 2 > 1) != (size_t)(-1)) 
{ { 
if (!0) { 
return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }  } { 
if (__len > __builtin_object_size(__dst, 2 > 1)) { 
return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }  } 
}  } 
return __wcstombs_alias(__dst, __src, __len); 
} 
# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3
typedef long ptrdiff_t; 
# 421
#ifndef _GCC_MAX_ALIGN_T
#define _GCC_MAX_ALIGN_T
# 437
typedef 
# 426
struct { 
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 437
} max_align_t; 
#endif /* _GCC_MAX_ALIGN_T */
# 12 "/usr/local/MATLAB/R2020b/extern/include/tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
# 22 "/usr/include/limits.h" 3
#ifndef _LIBC_LIMITS_H_
#define _LIBC_LIMITS_H_ 1
# 115
#endif /* _LIBC_LIMITS_H_ */
# 131
#ifndef LLONG_MIN
#define LLONG_MIN (-LLONG_MAX-1)
#endif /* LLONG_MIN */
#ifndef LLONG_MAX
#define LLONG_MAX __LONG_LONG_MAX__
#endif /* LLONG_MAX */
#ifndef ULLONG_MAX
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
#endif /* ULLONG_MAX */
# 146
#ifndef CHAR_WIDTH
#define CHAR_WIDTH 8
#endif /* CHAR_WIDTH */
#ifndef SCHAR_WIDTH
#define SCHAR_WIDTH 8
#endif /* SCHAR_WIDTH */
#ifndef UCHAR_WIDTH
#define UCHAR_WIDTH 8
#endif /* UCHAR_WIDTH */
#ifndef SHRT_WIDTH
#define SHRT_WIDTH 16
#endif /* SHRT_WIDTH */
#ifndef USHRT_WIDTH
#define USHRT_WIDTH 16
#endif /* USHRT_WIDTH */
#ifndef INT_WIDTH
#define INT_WIDTH 32
#endif /* INT_WIDTH */
#ifndef UINT_WIDTH
#define UINT_WIDTH 32
#endif /* UINT_WIDTH */
#ifndef LONG_WIDTH
#define LONG_WIDTH __WORDSIZE
#endif /* LONG_WIDTH */
#ifndef ULONG_WIDTH
#define ULONG_WIDTH __WORDSIZE
#endif /* ULONG_WIDTH */
#ifndef LLONG_WIDTH
#define LLONG_WIDTH 64
#endif /* LLONG_WIDTH */
#ifndef ULLONG_WIDTH
#define ULLONG_WIDTH 64
#endif /* ULLONG_WIDTH */
# 24 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3
#ifndef _BITS_POSIX1_LIM_H
#define _BITS_POSIX1_LIM_H 1
# 2 "/usr/include/linux/limits.h" 3
#ifndef _LINUX_LIMITS_H
#define _LINUX_LIMITS_H
# 21
#endif /* _LINUX_LIMITS_H */
# 51 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3
#ifdef __undef_OPEN_MAX
#undef __undef_OPEN_MAX
#endif /* __undef_OPEN_MAX */
# 163 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3
#ifndef SSIZE_MAX
#define SSIZE_MAX LONG_MAX
#endif /* SSIZE_MAX */
# 175
#endif /* _BITS_POSIX1_LIM_H */
# 22 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 3
#ifndef _BITS_POSIX2_LIM_H
#define _BITS_POSIX2_LIM_H 1
# 62
#ifndef BC_BASE_MAX
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#endif /* BC_BASE_MAX */
#ifndef BC_DIM_MAX
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#endif /* BC_DIM_MAX */
#ifndef BC_SCALE_MAX
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#endif /* BC_SCALE_MAX */
#ifndef BC_STRING_MAX
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#endif /* BC_STRING_MAX */
#ifndef COLL_WEIGHTS_MAX
#define COLL_WEIGHTS_MAX 255
#endif /* COLL_WEIGHTS_MAX */
#ifndef EXPR_NEST_MAX
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#endif /* EXPR_NEST_MAX */
#ifndef LINE_MAX
#define LINE_MAX _POSIX2_LINE_MAX
#endif /* LINE_MAX */
#ifndef CHARCLASS_NAME_MAX
#define CHARCLASS_NAME_MAX 2048
#endif /* CHARCLASS_NAME_MAX */




#endif /* _BITS_POSIX2_LIM_H */
# 29 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3
#ifndef _XOPEN_LIM_H
#define _XOPEN_LIM_H 1
# 19 "/usr/include/x86_64-linux-gnu/bits/uio_lim.h" 3
#ifndef _BITS_UIO_LIM_H
#define _BITS_UIO_LIM_H 1
# 32
#endif /* _BITS_UIO_LIM_H */
# 148 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3
#endif /* _XOPEN_LIM_H */
# 59 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3
#ifndef _LIMITS_H___
#define _LIMITS_H___
# 187
#endif /* _LIMITS_H___ */
# 28 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdbool.h" 3
#ifndef _STDBOOL_H
#define _STDBOOL_H
# 54
#endif /* _STDBOOL_H */
# 28 "/usr/lib/gcc/x86_64-linux-gnu/7/include/float.h" 3
#ifndef _FLOAT_H___
#define _FLOAT_H___
# 506
#endif /* _FLOAT_H___ */
# 89 "/usr/local/MATLAB/R2020b/extern/include/tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
# 97
typedef unsigned long long ulonglong_T; 
# 222
typedef signed char int8_T; 
# 239
typedef unsigned char uint8_T; 
# 257
typedef short int16_T; 
# 275
typedef unsigned short uint16_T; 
# 293
typedef int int32_T; 
# 311
typedef unsigned uint32_T; 
# 372
typedef float real32_T; 
# 386
typedef double real64_T; 
# 422
#ifndef INT64_T
#define INT64_T long
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned long
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "l"
#endif /* FMT64 */
#ifndef INT_TYPE_64_IS_LONG
#define INT_TYPE_64_IS_LONG
#endif /* INT_TYPE_64_IS_LONG */
# 465
__extension__ typedef long int64_T; 
# 479
__extension__ typedef unsigned long uint64_T; 
# 535
typedef real64_T real_T; 
# 544
typedef real_T time_T; 
# 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
# 592
typedef 
# 590
struct { 
real32_T re, im; 
} creal32_T; 
# 601
typedef 
# 599
struct { 
real64_T re, im; 
} creal64_T; 
# 610
typedef 
# 608
struct { 
real_T re, im; 
} creal_T; 
# 621
typedef 
# 619
struct { 
int8_T re, im; 
} cint8_T; 
# 630
typedef 
# 628
struct { 
uint8_T re, im; 
} cuint8_T; 
# 639
typedef 
# 637
struct { 
int16_T re, im; 
} cint16_T; 
# 648
typedef 
# 646
struct { 
uint16_T re, im; 
} cuint16_T; 
# 657
typedef 
# 655
struct { 
int32_T re, im; 
} cint32_T; 
# 666
typedef 
# 664
struct { 
uint32_T re, im; 
} cuint32_T; 
# 675
typedef 
# 673
struct { 
int64_T re, im; 
} cint64_T; 
# 684
typedef 
# 682
struct { 
uint64_T re, im; 
} cuint64_T; 
# 834
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 



#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
# 881
typedef unsigned short CHAR16_T; 


#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
# 157 "/usr/local/MATLAB/R2020b/extern/include/matrix.h"
typedef struct mxArray_tag mxArray; 




typedef void (*mxFunctionPtr)(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]); 
# 172
typedef _Bool mxLogical; 




typedef CHAR16_T mxChar; 
# 207
typedef 
# 182
enum { 
mxUNKNOWN_CLASS, 
mxCELL_CLASS, 
mxSTRUCT_CLASS, 
mxLOGICAL_CLASS, 
mxCHAR_CLASS, 
mxVOID_CLASS, 
mxDOUBLE_CLASS, 
mxSINGLE_CLASS, 
mxINT8_CLASS, 
mxUINT8_CLASS, 
mxINT16_CLASS, 
mxUINT16_CLASS, 
mxINT32_CLASS, 
mxUINT32_CLASS, 
mxINT64_CLASS, 
mxUINT64_CLASS, 
mxFUNCTION_CLASS, 
mxOPAQUE_CLASS, 
mxOBJECT_CLASS, 

mxINDEX_CLASS = 15



} mxClassID; 




typedef enum { mxREAL, mxCOMPLEX} mxComplexity; 




typedef double mxDouble; 
typedef float mxSingle; 
typedef int8_T mxInt8; 
typedef uint8_T mxUint8; 
typedef int16_T mxInt16; 
typedef uint16_T mxUint16; 
typedef int32_T mxInt32; 
typedef uint32_T mxUint32; 
typedef int64_T mxInt64; 
typedef uint64_T mxUint64; 
# 232
typedef struct { mxDouble real, imag; } mxComplexDouble; 
typedef struct { mxSingle real, imag; } mxComplexSingle; 
typedef struct { mxInt8 real, imag; } mxComplexInt8; 
typedef struct { mxUint8 real, imag; } mxComplexUint8; 
typedef struct { mxInt16 real, imag; } mxComplexInt16; 
typedef struct { mxUint16 real, imag; } mxComplexUint16; 
typedef struct { mxInt32 real, imag; } mxComplexInt32; 
typedef struct { mxUint32 real, imag; } mxComplexUint32; 
typedef struct { mxInt64 real, imag; } mxComplexInt64; 
typedef struct { mxUint64 real, imag; } mxComplexUint64; 
# 513
extern void *mxMalloc_800(size_t n); 
# 519
extern void *mxCalloc_800(size_t n, size_t size); 
# 526
extern void mxFree_800(void * ptr); 




extern void *mxRealloc_800(void * ptr, size_t size); 




extern mwSize mxGetNumberOfDimensions_800(const mxArray * pa); 




extern const mwSize *mxGetDimensions_800(const mxArray * pa); 




extern size_t mxGetM_800(const mxArray * pa); 




extern mwIndex *mxGetIr_800(const mxArray * pa); 




extern mwIndex *mxGetJc_800(const mxArray * pa); 




extern mwSize mxGetNzmax_800(const mxArray * pa); 




extern void mxSetNzmax_800(mxArray * pa, mwSize nzmax); 




extern const char *mxGetFieldNameByNumber_800(const mxArray * pa, int n); 
# 579
extern mxArray *mxGetFieldByNumber_800(const mxArray * pa, mwIndex i, int fieldnum); 




extern mxArray *mxGetCell_800(const mxArray * pa, mwIndex i); 




extern mxClassID mxGetClassID_800(const mxArray * pa); 




extern void *mxGetData_800(const mxArray * pa); 
# 600
extern void mxSetData_800(mxArray * pa, void * newdata); 
# 608
extern _Bool mxIsNumeric_800(const mxArray * pa); 




extern _Bool mxIsCell_800(const mxArray * pa); 




extern _Bool mxIsLogical_800(const mxArray * pa); 




extern _Bool mxIsScalar_800(const mxArray * pa); 




extern _Bool mxIsChar_800(const mxArray * pa); 




extern _Bool mxIsStruct_800(const mxArray * pa); 




extern _Bool mxIsOpaque_800(const mxArray * pa); 




extern _Bool mxIsFunctionHandle_800(const mxArray * pa); 
# 650
extern _Bool mxIsObject_800(const mxArray * pa); 
# 671
extern _Bool mxIsComplex_800(const mxArray * pa); 




extern _Bool mxIsSparse_800(const mxArray * pa); 
# 682
extern _Bool mxIsDouble_800(const mxArray * pa); 
# 688
extern _Bool mxIsSingle_800(const mxArray * pa); 
# 694
extern _Bool mxIsInt8_800(const mxArray * pa); 
# 700
extern _Bool mxIsUint8_800(const mxArray * pa); 
# 706
extern _Bool mxIsInt16_800(const mxArray * pa); 
# 712
extern _Bool mxIsUint16_800(const mxArray * pa); 
# 718
extern _Bool mxIsInt32_800(const mxArray * pa); 
# 724
extern _Bool mxIsUint32_800(const mxArray * pa); 
# 730
extern _Bool mxIsInt64_800(const mxArray * pa); 
# 736
extern _Bool mxIsUint64_800(const mxArray * pa); 




extern size_t mxGetNumberOfElements_800(const mxArray * pa); 
# 763
extern mxChar *mxGetChars_800(const mxArray * pa); 
# 771
extern int mxGetUserBits_800(const mxArray * pa); 
# 779
extern void mxSetUserBits_800(mxArray * pa, int value); 
# 785
extern double mxGetScalar_800(const mxArray * pa); 
# 798
extern _Bool mxIsFromGlobalWS_800(const mxArray * pa); 




extern void mxSetFromGlobalWS_800(mxArray * pa, _Bool global); 




extern void mxSetM_800(mxArray * pa, mwSize m); 




extern size_t mxGetN_800(const mxArray * pa); 




extern _Bool mxIsEmpty_800(const mxArray * pa); 




extern int mxGetFieldNumber_800(const mxArray * pa, const char * name); 




extern void mxSetIr_800(mxArray * pa, mwIndex * newir); 




extern void mxSetJc_800(mxArray * pa, mwIndex * newjc); 

extern double *mxGetPr_800(const mxArray * pa); 
extern void mxSetPr_800(mxArray * pa, double * newdata); 
extern size_t mxGetElementSize_800(const mxArray * pa); 
# 843
extern mwIndex mxCalcSingleSubscript_800(const mxArray * pa, mwSize nsubs, const mwIndex * subs); 
# 851
extern int mxGetNumberOfFields_800(const mxArray * pa); 
# 857
extern void mxSetCell_800(mxArray * pa, mwIndex i, mxArray * value); 
# 863
extern void mxSetFieldByNumber_800(mxArray * pa, mwIndex i, int fieldnum, mxArray * value); 
# 871
extern mxArray *mxGetField_800(const mxArray * pa, mwIndex i, const char * fieldname); 
# 878
extern void mxSetField_800(mxArray * pa, mwIndex i, const char * fieldname, mxArray * value); 
# 888
extern mxArray *mxGetProperty_800(const mxArray * pa, const mwIndex i, const char * propname); 
# 896
extern void mxSetProperty_800(mxArray * pa, mwIndex i, const char * propname, const mxArray * value); 




extern const char *mxGetClassName_800(const mxArray * pa); 




extern _Bool mxIsClass_800(const mxArray * pa, const char * name); 
# 913
extern mxArray *mxCreateNumericMatrix_800(mwSize m, mwSize n, mxClassID classid, mxComplexity flag); 
# 920
extern mxArray *mxCreateUninitNumericMatrix_800(size_t m, size_t n, mxClassID classid, mxComplexity flag); 
# 927
extern mxArray *mxCreateUninitNumericArray_800(size_t ndim, size_t * dims, mxClassID classid, mxComplexity flag); 




extern void mxSetN_800(mxArray * pa, mwSize n); 
# 939
extern int mxSetDimensions_800(mxArray * pa, const mwSize * pdims, mwSize ndims); 




extern void mxDestroyArray_800(mxArray * pa); 
# 953
extern mxArray *mxCreateNumericArray_800(mwSize ndim, const mwSize * dims, mxClassID classid, mxComplexity flag); 
# 959
extern mxArray *mxCreateCharArray_800(mwSize ndim, const mwSize * dims); 
# 966
extern mxArray *mxCreateDoubleMatrix_800(mwSize m, mwSize n, mxComplexity flag); 




extern mxLogical *mxGetLogicals_800(const mxArray * pa); 




extern mxArray *mxCreateLogicalArray_800(mwSize ndim, const mwSize * dims); 
# 982
extern mxArray *mxCreateLogicalMatrix_800(mwSize m, mwSize n); 




extern mxArray *mxCreateLogicalScalar_800(_Bool value); 




extern _Bool mxIsLogicalScalar_800(const mxArray * pa); 




extern _Bool mxIsLogicalScalarTrue_800(const mxArray * pa); 
# 1003
extern mxArray *mxCreateDoubleScalar_800(double value); 
# 1024
extern mxArray *mxCreateSparse_800(mwSize m, mwSize n, mwSize nzmax, mxComplexity flag); 
# 1030
extern mxArray *mxCreateSparseLogicalMatrix_800(mwSize m, mwSize n, mwSize nzmax); 
# 1038
extern void mxGetNChars_800(const mxArray * pa, char * buf, mwSize nChars); 
# 1049
extern int mxGetString_800(const mxArray * pa, char * buf, mwSize buflen); 
# 1056
extern char *mxArrayToString_800(const mxArray * pa); 
# 1064
extern char *mxArrayToUTF8String_800(const mxArray * pa); 
# 1071
extern mxArray *mxCreateStringFromNChars_800(const char * str, mwSize n); 
# 1078
extern mxArray *mxCreateString_800(const char * str); 




extern mxArray *mxCreateCharMatrixFromStrings_800(mwSize m, const char ** str); 
# 1089
extern mxArray *mxCreateCellMatrix_800(mwSize m, mwSize n); 
# 1095
extern mxArray *mxCreateCellArray_800(mwSize ndim, const mwSize * dims); 
# 1102
extern mxArray *mxCreateStructMatrix_800(mwSize m, mwSize n, int nfields, const char ** fieldnames); 
# 1109
extern mxArray *mxCreateStructArray_800(mwSize ndim, const mwSize * dims, int nfields, const char ** fieldnames); 




extern mxArray *mxDuplicateArray_800(const mxArray * in); 
# 1121
extern int mxSetClassName_800(mxArray * pa, const char * classname); 
# 1127
extern int mxAddField_800(mxArray * pa, const char * fieldname); 
# 1133
extern void mxRemoveField_800(mxArray * pa, int field); 




extern double mxGetEps_800(void); 




extern double mxGetInf_800(void); 




extern double mxGetNaN_800(void); 




extern _Bool mxIsFinite_800(double x); 
# 1159
extern _Bool mxIsInf_800(double x); 




extern _Bool mxIsNaN_800(double x); 
# 1191
extern mxDouble *mxGetDoubles_800(const mxArray *); extern int mxSetDoubles_800(mxArray *, mxDouble *); extern mxComplexDouble *mxGetComplexDoubles_800(const mxArray *); extern int mxSetComplexDoubles_800(mxArray *, mxComplexDouble *); 
extern mxSingle *mxGetSingles_800(const mxArray *); extern int mxSetSingles_800(mxArray *, mxSingle *); extern mxComplexSingle *mxGetComplexSingles_800(const mxArray *); extern int mxSetComplexSingles_800(mxArray *, mxComplexSingle *); 
extern mxInt8 *mxGetInt8s_800(const mxArray *); extern int mxSetInt8s_800(mxArray *, mxInt8 *); extern mxComplexInt8 *mxGetComplexInt8s_800(const mxArray *); extern int mxSetComplexInt8s_800(mxArray *, mxComplexInt8 *); 
extern mxUint8 *mxGetUint8s_800(const mxArray *); extern int mxSetUint8s_800(mxArray *, mxUint8 *); extern mxComplexUint8 *mxGetComplexUint8s_800(const mxArray *); extern int mxSetComplexUint8s_800(mxArray *, mxComplexUint8 *); 
extern mxInt16 *mxGetInt16s_800(const mxArray *); extern int mxSetInt16s_800(mxArray *, mxInt16 *); extern mxComplexInt16 *mxGetComplexInt16s_800(const mxArray *); extern int mxSetComplexInt16s_800(mxArray *, mxComplexInt16 *); 
extern mxUint16 *mxGetUint16s_800(const mxArray *); extern int mxSetUint16s_800(mxArray *, mxUint16 *); extern mxComplexUint16 *mxGetComplexUint16s_800(const mxArray *); extern int mxSetComplexUint16s_800(mxArray *, mxComplexUint16 *); 
extern mxInt32 *mxGetInt32s_800(const mxArray *); extern int mxSetInt32s_800(mxArray *, mxInt32 *); extern mxComplexInt32 *mxGetComplexInt32s_800(const mxArray *); extern int mxSetComplexInt32s_800(mxArray *, mxComplexInt32 *); 
extern mxUint32 *mxGetUint32s_800(const mxArray *); extern int mxSetUint32s_800(mxArray *, mxUint32 *); extern mxComplexUint32 *mxGetComplexUint32s_800(const mxArray *); extern int mxSetComplexUint32s_800(mxArray *, mxComplexUint32 *); 
extern mxInt64 *mxGetInt64s_800(const mxArray *); extern int mxSetInt64s_800(mxArray *, mxInt64 *); extern mxComplexInt64 *mxGetComplexInt64s_800(const mxArray *); extern int mxSetComplexInt64s_800(mxArray *, mxComplexInt64 *); 
extern mxUint64 *mxGetUint64s_800(const mxArray *); extern int mxSetUint64s_800(mxArray *, mxUint64 *); extern mxComplexUint64 *mxGetComplexUint64s_800(const mxArray *); extern int mxSetComplexUint64s_800(mxArray *, mxComplexUint64 *); 

extern int mxMakeArrayReal_800(mxArray *); 
extern int mxMakeArrayComplex_800(mxArray *); 
# 1298
#endif /* matrix_h */
# 49 "/usr/local/MATLAB/R2020b/extern/include/mex.h"
typedef void (*mex_exit_fn)(void); 
# 58
typedef 
# 54
struct mexGlobalTableEntry_Tag { 

const char *name; 
mxArray **variable; 
} mexGlobalTableEntry, *mexGlobalTable; 
# 73
typedef 
# 67
struct mexFunctionTableEntry_tag { 
const char *name; 
mxFunctionPtr f; 
int nargin; 
int nargout; 
struct _mexLocalFunctionTable *local_function_table; 
} mexFunctionTableEntry, *mexFunctionTable; 




typedef 
# 75
struct _mexLocalFunctionTable { 
size_t length; 
mexFunctionTable entries; 
} _mexLocalFunctionTable, *mexLocalFunctionTable; 




typedef 
# 80
struct { 
void (*initialize)(void); 
void (*terminate)(void); 
} _mexInitTermTableEntry, *mexInitTermTableEntry; 



typedef void (*fn_clean_up_after_error)(void); 
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr f); 

typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void); 
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable); 
# 150
extern void mexErrMsgTxt_800(const char * error_msg); 
# 159
extern void mexErrMsgIdAndTxt_800(const char * identifier, const char * err_msg, ...); 
# 170
extern void mexWarnMsgTxt_800(const char * warn_msg); 
# 181
extern void mexWarnMsgIdAndTxt_800(const char * identifier, const char * warn_msg, ...); 
# 191
extern int mexPrintf_800(const char * fmt, ...); 
# 206
extern void mexMakeArrayPersistent_800(mxArray * pa); 
# 216
extern void mexMakeMemoryPersistent_800(void * ptr); 
# 222
extern int mexCallMATLAB_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
# 234
extern mxArray *mexCallMATLABWithTrap_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
# 247
extern void mexPrintAssertion_800(const char * test, const char * fname, int linenum, const char * message); 
# 257
extern _Bool mexIsGlobal_800(const mxArray * pA); 
# 264
extern int mexPutVariable_800(const char * workspace, const char * name, const mxArray * parray); 
# 275
extern const mxArray *mexGetVariablePtr_800(const char * workspace, const char * name); 
# 285
extern mxArray *mexGetVariable_800(const char * workspace, const char * name); 
# 294
extern void mexLock_800(void); 
# 300
extern void mexUnlock_800(void); 
# 306
extern _Bool mexIsLocked_800(void); 
# 312
extern const char *mexFunctionName_800(void); 
# 319
extern int mexEvalString_800(const char * str); 
# 328
extern mxArray *mexEvalStringWithTrap_800(const char * str); 
# 336
extern int mexAtExit_800(mex_exit_fn exit_fcn); 
# 356
extern void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]); 
# 363
#endif /* mex_h */
# 22 "/usr/include/string.h" 3
#ifndef _STRING_H
#define _STRING_H 1
# 42
extern __attribute((gnu_inline)) __inline__ void *memcpy(void * __dest, const void * __src, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern __attribute((gnu_inline)) __inline__ void *memmove(void * __dest, const void * __src, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
# 53
extern void *memccpy(void * __dest, const void * __src, int __c, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 




extern __attribute((gnu_inline)) __inline__ void *memset(void * __s, int __c, size_t __n) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


extern int memcmp(const void * __s1, const void * __s2, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 90
extern void *memchr(const void * __s, int __c, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern void *rawmemchr(const void * __s, int __c)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern void *memrchr(const void * __s, int __c, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 121
extern __attribute((gnu_inline)) __inline__ char *strcpy(char * __dest, const char * __src)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 

extern __attribute((gnu_inline)) __inline__ char *strncpy(char * __dest, const char * __src, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern __attribute((gnu_inline)) __inline__ char *strcat(char * __dest, const char * __src)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 

extern __attribute((gnu_inline)) __inline__ char *strncat(char * __dest, const char * __src, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern int strcmp(const char * __s1, const char * __s2)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 

extern int strncmp(const char * __s1, const char * __s2, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 


extern int strcoll(const char * __s1, const char * __s2)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 

extern size_t strxfrm(char * __dest, const char * __src, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 
# 155
extern int strcoll_l(const char * __s1, const char * __s2, locale_t __l)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 


extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, locale_t __l)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2, 4))); 
# 166
extern char *strdup(const char * __s)
 __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 174
extern char *strndup(const char * __string, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 225
extern char *strchr(const char * __s, int __c)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 252
extern char *strrchr(const char * __s, int __c)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 265
extern char *strchrnul(const char * __s, int __c)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 272
extern size_t strcspn(const char * __s, const char * __reject)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 


extern size_t strspn(const char * __s, const char * __accept)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 302
extern char *strpbrk(const char * __s, const char * __accept)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 329
extern char *strstr(const char * __haystack, const char * __needle)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 




extern char *strtok(char * __s, const char * __delim)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 



extern char *__strtok_r(char * __s, const char * __delim, char ** __save_ptr)


 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2, 3))); 

extern char *strtok_r(char * __s, const char * __delim, char ** __save_ptr)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2, 3))); 
# 359
extern char *strcasestr(const char * __haystack, const char * __needle)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 368
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen)

 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 



extern void *__mempcpy(void * __dest, const void * __src, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
extern __attribute((gnu_inline)) __inline__ void *mempcpy(void * __dest, const void * __src, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 




extern size_t strlen(const char * __s)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 




extern size_t strnlen(const char * __string, size_t __maxlen)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 




extern char *strerror(int __errnum) __attribute((__nothrow__, __leaf__)); 
# 420
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))) __attribute((__warn_unused_result__)); 
# 427
extern char *strerror_l(int __errnum, locale_t __l) __attribute((__nothrow__, __leaf__)); 
# 18 "/usr/include/strings.h" 3
#ifndef _STRINGS_H
#define _STRINGS_H 1
# 34
extern int bcmp(const void * __s1, const void * __s2, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 


extern __attribute((gnu_inline)) __inline__ void bcopy(const void * __src, void * __dest, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 


extern __attribute((gnu_inline)) __inline__ void bzero(void * __s, size_t __n) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 68
extern char *index(const char * __s, int __c)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 96
extern char *rindex(const char * __s, int __c)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 104
extern int ffs(int __i) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 110
extern int ffsl(long __l) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
__extension__ extern int ffsll(long long __ll)
 __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern int strcasecmp(const char * __s1, const char * __s2)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 


extern int strncasecmp(const char * __s1, const char * __s2, size_t __n)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 128
extern int strcasecmp_l(const char * __s1, const char * __s2, locale_t __loc)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 



extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, locale_t __loc)

 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 19 "/usr/include/x86_64-linux-gnu/bits/strings_fortified.h" 3
#ifndef __STRINGS_FORTIFIED
#define __STRINGS_FORTIFIED 1

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ void __attribute((__leaf__)) bcopy(const void *__src, void *__dest, size_t __len) 
{ 
(void)__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ void __attribute((__leaf__)) bzero(void *__dest, size_t __len) 
{ 
(void)__builtin___memset_chk(__dest, 0, __len, __builtin_object_size(__dest, 0)); 
} 

#endif /* __STRINGS_FORTIFIED */
# 148 "/usr/include/strings.h" 3
#endif /* _STRINGS_H */
# 435 "/usr/include/string.h" 3
extern __attribute((gnu_inline)) __inline__ void explicit_bzero(void * __s, size_t __n) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 



extern char *strsep(char ** __stringp, const char * __delim)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 




extern char *strsignal(int __sig) __attribute((__nothrow__, __leaf__)); 


extern char *__stpcpy(char * __dest, const char * __src)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
extern __attribute((gnu_inline)) __inline__ char *stpcpy(char * __dest, const char * __src)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 



extern char *__stpncpy(char * __dest, const char * __src, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 
extern __attribute((gnu_inline)) __inline__ char *stpncpy(char * __dest, const char * __src, size_t __n)

 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1, 2))); 




extern int strverscmp(const char * __s1, const char * __s2)
 __attribute((__nothrow__, __leaf__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 


extern char *strfry(char * __string) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 


extern void *memfrob(void * __s, size_t __n) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 486
extern char *basename(const char * __filename) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 
# 18 "/usr/include/x86_64-linux-gnu/bits/string_fortified.h" 3
#ifndef _BITS_STRING_FORTIFIED_H
#define _BITS_STRING_FORTIFIED_H 1
# 30
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ void *memcpy(void *__dest, const void *__src, size_t __len) 

{ 
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
} 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ void *memmove(void *__dest, const void *__src, size_t __len) 
{ 
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
} 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ void *mempcpy(void *__dest, const void *__src, size_t __len) 

{ 
return __builtin___mempcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
} 
# 58
__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ void *memset(void *__dest, int __ch, size_t __len) 
{ 
# 71
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0)); 
} 




void __explicit_bzero_chk(void * __dest, size_t __len, size_t __destlen)
 __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(1))); 

__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__)) extern __inline__ void __attribute((__leaf__)) explicit_bzero(void *__dest, size_t __len) 
{ 
__explicit_bzero_chk(__dest, __len, __builtin_object_size(__dest, 0)); 
} 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *strcpy(char *__dest, const char *__src) 
{ 
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); 
} 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *stpcpy(char *__dest, const char *__src) 
{ 
return __builtin___stpcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); 
} 



__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *strncpy(char *__dest, const char *__src, size_t __len) 

{ 
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1)); 
} 


extern char *__stpncpy_chk(char * __dest, const char * __src, size_t __n, size_t __destlen)
 __attribute((__nothrow__, __leaf__)); 
extern char *__stpncpy_alias(char * __dest, const char * __src, size_t __n) __asm__("stpncpy") __attribute((__nothrow__, __leaf__)); 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *stpncpy(char *__dest, const char *__src, size_t __n) 
{ { 
if ((__builtin_object_size(__dest, 2 > 1) != (size_t)(-1)) && ((!0) || (__n > __builtin_object_size(__dest, 2 > 1)))) { 

return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1)); }  } 
return __stpncpy_alias(__dest, __src, __n); 
} 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *strcat(char *__dest, const char *__src) 
{ 
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); 
} 


__attribute((__always_inline__)) __attribute((__gnu_inline__)) __attribute((__artificial__)) 
__attribute((__nothrow__, __leaf__)) extern __inline__ char *strncat(char *__dest, const char *__src, size_t __len) 

{ 
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1)); 
} 

#endif /* _BITS_STRING_FORTIFIED_H */
# 500 "/usr/include/string.h" 3
#endif /* _STRING_H */
# 23 "/usr/include/math.h" 3
#ifndef _MATH_H
#define _MATH_H 1
# 33 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 3
#ifndef _BITS_LIBM_SIMD_DECL_STUBS_H
#define _BITS_LIBM_SIMD_DECL_STUBS_H 1
# 101
#endif /* _BITS_LIBM_SIMD_DECL_STUBS_H */
# 149 "/usr/include/math.h" 3
typedef float float_t; 
typedef double double_t; 
# 238
enum { 
FP_INT_UPWARD, 


FP_INT_DOWNWARD, 


FP_INT_TOWARDZERO, 


FP_INT_TONEARESTFROMZERO, 


FP_INT_TONEAREST


}; 
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassify(double __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int __signbit(double __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 



extern int __isinf(double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __finite(double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __isnan(double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __iseqsig(double __x, double __y) __attribute((__nothrow__, __leaf__)); 


extern int __issignaling(double __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double acos(double __x) __attribute((__nothrow__, __leaf__)); extern double __acos(double __x) __attribute((__nothrow__, __leaf__)); 

extern double asin(double __x) __attribute((__nothrow__, __leaf__)); extern double __asin(double __x) __attribute((__nothrow__, __leaf__)); 

extern double atan(double __x) __attribute((__nothrow__, __leaf__)); extern double __atan(double __x) __attribute((__nothrow__, __leaf__)); 

extern double atan2(double __y, double __x) __attribute((__nothrow__, __leaf__)); extern double __atan2(double __y, double __x) __attribute((__nothrow__, __leaf__)); 


extern double cos(double __x) __attribute((__nothrow__, __leaf__)); extern double __cos(double __x) __attribute((__nothrow__, __leaf__)); 

extern double sin(double __x) __attribute((__nothrow__, __leaf__)); extern double __sin(double __x) __attribute((__nothrow__, __leaf__)); 

extern double tan(double __x) __attribute((__nothrow__, __leaf__)); extern double __tan(double __x) __attribute((__nothrow__, __leaf__)); 




extern double cosh(double __x) __attribute((__nothrow__, __leaf__)); extern double __cosh(double __x) __attribute((__nothrow__, __leaf__)); 

extern double sinh(double __x) __attribute((__nothrow__, __leaf__)); extern double __sinh(double __x) __attribute((__nothrow__, __leaf__)); 

extern double tanh(double __x) __attribute((__nothrow__, __leaf__)); extern double __tanh(double __x) __attribute((__nothrow__, __leaf__)); 



extern void sincos(double __x, double * __sinx, double * __cosx) __attribute((__nothrow__, __leaf__)); extern void __sincos(double __x, double * __sinx, double * __cosx) __attribute((__nothrow__, __leaf__)); 
# 85
extern double acosh(double __x) __attribute((__nothrow__, __leaf__)); extern double __acosh(double __x) __attribute((__nothrow__, __leaf__)); 

extern double asinh(double __x) __attribute((__nothrow__, __leaf__)); extern double __asinh(double __x) __attribute((__nothrow__, __leaf__)); 

extern double atanh(double __x) __attribute((__nothrow__, __leaf__)); extern double __atanh(double __x) __attribute((__nothrow__, __leaf__)); 
# 95
extern double exp(double __x) __attribute((__nothrow__, __leaf__)); extern double __exp(double __x) __attribute((__nothrow__, __leaf__)); 


extern double frexp(double __x, int * __exponent) __attribute((__nothrow__, __leaf__)); extern double __frexp(double __x, int * __exponent) __attribute((__nothrow__, __leaf__)); 


extern double ldexp(double __x, int __exponent) __attribute((__nothrow__, __leaf__)); extern double __ldexp(double __x, int __exponent) __attribute((__nothrow__, __leaf__)); 


extern double log(double __x) __attribute((__nothrow__, __leaf__)); extern double __log(double __x) __attribute((__nothrow__, __leaf__)); 


extern double log10(double __x) __attribute((__nothrow__, __leaf__)); extern double __log10(double __x) __attribute((__nothrow__, __leaf__)); 


extern double modf(double __x, double * __iptr) __attribute((__nothrow__, __leaf__)); extern double __modf(double __x, double * __iptr) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 



extern double exp10(double __x) __attribute((__nothrow__, __leaf__)); extern double __exp10(double __x) __attribute((__nothrow__, __leaf__)); 




extern double expm1(double __x) __attribute((__nothrow__, __leaf__)); extern double __expm1(double __x) __attribute((__nothrow__, __leaf__)); 


extern double log1p(double __x) __attribute((__nothrow__, __leaf__)); extern double __log1p(double __x) __attribute((__nothrow__, __leaf__)); 


extern double logb(double __x) __attribute((__nothrow__, __leaf__)); extern double __logb(double __x) __attribute((__nothrow__, __leaf__)); 




extern double exp2(double __x) __attribute((__nothrow__, __leaf__)); extern double __exp2(double __x) __attribute((__nothrow__, __leaf__)); 


extern double log2(double __x) __attribute((__nothrow__, __leaf__)); extern double __log2(double __x) __attribute((__nothrow__, __leaf__)); 
# 140
extern double pow(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __pow(double __x, double __y) __attribute((__nothrow__, __leaf__)); 


extern double sqrt(double __x) __attribute((__nothrow__, __leaf__)); extern double __sqrt(double __x) __attribute((__nothrow__, __leaf__)); 



extern double hypot(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __hypot(double __x, double __y) __attribute((__nothrow__, __leaf__)); 




extern double cbrt(double __x) __attribute((__nothrow__, __leaf__)); extern double __cbrt(double __x) __attribute((__nothrow__, __leaf__)); 
# 159
extern double ceil(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __ceil(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double fabs(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __fabs(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double floor(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __floor(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double fmod(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __fmod(double __x, double __y) __attribute((__nothrow__, __leaf__)); 
# 177
extern int isinf(double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern int finite(double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double drem(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __drem(double __x, double __y) __attribute((__nothrow__, __leaf__)); 



extern double significand(double __x) __attribute((__nothrow__, __leaf__)); extern double __significand(double __x) __attribute((__nothrow__, __leaf__)); 
# 196
extern double copysign(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __copysign(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern double nan(const char * __tagb) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __nan(const char * __tagb) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 211
extern int isnan(double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 217
extern double j0(double) __attribute((__nothrow__, __leaf__)); extern double __j0(double) __attribute((__nothrow__, __leaf__)); 
extern double j1(double) __attribute((__nothrow__, __leaf__)); extern double __j1(double) __attribute((__nothrow__, __leaf__)); 
extern double jn(int, double) __attribute((__nothrow__, __leaf__)); extern double __jn(int, double) __attribute((__nothrow__, __leaf__)); 
extern double y0(double) __attribute((__nothrow__, __leaf__)); extern double __y0(double) __attribute((__nothrow__, __leaf__)); 
extern double y1(double) __attribute((__nothrow__, __leaf__)); extern double __y1(double) __attribute((__nothrow__, __leaf__)); 
extern double yn(int, double) __attribute((__nothrow__, __leaf__)); extern double __yn(int, double) __attribute((__nothrow__, __leaf__)); 
# 228
extern double erf(double) __attribute((__nothrow__, __leaf__)); extern double __erf(double) __attribute((__nothrow__, __leaf__)); 
extern double erfc(double) __attribute((__nothrow__, __leaf__)); extern double __erfc(double) __attribute((__nothrow__, __leaf__)); 
extern double lgamma(double) __attribute((__nothrow__, __leaf__)); extern double __lgamma(double) __attribute((__nothrow__, __leaf__)); 




extern double tgamma(double) __attribute((__nothrow__, __leaf__)); extern double __tgamma(double) __attribute((__nothrow__, __leaf__)); 
# 241
extern double gamma(double) __attribute((__nothrow__, __leaf__)); extern double __gamma(double) __attribute((__nothrow__, __leaf__)); 
# 249
extern double lgamma_r(double, int * __signgamp) __attribute((__nothrow__, __leaf__)); extern double __lgamma_r(double, int * __signgamp) __attribute((__nothrow__, __leaf__)); 
# 256
extern double rint(double __x) __attribute((__nothrow__, __leaf__)); extern double __rint(double __x) __attribute((__nothrow__, __leaf__)); 


extern double nextafter(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __nextafter(double __x, double __y) __attribute((__nothrow__, __leaf__)); 

extern double nexttoward(double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern double __nexttoward(double __x, long double __y) __attribute((__nothrow__, __leaf__)); 




extern double nextdown(double __x) __attribute((__nothrow__, __leaf__)); extern double __nextdown(double __x) __attribute((__nothrow__, __leaf__)); 

extern double nextup(double __x) __attribute((__nothrow__, __leaf__)); extern double __nextup(double __x) __attribute((__nothrow__, __leaf__)); 



extern double remainder(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __remainder(double __x, double __y) __attribute((__nothrow__, __leaf__)); 



extern double scalbn(double __x, int __n) __attribute((__nothrow__, __leaf__)); extern double __scalbn(double __x, int __n) __attribute((__nothrow__, __leaf__)); 



extern int ilogb(double __x) __attribute((__nothrow__, __leaf__)); extern int __ilogb(double __x) __attribute((__nothrow__, __leaf__)); 




extern long llogb(double __x) __attribute((__nothrow__, __leaf__)); extern long __llogb(double __x) __attribute((__nothrow__, __leaf__)); 




extern double scalbln(double __x, long __n) __attribute((__nothrow__, __leaf__)); extern double __scalbln(double __x, long __n) __attribute((__nothrow__, __leaf__)); 



extern double nearbyint(double __x) __attribute((__nothrow__, __leaf__)); extern double __nearbyint(double __x) __attribute((__nothrow__, __leaf__)); 



extern double round(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __round(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern double trunc(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __trunc(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern double remquo(double __x, double __y, int * __quo) __attribute((__nothrow__, __leaf__)); extern double __remquo(double __x, double __y, int * __quo) __attribute((__nothrow__, __leaf__)); 
# 314
extern long lrint(double __x) __attribute((__nothrow__, __leaf__)); extern long __lrint(double __x) __attribute((__nothrow__, __leaf__)); 

__extension__ extern long long llrint(double __x) __attribute((__nothrow__, __leaf__)); extern long long __llrint(double __x) __attribute((__nothrow__, __leaf__)); 



extern long lround(double __x) __attribute((__nothrow__, __leaf__)); extern long __lround(double __x) __attribute((__nothrow__, __leaf__)); 

__extension__ extern long long llround(double __x) __attribute((__nothrow__, __leaf__)); extern long long __llround(double __x) __attribute((__nothrow__, __leaf__)); 



extern double fdim(double __x, double __y) __attribute((__nothrow__, __leaf__)); extern double __fdim(double __x, double __y) __attribute((__nothrow__, __leaf__)); 


extern double fmax(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __fmax(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double fmin(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __fmin(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double fma(double __x, double __y, double __z) __attribute((__nothrow__, __leaf__)); extern double __fma(double __x, double __y, double __z) __attribute((__nothrow__, __leaf__)); 




extern double roundeven(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __roundeven(double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern __intmax_t fromfp(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __intmax_t __fromfp(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 




extern __uintmax_t ufromfp(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __uintmax_t __ufromfp(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 
# 355
extern __intmax_t fromfpx(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __intmax_t __fromfpx(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 
# 361
extern __uintmax_t ufromfpx(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __uintmax_t __ufromfpx(double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 



extern double fmaxmag(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __fmaxmag(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern double fminmag(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern double __fminmag(double __x, double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int totalorder(double __x, double __y) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int totalordermag(double __x, double __y) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int canonicalize(double * __cx, const double * __x) __attribute((__nothrow__, __leaf__)); 


extern double getpayload(const double * __x) __attribute((__nothrow__, __leaf__)); extern double __getpayload(const double * __x) __attribute((__nothrow__, __leaf__)); 


extern int setpayload(double * __x, double __payload) __attribute((__nothrow__, __leaf__)); 


extern int setpayloadsig(double * __x, double __payload) __attribute((__nothrow__, __leaf__)); 
# 396
extern double scalb(double __x, double __n) __attribute((__nothrow__, __leaf__)); extern double __scalb(double __x, double __n) __attribute((__nothrow__, __leaf__)); 
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyf(float __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int __signbitf(float __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 



extern int __isinff(float __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __finitef(float __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __isnanf(float __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __iseqsigf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 


extern int __issignalingf(float __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float acosf(float __x) __attribute((__nothrow__, __leaf__)); extern float __acosf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float asinf(float __x) __attribute((__nothrow__, __leaf__)); extern float __asinf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float atanf(float __x) __attribute((__nothrow__, __leaf__)); extern float __atanf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float atan2f(float __y, float __x) __attribute((__nothrow__, __leaf__)); extern float __atan2f(float __y, float __x) __attribute((__nothrow__, __leaf__)); 


extern float cosf(float __x) __attribute((__nothrow__, __leaf__)); extern float __cosf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float sinf(float __x) __attribute((__nothrow__, __leaf__)); extern float __sinf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float tanf(float __x) __attribute((__nothrow__, __leaf__)); extern float __tanf(float __x) __attribute((__nothrow__, __leaf__)); 




extern float coshf(float __x) __attribute((__nothrow__, __leaf__)); extern float __coshf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float sinhf(float __x) __attribute((__nothrow__, __leaf__)); extern float __sinhf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float tanhf(float __x) __attribute((__nothrow__, __leaf__)); extern float __tanhf(float __x) __attribute((__nothrow__, __leaf__)); 



extern void sincosf(float __x, float * __sinx, float * __cosx) __attribute((__nothrow__, __leaf__)); extern void __sincosf(float __x, float * __sinx, float * __cosx) __attribute((__nothrow__, __leaf__)); 
# 85
extern float acoshf(float __x) __attribute((__nothrow__, __leaf__)); extern float __acoshf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float asinhf(float __x) __attribute((__nothrow__, __leaf__)); extern float __asinhf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float atanhf(float __x) __attribute((__nothrow__, __leaf__)); extern float __atanhf(float __x) __attribute((__nothrow__, __leaf__)); 
# 95
extern float expf(float __x) __attribute((__nothrow__, __leaf__)); extern float __expf(float __x) __attribute((__nothrow__, __leaf__)); 


extern float frexpf(float __x, int * __exponent) __attribute((__nothrow__, __leaf__)); extern float __frexpf(float __x, int * __exponent) __attribute((__nothrow__, __leaf__)); 


extern float ldexpf(float __x, int __exponent) __attribute((__nothrow__, __leaf__)); extern float __ldexpf(float __x, int __exponent) __attribute((__nothrow__, __leaf__)); 


extern float logf(float __x) __attribute((__nothrow__, __leaf__)); extern float __logf(float __x) __attribute((__nothrow__, __leaf__)); 


extern float log10f(float __x) __attribute((__nothrow__, __leaf__)); extern float __log10f(float __x) __attribute((__nothrow__, __leaf__)); 


extern float modff(float __x, float * __iptr) __attribute((__nothrow__, __leaf__)); extern float __modff(float __x, float * __iptr) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 



extern float exp10f(float __x) __attribute((__nothrow__, __leaf__)); extern float __exp10f(float __x) __attribute((__nothrow__, __leaf__)); 




extern float expm1f(float __x) __attribute((__nothrow__, __leaf__)); extern float __expm1f(float __x) __attribute((__nothrow__, __leaf__)); 


extern float log1pf(float __x) __attribute((__nothrow__, __leaf__)); extern float __log1pf(float __x) __attribute((__nothrow__, __leaf__)); 


extern float logbf(float __x) __attribute((__nothrow__, __leaf__)); extern float __logbf(float __x) __attribute((__nothrow__, __leaf__)); 




extern float exp2f(float __x) __attribute((__nothrow__, __leaf__)); extern float __exp2f(float __x) __attribute((__nothrow__, __leaf__)); 


extern float log2f(float __x) __attribute((__nothrow__, __leaf__)); extern float __log2f(float __x) __attribute((__nothrow__, __leaf__)); 
# 140
extern float powf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __powf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 


extern float sqrtf(float __x) __attribute((__nothrow__, __leaf__)); extern float __sqrtf(float __x) __attribute((__nothrow__, __leaf__)); 



extern float hypotf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __hypotf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 




extern float cbrtf(float __x) __attribute((__nothrow__, __leaf__)); extern float __cbrtf(float __x) __attribute((__nothrow__, __leaf__)); 
# 159
extern float ceilf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __ceilf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float fabsf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __fabsf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float floorf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __floorf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float fmodf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __fmodf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 
# 177
extern int isinff(float __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern int finitef(float __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float dremf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __dremf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 



extern float significandf(float __x) __attribute((__nothrow__, __leaf__)); extern float __significandf(float __x) __attribute((__nothrow__, __leaf__)); 
# 196
extern float copysignf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __copysignf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern float nanf(const char * __tagb) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __nanf(const char * __tagb) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 211
extern int isnanf(float __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 217
extern float j0f(float) __attribute((__nothrow__, __leaf__)); extern float __j0f(float) __attribute((__nothrow__, __leaf__)); 
extern float j1f(float) __attribute((__nothrow__, __leaf__)); extern float __j1f(float) __attribute((__nothrow__, __leaf__)); 
extern float jnf(int, float) __attribute((__nothrow__, __leaf__)); extern float __jnf(int, float) __attribute((__nothrow__, __leaf__)); 
extern float y0f(float) __attribute((__nothrow__, __leaf__)); extern float __y0f(float) __attribute((__nothrow__, __leaf__)); 
extern float y1f(float) __attribute((__nothrow__, __leaf__)); extern float __y1f(float) __attribute((__nothrow__, __leaf__)); 
extern float ynf(int, float) __attribute((__nothrow__, __leaf__)); extern float __ynf(int, float) __attribute((__nothrow__, __leaf__)); 
# 228
extern float erff(float) __attribute((__nothrow__, __leaf__)); extern float __erff(float) __attribute((__nothrow__, __leaf__)); 
extern float erfcf(float) __attribute((__nothrow__, __leaf__)); extern float __erfcf(float) __attribute((__nothrow__, __leaf__)); 
extern float lgammaf(float) __attribute((__nothrow__, __leaf__)); extern float __lgammaf(float) __attribute((__nothrow__, __leaf__)); 




extern float tgammaf(float) __attribute((__nothrow__, __leaf__)); extern float __tgammaf(float) __attribute((__nothrow__, __leaf__)); 
# 241
extern float gammaf(float) __attribute((__nothrow__, __leaf__)); extern float __gammaf(float) __attribute((__nothrow__, __leaf__)); 
# 249
extern float lgammaf_r(float, int * __signgamp) __attribute((__nothrow__, __leaf__)); extern float __lgammaf_r(float, int * __signgamp) __attribute((__nothrow__, __leaf__)); 
# 256
extern float rintf(float __x) __attribute((__nothrow__, __leaf__)); extern float __rintf(float __x) __attribute((__nothrow__, __leaf__)); 


extern float nextafterf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __nextafterf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 

extern float nexttowardf(float __x, long double __y) __attribute((__nothrow__, __leaf__)); extern float __nexttowardf(float __x, long double __y) __attribute((__nothrow__, __leaf__)); 




extern float nextdownf(float __x) __attribute((__nothrow__, __leaf__)); extern float __nextdownf(float __x) __attribute((__nothrow__, __leaf__)); 

extern float nextupf(float __x) __attribute((__nothrow__, __leaf__)); extern float __nextupf(float __x) __attribute((__nothrow__, __leaf__)); 



extern float remainderf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __remainderf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 



extern float scalbnf(float __x, int __n) __attribute((__nothrow__, __leaf__)); extern float __scalbnf(float __x, int __n) __attribute((__nothrow__, __leaf__)); 



extern int ilogbf(float __x) __attribute((__nothrow__, __leaf__)); extern int __ilogbf(float __x) __attribute((__nothrow__, __leaf__)); 




extern long llogbf(float __x) __attribute((__nothrow__, __leaf__)); extern long __llogbf(float __x) __attribute((__nothrow__, __leaf__)); 




extern float scalblnf(float __x, long __n) __attribute((__nothrow__, __leaf__)); extern float __scalblnf(float __x, long __n) __attribute((__nothrow__, __leaf__)); 



extern float nearbyintf(float __x) __attribute((__nothrow__, __leaf__)); extern float __nearbyintf(float __x) __attribute((__nothrow__, __leaf__)); 



extern float roundf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __roundf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern float truncf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __truncf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern float remquof(float __x, float __y, int * __quo) __attribute((__nothrow__, __leaf__)); extern float __remquof(float __x, float __y, int * __quo) __attribute((__nothrow__, __leaf__)); 
# 314
extern long lrintf(float __x) __attribute((__nothrow__, __leaf__)); extern long __lrintf(float __x) __attribute((__nothrow__, __leaf__)); 

__extension__ extern long long llrintf(float __x) __attribute((__nothrow__, __leaf__)); extern long long __llrintf(float __x) __attribute((__nothrow__, __leaf__)); 



extern long lroundf(float __x) __attribute((__nothrow__, __leaf__)); extern long __lroundf(float __x) __attribute((__nothrow__, __leaf__)); 

__extension__ extern long long llroundf(float __x) __attribute((__nothrow__, __leaf__)); extern long long __llroundf(float __x) __attribute((__nothrow__, __leaf__)); 



extern float fdimf(float __x, float __y) __attribute((__nothrow__, __leaf__)); extern float __fdimf(float __x, float __y) __attribute((__nothrow__, __leaf__)); 


extern float fmaxf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __fmaxf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float fminf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __fminf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float fmaf(float __x, float __y, float __z) __attribute((__nothrow__, __leaf__)); extern float __fmaf(float __x, float __y, float __z) __attribute((__nothrow__, __leaf__)); 




extern float roundevenf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __roundevenf(float __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern __intmax_t fromfpf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __intmax_t __fromfpf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 




extern __uintmax_t ufromfpf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __uintmax_t __ufromfpf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 
# 355
extern __intmax_t fromfpxf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __intmax_t __fromfpxf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 
# 361
extern __uintmax_t ufromfpxf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __uintmax_t __ufromfpxf(float __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 



extern float fmaxmagf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __fmaxmagf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern float fminmagf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern float __fminmagf(float __x, float __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int totalorderf(float __x, float __y) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int totalordermagf(float __x, float __y) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int canonicalizef(float * __cx, const float * __x) __attribute((__nothrow__, __leaf__)); 


extern float getpayloadf(const float * __x) __attribute((__nothrow__, __leaf__)); extern float __getpayloadf(const float * __x) __attribute((__nothrow__, __leaf__)); 


extern int setpayloadf(float * __x, float __payload) __attribute((__nothrow__, __leaf__)); 


extern int setpayloadsigf(float * __x, float __payload) __attribute((__nothrow__, __leaf__)); 
# 396
extern float scalbf(float __x, float __n) __attribute((__nothrow__, __leaf__)); extern float __scalbf(float __x, float __n) __attribute((__nothrow__, __leaf__)); 
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3
extern int __fpclassifyl(long double __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int __signbitl(long double __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 



extern int __isinfl(long double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __finitel(long double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __isnanl(long double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int __iseqsigl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 


extern int __issignalingl(long double __value) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double acosl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __acosl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double asinl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __asinl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double atanl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __atanl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double atan2l(long double __y, long double __x) __attribute((__nothrow__, __leaf__)); extern long double __atan2l(long double __y, long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double cosl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __cosl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double sinl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __sinl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double tanl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __tanl(long double __x) __attribute((__nothrow__, __leaf__)); 




extern long double coshl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __coshl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double sinhl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __sinhl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double tanhl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __tanhl(long double __x) __attribute((__nothrow__, __leaf__)); 



extern void sincosl(long double __x, long double * __sinx, long double * __cosx) __attribute((__nothrow__, __leaf__)); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) __attribute((__nothrow__, __leaf__)); 
# 85
extern long double acoshl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __acoshl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double asinhl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __asinhl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double atanhl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __atanhl(long double __x) __attribute((__nothrow__, __leaf__)); 
# 95
extern long double expl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __expl(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double frexpl(long double __x, int * __exponent) __attribute((__nothrow__, __leaf__)); extern long double __frexpl(long double __x, int * __exponent) __attribute((__nothrow__, __leaf__)); 


extern long double ldexpl(long double __x, int __exponent) __attribute((__nothrow__, __leaf__)); extern long double __ldexpl(long double __x, int __exponent) __attribute((__nothrow__, __leaf__)); 


extern long double logl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __logl(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double log10l(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __log10l(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double modfl(long double __x, long double * __iptr) __attribute((__nothrow__, __leaf__)); extern long double __modfl(long double __x, long double * __iptr) __attribute((__nothrow__, __leaf__)) __attribute((__nonnull__(2))); 



extern long double exp10l(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __exp10l(long double __x) __attribute((__nothrow__, __leaf__)); 




extern long double expm1l(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __expm1l(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double log1pl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __log1pl(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double logbl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __logbl(long double __x) __attribute((__nothrow__, __leaf__)); 




extern long double exp2l(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __exp2l(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double log2l(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __log2l(long double __x) __attribute((__nothrow__, __leaf__)); 
# 140
extern long double powl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __powl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 


extern long double sqrtl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __sqrtl(long double __x) __attribute((__nothrow__, __leaf__)); 



extern long double hypotl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __hypotl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 




extern long double cbrtl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __cbrtl(long double __x) __attribute((__nothrow__, __leaf__)); 
# 159
extern long double ceill(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __ceill(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double fabsl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __fabsl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double floorl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __floorl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double fmodl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __fmodl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 
# 177
extern int isinfl(long double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern int finitel(long double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double dreml(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __dreml(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 



extern long double significandl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __significandl(long double __x) __attribute((__nothrow__, __leaf__)); 
# 196
extern long double copysignl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __copysignl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern long double nanl(const char * __tagb) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __nanl(const char * __tagb) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 211
extern int isnanl(long double __value) __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 217
extern long double j0l(long double) __attribute((__nothrow__, __leaf__)); extern long double __j0l(long double) __attribute((__nothrow__, __leaf__)); 
extern long double j1l(long double) __attribute((__nothrow__, __leaf__)); extern long double __j1l(long double) __attribute((__nothrow__, __leaf__)); 
extern long double jnl(int, long double) __attribute((__nothrow__, __leaf__)); extern long double __jnl(int, long double) __attribute((__nothrow__, __leaf__)); 
extern long double y0l(long double) __attribute((__nothrow__, __leaf__)); extern long double __y0l(long double) __attribute((__nothrow__, __leaf__)); 
extern long double y1l(long double) __attribute((__nothrow__, __leaf__)); extern long double __y1l(long double) __attribute((__nothrow__, __leaf__)); 
extern long double ynl(int, long double) __attribute((__nothrow__, __leaf__)); extern long double __ynl(int, long double) __attribute((__nothrow__, __leaf__)); 
# 228
extern long double erfl(long double) __attribute((__nothrow__, __leaf__)); extern long double __erfl(long double) __attribute((__nothrow__, __leaf__)); 
extern long double erfcl(long double) __attribute((__nothrow__, __leaf__)); extern long double __erfcl(long double) __attribute((__nothrow__, __leaf__)); 
extern long double lgammal(long double) __attribute((__nothrow__, __leaf__)); extern long double __lgammal(long double) __attribute((__nothrow__, __leaf__)); 




extern long double tgammal(long double) __attribute((__nothrow__, __leaf__)); extern long double __tgammal(long double) __attribute((__nothrow__, __leaf__)); 
# 241
extern long double gammal(long double) __attribute((__nothrow__, __leaf__)); extern long double __gammal(long double) __attribute((__nothrow__, __leaf__)); 
# 249
extern long double lgammal_r(long double, int * __signgamp) __attribute((__nothrow__, __leaf__)); extern long double __lgammal_r(long double, int * __signgamp) __attribute((__nothrow__, __leaf__)); 
# 256
extern long double rintl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __rintl(long double __x) __attribute((__nothrow__, __leaf__)); 


extern long double nextafterl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __nextafterl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 

extern long double nexttowardl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __nexttowardl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 




extern long double nextdownl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __nextdownl(long double __x) __attribute((__nothrow__, __leaf__)); 

extern long double nextupl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __nextupl(long double __x) __attribute((__nothrow__, __leaf__)); 



extern long double remainderl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __remainderl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 



extern long double scalbnl(long double __x, int __n) __attribute((__nothrow__, __leaf__)); extern long double __scalbnl(long double __x, int __n) __attribute((__nothrow__, __leaf__)); 



extern int ilogbl(long double __x) __attribute((__nothrow__, __leaf__)); extern int __ilogbl(long double __x) __attribute((__nothrow__, __leaf__)); 




extern long llogbl(long double __x) __attribute((__nothrow__, __leaf__)); extern long __llogbl(long double __x) __attribute((__nothrow__, __leaf__)); 




extern long double scalblnl(long double __x, long __n) __attribute((__nothrow__, __leaf__)); extern long double __scalblnl(long double __x, long __n) __attribute((__nothrow__, __leaf__)); 



extern long double nearbyintl(long double __x) __attribute((__nothrow__, __leaf__)); extern long double __nearbyintl(long double __x) __attribute((__nothrow__, __leaf__)); 



extern long double roundl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __roundl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern long double truncl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __truncl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 




extern long double remquol(long double __x, long double __y, int * __quo) __attribute((__nothrow__, __leaf__)); extern long double __remquol(long double __x, long double __y, int * __quo) __attribute((__nothrow__, __leaf__)); 
# 314
extern long lrintl(long double __x) __attribute((__nothrow__, __leaf__)); extern long __lrintl(long double __x) __attribute((__nothrow__, __leaf__)); 

__extension__ extern long long llrintl(long double __x) __attribute((__nothrow__, __leaf__)); extern long long __llrintl(long double __x) __attribute((__nothrow__, __leaf__)); 



extern long lroundl(long double __x) __attribute((__nothrow__, __leaf__)); extern long __lroundl(long double __x) __attribute((__nothrow__, __leaf__)); 

__extension__ extern long long llroundl(long double __x) __attribute((__nothrow__, __leaf__)); extern long long __llroundl(long double __x) __attribute((__nothrow__, __leaf__)); 



extern long double fdiml(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); extern long double __fdiml(long double __x, long double __y) __attribute((__nothrow__, __leaf__)); 


extern long double fmaxl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __fmaxl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double fminl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __fminl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double fmal(long double __x, long double __y, long double __z) __attribute((__nothrow__, __leaf__)); extern long double __fmal(long double __x, long double __y, long double __z) __attribute((__nothrow__, __leaf__)); 




extern long double roundevenl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __roundevenl(long double __x) __attribute((__nothrow__, __leaf__)) __attribute((const)); 



extern __intmax_t fromfpl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __intmax_t __fromfpl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 




extern __uintmax_t ufromfpl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __uintmax_t __ufromfpl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 
# 355
extern __intmax_t fromfpxl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __intmax_t __fromfpxl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 
# 361
extern __uintmax_t ufromfpxl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); extern __uintmax_t __ufromfpxl(long double __x, int __round, unsigned __width) __attribute((__nothrow__, __leaf__)); 



extern long double fmaxmagl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __fmaxmagl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern long double fminmagl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); extern long double __fminmagl(long double __x, long double __y) __attribute((__nothrow__, __leaf__)) __attribute((const)); 


extern int totalorderl(long double __x, long double __y) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int totalordermagl(long double __x, long double __y) __attribute((__nothrow__, __leaf__))
 __attribute((const)); 


extern int canonicalizel(long double * __cx, const long double * __x) __attribute((__nothrow__, __leaf__)); 


extern long double getpayloadl(const long double * __x) __attribute((__nothrow__, __leaf__)); extern long double __getpayloadl(const long double * __x) __attribute((__nothrow__, __leaf__)); 


extern int setpayloadl(long double * __x, long double __payload) __attribute((__nothrow__, __leaf__)); 


extern int setpayloadsigl(long double * __x, long double __payload) __attribute((__nothrow__, __leaf__)); 
# 396
extern long double scalbl(long double __x, long double __n) __attribute((__nothrow__, __leaf__)); extern long double __scalbl(long double __x, long double __n) __attribute((__nothrow__, __leaf__)); 
# 489 "/usr/include/math.h" 3
extern int signgam; 
# 570
enum { 
FP_NAN, 


FP_INFINITE, 


FP_ZERO, 


FP_SUBNORMAL, 


FP_NORMAL


}; 
# 23 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3
extern int __iscanonicall(long double __x)
 __attribute((__nothrow__, __leaf__)) __attribute((const)); 
# 1266 "/usr/include/math.h" 3
#endif /* _MATH_H */
# 2 "/home/javier/Desktop/c_caller/include/my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
# 12
typedef 
# 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
# 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
# 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
# 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern void incrementElement(int * u, unsigned size, unsigned increment_idx); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
