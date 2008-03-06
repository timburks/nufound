/* config.h.  Generated automatically by configure.  */
#ifndef __config_h__
#define __config_h__

/* Define it if we want to use libFoundation with GNUstep */
#define WITH_GNUSTEP 0
/* We don't. */

/* Define it if we want to use libFoundation with ffcall */
/* #undef WITH_FFCALL */

/* Define it if we use the Boehm's garbage collector */
#define WITH_GC 1

/* Macros that determine the Objective-C runtime and compiler */
/* #undef NeXT_RUNTIME */
/* #undef GNU_RUNTIME */

/* Define if the compiler does not support nested functions */
/* #undef NO_NESTED_FUNCTIONS */

/* Define if the compiler is broken when nested functions are used with
   Objective-C messages. */
/* #undef BROKEN_COMPILER */

/* Define if the __builtin_apply pseudo-function doesn't set the floating
   point return value at retframe + 8 on Intel machines. */
#define BROKEN_BUILTIN_APPLY 1

/* Define if system calls automatically restart after interruption
   by a signal.  */
#define HAVE_RESTARTABLE_SYSCALLS 1

/* Define if you have the vprintf function.  */
/* #undef HAVE_VPRINTF */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define this if you have the sigsetmask function, eg the BSD signal
   handling. */
#define HAVE_SIGSETMASK 1

/* Define this if you have the sighold function, eg the System V signal
   handling. */
#define HAVE_SIGHOLD 1

/* Define if you have the sigset function. */
#define HAVE_SIGSET 1

/* Define if you have the sigaction function. */
#define HAVE_SIGACTION 1

/* Define if you have the gethostbyname_r function. */
#define HAVE_GETHOSTBYNAME_R 1

/* Define if you have the gethostbyaddr_r function. */
#define HAVE_GETHOSTBYADDR_R 1

/* Define if you have the gethostent_r function. */
#define HAVE_GETHOSTENT_R 1

/* Define if the Objective-C runtime contains the objc_thread_create function;
   this function was defined in the multi-thread support in the 960906
   version of runtime patch. */
/* #undef HAVE_OBJC_THREAD_CREATE */

/* Define if the Objective-C runtime contains the objc_mutex_allocate func;
   this function is not available in gcc 2.7.2. */
/* #undef HAVE_OBJC_MUTEX_ALLOCATE */

/* Define if the Objective-C runtime contains the objc_malloc function;
   this function is not available in gcc 2.7.2. */
/* #undef HAVE_OBJC_MALLOC */

/* Define if you have the memcpy function.  */
#define HAVE_MEMCPY 1

/* Define if you have the ualarm function.  */
#define HAVE_UALARM 1

/* Define if you have posix mmap function.  */
#define HAVE_MMAP 1

/* Define if you have the getcwd function */
#define HAVE_GETCWD 1

/* Define if you have the getuid function */
#define HAVE_GETUID 1

/* Define if you have the getpwnam function */
#define HAVE_GETPWNAM 1

/* Define if you have the getpwuid function */
#define HAVE_GETPWUID 1

/* Define if you have the kill function */
#define HAVE_KILL 1

/* Define if you have the getpagesize function */
#define HAVE_GETPAGESIZE 1

/* Define if you have the statvfs function */
#define HAVE_STATVFS 1

/* Define if you have the raise function */
#define HAVE_RAISE 1

/* Define if you have the gettimeofday function */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the GetLocalTime function */
/* #undef HAVE_GETLOCALTIME */

/* Define if you have the chown function */
#define HAVE_CHOWN 1

/* Define if you have the symlink function */
#define HAVE_SYMLINK 1

/* Define if you have the readlink function */
#define HAVE_READLINK 1

/* Define if you have the fsync function */
#define HAVE_FSYNC 1

/* Define if you have the opendir family of functions */
#define HAVE_OPENDIR 1

/* Define if you have the sysconf function */
#define HAVE_SYSCONF 1

/* Define if you have the GetSystemInfo function */
/* #undef HAVE_GETSYSTEMINFO */

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <memory.h> header file */
#define HAVE_MEMORY_H 1

/* Define if you have the <stdlib.h> header file.  */
#define HAVE_STDLIB_H 1

/* Define if you have the <libc.h> header file.  */
/* #undef HAVE_LIBC_H */

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/stat.h> header file */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <sys/vfs.h> header file */
#define HAVE_SYS_VFS_H 1

/* Define if you have the <sys/statfs.h> header file */
#define HAVE_SYS_STATFS_H 1

/* Define if you have the <sys/statvfs.h> header file */
#define HAVE_SYS_STATVFS_H 1

/* Define if you have the <netinet/in.h> header file */
#define HAVE_NETINET_IN_H 1

/* Define if you have the <windows.h> header file */
/* #undef HAVE_WINDOWS_H */

/* Define if you have the <Windows32/Sockets.h> header file */
/* #undef HAVE_WINDOWS32_SOCKETS_H */

/* Define if you have the <pwd.h> header file */
#define HAVE_PWD_H 1

/* Define if you have the <sys/param.h> header file */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the <process.h> header file */
/* #undef HAVE_PROCESS_H */

/* Define if you have the <grp.h> header file */
#define HAVE_GRP_H 1

/* Define if you have the <sys/file.h> header file */
#define HAVE_SYS_FILE_H 1

/* Define if you have the <sys/select.h> header file */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <utime.h> header file */
/* #undef HAVE_UTIME_H */

/* Define if you have the <sys/errno.h> header file */
#define HAVE_SYS_ERRNO_H 1

/* Define if sys/wait.h is POSIX compatible */
#define HAVE_SYS_WAIT_H 1

/* Define this if you have the <vfork.h> header file */
/* #undef HAVE_VFORK_H */

/* Define for vfork in case it's not defined */
/* #undef vfork */

/* Define for pid_t in case it's not defined */
/* #undef pid_t */

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
/* #undef WORDS_BIGENDIAN */

/* The following macros deal with directory entries. */
#define HAVE_DIRENT_H 1
/* #undef HAVE_SYS_NDIR_H */
/* #undef HAVE_SYS_DIR_H */
/* #undef HAVE_NDIR_H */
/* #undef HAVE_DIR_H */

/* The structure alignment as determined by configure */
#define STRUCT_ALIGNMENT 4

/* The name of the target platform, obtained by configure */
#define TARGET_PLATFORM		"i686-pc-linux-gnu"

/*  Include this file here to give the above information to the configuration
	file if needs them. */
#include "linux-gnu.h"

/* This is a hack but I haven't found a way to check for it */
#ifndef __WIN32__
/* Define if your mkdir has two arguments.  */
# define MKDIR_HAS_TWO_ARGS 1
#endif


#if LIB_FOUNDATION_BOEHM_GC
#  include <gc.h>
#  include <gc_typed.h>
#endif

#endif /* __config_h__ */
