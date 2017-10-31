#ifndef Py_PYCONFIG_H
#define Py_PYCONFIG_H

/* #define DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754 */
/* #define DOUBLE_IS_BIG_ENDIAN_IEEE754 */
/* #define DOUBLE_IS_LITTLE_ENDIAN_IEEE754 */
#define ENABLE_IPV6 1
/* #define GETPGRP_HAVE_ARG */
/* #define GETTIMEOFDAY_NO_TZ */
#define HAVE_ACCEPT4 1
#define HAVE_ACOSH 1
#define HAVE_ADDRINFO 1
#define HAVE_ALARM 1
/* #define HAVE_ALIGNED_REQUIRED */
#define HAVE_ALLOCA_H 1
/* #define HAVE_ALTZONE */
#define HAVE_ASINH 1
#define HAVE_ASM_TYPES_H 1
#define HAVE_ATANH 1
/* #define HAVE_ATTRIBUTE_FORMAT_PARSETUPLE */
/* #define HAVE_BIND_TEXTDOMAIN_CODESET */
/* #define HAVE_BLUETOOTH_BLUETOOTH_H */
/* #define HAVE_BLUETOOTH_H */
/* #define HAVE_BROKEN_MBSTOWCS */
/* #define HAVE_BROKEN_NICE */
/* #define HAVE_BROKEN_PIPE_BUF */
/* #define HAVE_BROKEN_POLL */
/* #define HAVE_BROKEN_POSIX_SEMAPHORES */
/* #define HAVE_BROKEN_PTHREAD_SIGMASK */
#define HAVE_BROKEN_SEM_GETVALUE 1
/* #define HAVE_BROKEN_UNSETENV */
#define HAVE_BUILTIN_ATOMIC 1
#define HAVE_C99_BOOL 1
/* #define HAVE_CHFLAGS */
#define HAVE_CHOWN 1
#define HAVE_CHROOT 1
#define HAVE_CLOCK 1
#define HAVE_CLOCK_GETRES 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_CLOCK_SETTIME 1
#define HAVE_COMPUTED_GOTOS 1
/* #define HAVE_CONFSTR */
/* #define HAVE_CONIO_H */
#define HAVE_COPYSIGN 1
/* #define HAVE_CTERMID */
/* #define HAVE_CTERMID_R */
/* #define HAVE_CURSES_H */
/* #define HAVE_CURSES_IS_TERM_RESIZED */
/* #define HAVE_CURSES_RESIZETERM */
/* #define HAVE_CURSES_RESIZE_TERM */
#define HAVE_DECL_ISFINITE 1
#define HAVE_DECL_ISINF 1
#define HAVE_ISINF 1
#define HAVE_DECL_ISNAN 1
#define HAVE_ISNAN 1
/* #define HAVE_DECL_RTLD_DEEPBIND */
#define HAVE_DECL_RTLD_GLOBAL 1
#define HAVE_DECL_RTLD_LAZY 1
#define HAVE_DECL_RTLD_LOCAL 1
/* #define HAVE_DECL_RTLD_NODELETE */
#define HAVE_DECL_RTLD_NOLOAD 1
#define HAVE_DECL_RTLD_NOW 1
/* #define HAVE_DECL_TZNAME */
#define HAVE_DEVICE_MACROS 1
/* #define HAVE_DEV_PTC */
#define HAVE_DEV_PTMX 1
/* #define HAVE_DIRECT_H */
#define HAVE_DIRENT_D_TYPE 1
#define HAVE_DIRENT_H 1
#define HAVE_DIRFD 1
#define HAVE_DLFCN_H 1
#define HAVE_DLOPEN 1
#define HAVE_DUP2 1
/* #define HAVE_DUP3 */
#define HAVE_ENDIAN_H 1
#define HAVE_EPOLL 1
/* #define HAVE_EPOLL_CREATE1 */
#define HAVE_ERF 1
#define HAVE_ERFC 1
#define HAVE_ERRNO_H 1
#define HAVE_EXECV 1
#define HAVE_EXPM1 1
/* #define HAVE_FACCESSAT */
#define HAVE_FCHDIR 1
#define HAVE_FCHMOD 1
#define HAVE_FCHMODAT 1
#define HAVE_FCHOWN 1
#define HAVE_FCHOWNAT 1
#define HAVE_FCNTL_H 1
#define HAVE_FDATASYNC 1
#define HAVE_FDOPENDIR 1
/* #define HAVE_FEXECVE */
#define HAVE_FINITE 1
#define HAVE_FLOCK 1
#define HAVE_FORK 1
/* #define HAVE_FORKPTY */
#define HAVE_FPATHCONF 1
/* #define HAVE_FSEEK64 */
#define HAVE_FSEEKO 1
#define HAVE_FSTATAT 1
#define HAVE_FSTATVFS 1
#define HAVE_FSYNC 1
/* #define HAVE_FTELL64 */
#define HAVE_FTELLO 1
/* #define HAVE_FTIME */
#define HAVE_FTRUNCATE 1
/* #define HAVE_FUTIMENS */
/* #define HAVE_FUTIMES */
/* #define HAVE_FUTIMESAT */
#define HAVE_GAI_STRERROR 1
#define HAVE_GAMMA 1
/* #define HAVE_GCC_ASM_FOR_MC68881 */
/* #define HAVE_GCC_ASM_FOR_X64 */
/* #define HAVE_GCC_ASM_FOR_X87 */
/* #define HAVE_GCC_UINT128_T */
#define HAVE_GETADDRINFO 1
#define HAVE_GETCWD 1
#define HAVE_GETC_UNLOCKED 1
/* #define HAVE_GETENTROPY */
#define HAVE_GETGROUPLIST 1
#define HAVE_GETGROUPS 1
/* #define HAVE_GETHOSTBYNAME */
/* #define HAVE_GETHOSTBYNAME_R */
/* #define HAVE_GETHOSTBYNAME_R_3_ARG */
/* #define HAVE_GETHOSTBYNAME_R_5_ARG */
#define HAVE_GETHOSTBYNAME_R_6_ARG 1
#define HAVE_GETITIMER 1
/* #define HAVE_GETLOADAVG */
#define HAVE_GETLOGIN 1
#define HAVE_GETNAMEINFO 1
#define HAVE_GETPAGESIZE 1
#define HAVE_GETPEERNAME 1
#define HAVE_GETPGID 1
#define HAVE_GETPGRP 1
#define HAVE_GETPID 1
#define HAVE_GETPRIORITY 1
/* #define HAVE_GETPWENT */
/* #define HAVE_GETRANDOM */
/* #define HAVE_GETRANDOM_SYSCALL */
#define HAVE_GETRESGID 1
#define HAVE_GETRESUID 1
#define HAVE_GETSID 1
#define HAVE_GETSPENT 1
#define HAVE_GETSPNAM 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GETWD 1
/* #define HAVE_GLIBC_MEMMOVE_BUG */
#define HAVE_GRP_H 1
#define HAVE_HSTRERROR 1
#define HAVE_HTOLE64 1
#define HAVE_HYPOT 1
/* #define HAVE_IEEEFP_H */
/* #define HAVE_IF_NAMEINDEX */
#define HAVE_INET_ATON 1
#define HAVE_INET_PTON 1
#define HAVE_INITGROUPS 1
#define HAVE_INT32_T 1
#define HAVE_INT64_T 1
#define HAVE_INTTYPES_H 1
/* #define HAVE_IO_H */
/* #define HAVE_IPA_PURE_CONST_BUG */
#define HAVE_KILL 1
#define HAVE_KILLPG 1
/* #define HAVE_KQUEUE */
/* #define HAVE_LANGINFO_H */
/* #define HAVE_LARGEFILE_SUPPORT */
/* #define HAVE_LCHFLAGS */
/* #define HAVE_LCHMOD */
#define HAVE_LCHOWN 1
#define HAVE_LGAMMA 1
#define HAVE_LIBDL 1
/* #define HAVE_LIBDLD */
/* #define HAVE_LIBIEEE */
/* #define HAVE_LIBINTL_H */
/* #define HAVE_LIBREADLINE */
/* #define HAVE_LIBRESOLV */
/* #define HAVE_LIBSENDFILE */
/* #define HAVE_LIBUTIL_H */
#define HAVE_LINK 1
/* #define HAVE_LINKAT */
#define HAVE_LINUX_CAN_BCM_H 1
#define HAVE_LINUX_CAN_H 1
#define HAVE_LINUX_CAN_RAW_FD_FRAMES 1
#define HAVE_LINUX_CAN_RAW_H 1
#define HAVE_LINUX_NETLINK_H 1
#define HAVE_LINUX_TIPC_H 1
/* #define HAVE_LINUX_RANDOM_H */
/* #define HAVE_LOCKF */
#define HAVE_LOG1P 1
#define HAVE_LOG2 1
#define HAVE_LONG_DOUBLE 1
#define HAVE_LONG_LONG 1
#define HAVE_LSTAT 1
/* #define HAVE_LUTIMES */
#define HAVE_MAKEDEV 1
#define HAVE_MBRTOWC 1
#define HAVE_MEMMOVE 1
#define HAVE_MEMORY_H 1
#define HAVE_MEMRCHR 1
#define HAVE_MKDIRAT 1
#define HAVE_MKFIFO 1
/* #define HAVE_MKFIFOAT */
#define HAVE_MKNOD 1
/* #define HAVE_MKNODAT */
#define HAVE_MKTIME 1
#define HAVE_MMAP 1
#define HAVE_MREMAP 1
/* #define HAVE_NCURSES_H */
/* #define HAVE_NDIR_H */
#define HAVE_NETPACKET_PACKET_H 1
#define HAVE_NET_IF_H 1
#define HAVE_NICE 1
#define HAVE_OPENAT 1
/* #define HAVE_OPENPTY */
/* #define HAVE_OSX105_SDK */
#define HAVE_PATHCONF 1
#define HAVE_PAUSE 1
#define HAVE_PIPE2 1
/* #define HAVE_PLOCK */
#define HAVE_POLL 1
#define HAVE_POLL_H 1
/* #define HAVE_POSIX_FADVISE */
/* #define HAVE_POSIX_FALLOCATE */
#define HAVE_PREAD 1
#define HAVE_PRLIMIT 1
/* #define HAVE_PROCESS_H */
#define HAVE_PROTOTYPES 1
#define HAVE_PTHREAD_ATFORK 1
/* #define HAVE_PTHREAD_DESTRUCTOR */
#define HAVE_PTHREAD_H 1
/* #define HAVE_PTHREAD_INIT */
#define HAVE_PTHREAD_KILL 1
#define HAVE_PTHREAD_SIGMASK 1
/* #define HAVE_PTY_H */
#define HAVE_PUTENV 1
#define HAVE_PWRITE 1
#define HAVE_RAND_EGD 1
#define HAVE_READLINK 1
/* #define HAVE_READLINKAT */
#define HAVE_READV 1
#define HAVE_REALPATH 1
#define HAVE_RENAMEAT 1
/* #define HAVE_RL_APPEND_HISTORY */
/* #define HAVE_RL_CALLBACK */
/* #define HAVE_RL_CATCH_SIGNAL */
/* #define HAVE_RL_COMPLETION_APPEND_CHARACTER */
/* #define HAVE_RL_COMPLETION_DISPLAY_MATCHES_HOOK */
/* #define HAVE_RL_COMPLETION_MATCHES */
/* #define HAVE_RL_COMPLETION_SUPPRESS_APPEND */
/* #define HAVE_RL_PRE_INPUT_HOOK */
/* #define HAVE_RL_RESIZE_TERMINAL */
#define HAVE_ROUND 1
#define HAVE_SCHED_GET_PRIORITY_MAX 1
#define HAVE_SCHED_H 1
#define HAVE_SCHED_RR_GET_INTERVAL 1
#define HAVE_SCHED_SETAFFINITY 1
#define HAVE_SCHED_SETPARAM 1
#define HAVE_SCHED_SETSCHEDULER 1
#define HAVE_SELECT 1
#define HAVE_SEM_GETVALUE 1
#define HAVE_SEM_OPEN 1
#define HAVE_SEM_TIMEDWAIT 1
#define HAVE_SEM_UNLINK 1
#define HAVE_SENDFILE 1
#define HAVE_SETEGID 1
#define HAVE_SETEUID 1
#define HAVE_SETGID 1
#define HAVE_SETGROUPS 1
/* #define HAVE_SETHOSTNAME */
#define HAVE_SETITIMER 1
#define HAVE_SETLOCALE 1
#define HAVE_SETPGID 1
#define HAVE_SETPGRP 1
#define HAVE_SETPRIORITY 1
#define HAVE_SETREGID 1
#define HAVE_SETRESGID 1
#define HAVE_SETRESUID 1
#define HAVE_SETREUID 1
#define HAVE_SETSID 1
#define HAVE_SETUID 1
#define HAVE_SETVBUF 1
#define HAVE_SHADOW_H 1
#define HAVE_SIGACTION 1
#define HAVE_SIGALTSTACK 1
#define HAVE_SIGINTERRUPT 1
#define HAVE_SIGNAL_H 1
#define HAVE_SIGPENDING 1
#define HAVE_SIGRELSE 1
/* #define HAVE_SIGTIMEDWAIT */
#define HAVE_SIGWAIT 1
/* #define HAVE_SIGWAITINFO */
#define HAVE_SNPRINTF 1
/* #define HAVE_SOCKADDR_ALG */
/* #define HAVE_SOCKADDR_SA_LEN */
#define HAVE_SOCKADDR_STORAGE 1
#define HAVE_SOCKETPAIR 1
#define HAVE_SPAWN_H 1
#define HAVE_SSIZE_T 1
#define HAVE_STATVFS 1
/* #define HAVE_STAT_TV_NSEC */
/* #define HAVE_STAT_TV_NSEC2 */
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRDUP 1
#define HAVE_STRFTIME 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
/* #define HAVE_STRLCPY */
/* #define HAVE_STROPTS_H */
/* #define HAVE_STRUCT_PASSWD_PW_GECOS */
#define HAVE_STRUCT_PASSWD_PW_PASSWD 1
/* #define HAVE_STRUCT_STAT_ST_BIRTHTIME */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1
#define HAVE_STRUCT_STAT_ST_BLOCKS 1
/* #define HAVE_STRUCT_STAT_ST_FLAGS */
/* #define HAVE_STRUCT_STAT_ST_GEN */
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_SYMLINK 1
/* #define HAVE_SYMLINKAT */
#define HAVE_SYNC 1
#define HAVE_SYSCONF 1
/* #define HAVE_SYSEXITS_H */
/* #define HAVE_SYS_AUDIOIO_H */
/* #define HAVE_SYS_BSDTTY_H */
/* #define HAVE_SYS_DEVPOLL_H */
/* #define HAVE_SYS_DIR_H */
/* #define HAVE_SYS_ENDIAN_H */
#define HAVE_SYS_EPOLL_H 1
/* #define HAVE_SYS_EVENT_H */
#define HAVE_SYS_FILE_H 1
#define HAVE_SYS_IOCTL_H 1
/* #define HAVE_SYS_KERN_CONTROL_H */
/* #define HAVE_SYS_LOADAVG_H */
/* #define HAVE_SYS_LOCK_H */
/* #define HAVE_SYS_MKDEV_H */
/* #define HAVE_SYS_MODEM_H */
/* #define HAVE_SYS_NDIR_H */
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_POLL_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SENDFILE_H 1
#define HAVE_SYS_SOCKET_H 1
/* #define HAVE_SYS_STATVFS_H */
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_SYSCALL_H 1
/* #define HAVE_SYS_SYS_DOMAIN_H */
/* #define HAVE_SYS_TERMIO_H */
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_UIO_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_UTSNAME_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_SYS_XATTR_H 1
#define HAVE_TCGETPGRP 1
#define HAVE_TCSETPGRP 1
#define HAVE_TEMPNAM 1
#define HAVE_TERMIOS_H 1
#define HAVE_TERM_H 1
#define HAVE_TGAMMA 1
/* #define HAVE_THREAD_H */
#define HAVE_TIMEGM 1
#define HAVE_TIMES 1
#define HAVE_TMPFILE 1
#define HAVE_TMPNAM 1
/* #define HAVE_TMPNAM_R */
#define HAVE_TRUNCATE 1
/* #define HAVE_TZNAME */
#define HAVE_UINT32_T 1
#define HAVE_UINT64_T 1
#define HAVE_UINTPTR_T 1
#define HAVE_UNAME 1
#define HAVE_UNISTD_H 1
#define HAVE_UNLINKAT 1
#define HAVE_UNSETENV 1
/* #define HAVE_USABLE_WCHAR_T */
/* #define HAVE_UTIL_H */
/* #define HAVE_UTIMENSAT */
#define HAVE_UTIMES 1
#define HAVE_UTIME_H 1
/* #define HAVE_WAIT3 */
#define HAVE_WAIT4 1
#define HAVE_WAITID 1
#define HAVE_WAITPID 1
#define HAVE_WCHAR_H 1
#define HAVE_WCSCOLL 1
#define HAVE_WCSFTIME 1
#define HAVE_WCSXFRM 1
#define HAVE_WMEMCMP 1
#define HAVE_WORKING_TZSET 1
#define HAVE_WRITEV 1
#define HAVE_ZLIB_COPY 1
/* #define HAVE__GETPTY */
/* #define LOG1P_DROPS_ZERO_SIGN */
/* #define MAJOR_IN_MKDEV */
/* #define MAJOR_IN_SYSMACROS */
/* #define MVWDELCH_IS_EXPRESSION */
/* #define POSIX_SEMAPHORES_NOT_ENABLED */
#define PTHREAD_SYSTEM_SCHED_SUPPORTED 1
/* #define PYLONG_BITS_IN_DIGIT */
#define PY_FORMAT_LONG_LONG "ll"
#define PY_FORMAT_SIZE_T "z"
#if PY_MAJOR_VERSION == 2
#define PY_UNICODE_TYPE unsigned short
#endif
/* #define Py_DEBUG */
/* #define Py_HASH_ALGORITHM */
#if PY_MAJOR_VERSION == 2
#define Py_UNICODE_SIZE 2
#define Py_USING_UNICODE 1
#endif
/* #define SETPGRP_HAVE_ARG */
/* #define SIGNED_RIGHT_SHIFT_ZERO_FILLS */
#define SIZEOF_DOUBLE 8
#define SIZEOF_FLOAT 4
#define SIZEOF_FPOS_T 4
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_LONG_DOUBLE 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_OFF_T 4
#define SIZEOF_PID_T 4
#define SIZEOF_PTHREAD_T 4
#define SIZEOF_SHORT 2
#define SIZEOF_SIZE_T 4
#define SIZEOF_TIME_T 4
#define SIZEOF_UINTPTR_T 4
#define SIZEOF_VOID_P 4
#define SIZEOF_WCHAR_T 4
#define SIZEOF__BOOL 1
#define STDC_HEADERS 1
#define SYS_SELECT_WITH_SYS_TIME 1
/* #define TANH_PRESERVES_ZERO_SIGN */
#define TIME_WITH_SYS_TIME 1
/* #define TM_IN_SYS_TIME */
/* #define USE_COMPUTED_GOTOS */
#define USE_INLINE 1
/* #define USE_TOOLBOX_OBJECT_GLUE */
/* #define VA_LIST_IS_ARRAY */
/* #define WANT_SIGFPE_HANDLER */
/* #define WANT_WCTYPE_FUNCTIONS */
/* #define WINDOW_HAS_FLAGS */
/* #define WITH_DOC_STRINGS */
/* #define WITH_LIBINTL */
#define WITH_PYMALLOC 1
#define WITH_THREAD 1
/* #define WITH_TSC */
/* #define WORDS_BIGENDIAN */
/* #define X87_DOUBLE_ROUNDING */
/* #define _BSD_SOURCE */
/* #define _DARWIN_C_SOURCE */
#define _FILE_OFFSET_BITS 64
#define _GNU_SOURCE 1
/* #define _INCLUDE__STDC_A1_SOURCE */
#define _LARGEFILE_SOURCE 1
#define _NETBSD_SOURCE 1
/* #define _POSIX_1_SOURCE */
#define _POSIX_C_SOURCE 200809L
/* #define _POSIX_SOURCE */
/* #define _POSIX_THREADS */
#define _REENTRANT 1
#define _XOPEN_SOURCE 700
#define _XOPEN_SOURCE_EXTENDED 1
#define __BSD_VISIBLE 1
/* #define __CHAR_UNSIGNED__ */
/* #define clock_t */
/* #define const */
/* #define gid_t */
/* #define int32_t */
/* #define int64_t */
/* #define mode_t */
/* #define off_t */
/* #define pid_t */
/* #define signed */
/* #define size_t */
/* #define socklen_t */
/* #define uid_t */
/* #define uint32_t */
/* #define uint64_t */
/* #define volatile */
#define HAVE_BROKEN_GECOS 1
#define HAVE_BROKEN_GETGRENT 1
#define HAVE_BROKEN_LOCALECONV 1
#define HAVE_VERY_BROKEN_MBSTOWCS 1
#define HAVE_BROKEN_TCDRAIN 1
#define HAVE_DYNAMIC_LOADING

#endif
