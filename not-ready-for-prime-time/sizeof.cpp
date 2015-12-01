
// print out WORD_BIT, __WORDSIZE, sizeof(void*) and sizeof(size_t)

#include <cstdlib>
#include <cstdio>
#include <cinttypes>
#include <climits>
#include <cwchar>
#include <ctime>
#if !defined(_WIN32) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__)))
# include <unistd.h>
#endif
#if defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
# include <sys/param.h>
#endif
#ifdef __GNUC__
# ifdef __cplusplus
#  include <cmath>
#  include <cstdint>
# else
#  include <math.h>
#  include <stdint.h>
# endif
#endif

#define TODQUOTED(s)    #s
#define PRINT_UNDEFINED(t) printf("  %36s (undefined)\n",TODQUOTED(t));
#define PRINT_VALUE(t) printf("  %36s %20lu\n",#t,(unsigned long)(t));
#define PRINT_SIZEOF(t) printf("  %36s %20lu\n",TODQUOTED(sizeof(t)),(unsigned long)sizeof(t));

int
main ( int argc, char *argv[] )
{

printf( "Preprocessor platform macros\n" );

PRINT_VALUE(__cplusplus)
PRINT_VALUE(__STDC__);

#if defined(__STDC_VERSION__)
  PRINT_VALUE(__STDC_VERSION__)
#endif

PRINT_VALUE(__STDC__);
PRINT_VALUE(__STDC__);

#if defined(_AIX)
  PRINT_VALUE(_AIX)
#endif

#ifdef unix
  PRINT_VALUE(unix)
#endif

#ifdef __unix
  PRINT_VALUE(__unix)
#endif

#if defined(__unix__)
  PRINT_VALUE(__unix__)
#endif

#if defined(__APPLE__)
  PRINT_VALUE(__APPLE__)
#endif

#if defined(__MACH__)
  PRINT_VALUE(__MACH__)
#endif

#if defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
# if defined(BSD)
  PRINT_VALUE(BSD)
#  ifdef __DragonFly__
  PRINT_VALUE(__DragonFly__)
#  endif
#  ifdef __FreeBSD__
  PRINT_VALUE(__FreeBSD__)
#  endif
#  ifdef __NetBSD__
  PRINT_VALUE(__NetBSD__)
#  endif
#  ifdef __OpenBSD__
  PRINT_VALUE(__OpenBSD__)
#  endif
# endif
#endif

#if defined(__hpux)
# if defined(__hpux)
  PRINT_VALUE(__hpux)
#  ifdef hpux
  PRINT_VALUE(hpux)
#  endif
# endif
#endif

#if defined(__APPLE__) && defined(__MACH__)
# include <TargetConditionals.h>
# ifdef TARGET_IPHONE_SIMULATOR
  PRINT_VALUE(TARGET_IPHONE_SIMULATOR)
# endif
# ifdef TARGET_OS_IPHONE
  PRINT_VALUE(TARGET_OS_IPHONE)
# endif
# ifdef TARGET_OS_MAC
  PRINT_VALUE(TARGET_OS_MAC)
# endif
#  ifdef TARGET_OS_EMBEDDED
  PRINT_VALUE(TARGET_OS_EMBEDDED)
#  endif
#  ifdef TARGET_OS_IPHONE
  PRINT_VALUE(TARGET_OS_IPHONE)
#  endif
#  ifdef TARGET_OS_MAC
  PRINT_VALUE(TARGET_OS_MAC)
#  endif
#endif

#if defined(__sun) && defined(__SVR4)
#  ifdef sun
  PRINT_VALUE(sun)
#  endif
  PRINT_VALUE(__sun)
#  ifdef __sun__
  PRINT_VALUE(__sun__)
#  endif
#  ifdef __SunOS
  PRINT_VALUE(__SunOS)
#  endif
#  ifdef __svr4__
  PRINT_VALUE(__svr4__)
#  endif
  PRINT_VALUE(__SVR4)
#endif

#if defined(__CYGWIN__) || defined(_WIN32) || defined(_WIN64)
#  ifdef __CYGWIN__
  PRINT_VALUE(__CYGWIN__)
#  endif
#  ifdef __CYGWIN32__
  PRINT_VALUE(__CYGWIN32__)
#  endif
#  ifdef __MINGW32__
  PRINT_VALUE(__MINGW32__)
#  endif
#  ifdef __MINGW64__
  PRINT_VALUE(__MINGW64__)
#  endif
#  ifdef unix
  PRINT_VALUE(unix)
#  endif
#  ifdef __unix
  PRINT_VALUE(__unix)
#  endif
#  ifdef __unix__
  PRINT_VALUE(__unix__)
#  endif
#  ifdef WIN32
  PRINT_VALUE(WIN32)
#  endif
#  ifdef _WIN32
  PRINT_VALUE(_WIN32)
#  endif
#  ifdef __WIN32
  PRINT_VALUE(__WIN32)
#  endif
#  ifdef __WIN32__
  PRINT_VALUE(__WIN32__)
#  endif
#  ifdef WIN64
  PRINT_VALUE(WIN64)
#  endif
#  ifdef _WIN64
  PRINT_VALUE(_WIN64)
#  endif
#  ifdef __WIN64
  PRINT_VALUE(__WIN64)
#  endif
#  ifdef __WIN64__
  PRINT_VALUE(__WIN64__)
#  endif
#  ifdef WINNT
  PRINT_VALUE(WINNT)
#  endif
#  ifdef __WINNT
  PRINT_VALUE(__WINNT)
#  endif
#  ifdef __WINNT__
  PRINT_VALUE(__WINNT__)
#  endif
#endif

#if defined(__linux__)
  PRINT_VALUE(__linux__)
# ifdef linux
  PRINT_VALUE(linux)
# endif
# ifdef __linux
  PRINT_VALUE(__linux)
# endif
# ifdef __gnu_linux
  PRINT_VALUE(__gnu_linux)
# endif
#endif

#if !defined(_WIN32) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__)))
# if defined(_POSIX_VERSION)
  PRINT_VALUE(_POSIX_VERSION)
# endif
#endif

printf( "\n" );

printf( "Preprocessor machine macros\n" );

#if defined(__ia64) || defined(__itanium__) || defined(_M_IA64)
  printf( "for Itanium\n" );
#  ifdef ia64
  PRINT_VALUE(ia64)
#  endif
#  ifdef __ia64
  PRINT_VALUE(__ia64)
#  endif
#  ifdef __ia64__
  PRINT_VALUE(__ia64__)
#  endif
#  ifdef __IA64__
  PRINT_VALUE(__IA64__)
#  endif
#  ifdef __itanium__
  PRINT_VALUE(__itanium__)
#  endif
#  ifdef _M_IA64
  PRINT_VALUE(_M_IA64)
#  endif
#endif

#if defined(__powerpc__) || defined(__ppc__) || defined(__PPC__)
#if defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__) || \
	defined(__64BIT__) || defined(_LP64) || defined(__LP64__)
  printf( "for POWER 64-bit\n" );
#  ifdef _ARCH_PPC
  PRINT_VALUE(_ARCH_PPC)
#  endif
#  ifdef _ARCH_PPC64
  PRINT_VALUE(_ARCH_PPC64)
#  endif
#  ifdef _POWER
  PRINT_VALUE(_POWER)
#  endif
#  ifdef __powerpc
  PRINT_VALUE(__powerpc)
#  endif
#  ifdef __powerpc__
  PRINT_VALUE(__powerpc__)
#  endif
#  ifdef __powerpc64__
  PRINT_VALUE(__powerpc64__)
#  endif
#  ifdef __PowerPC__
  PRINT_VALUE(__PowerPC__)
#  endif
#  ifdef __POWERPC__
  PRINT_VALUE(__POWERPC__)
#  endif
#  ifdef __ppc__
  PRINT_VALUE(__ppc__)
#  endif
#  ifdef __ppc64
  PRINT_VALUE(__ppc64)
#  endif
#  ifdef __ppc64__
  PRINT_VALUE(__ppc64__)
#  endif
#  ifdef __PPC
  PRINT_VALUE(__PPC)
#  endif
#  ifdef __PPC__
  PRINT_VALUE(__PPC__)
#  endif
#  ifdef __PPC64__
  PRINT_VALUE(__PPC64__)
#  endif
#else
  printf( "for POWER 32-bit\n" );
#  ifdef _ARCH_PPC
  PRINT_VALUE(_ARCH_PPC)
#  endif
#  ifdef _POWER
  PRINT_VALUE(_POWER)
#  endif
#  ifdef powerpc
  PRINT_VALUE(powerpc)
#  endif
#  ifdef __powerpc
  PRINT_VALUE(__powerpc)
#  endif
#  ifdef __powerpc__
  PRINT_VALUE(__powerpc__)
#  endif
#  ifdef __PowerPC__
  PRINT_VALUE(__PowerPC__)
#  endif
#  ifdef __POWERPC__
  PRINT_VALUE(__POWERPC__)
#  endif
#  ifdef PPC
  PRINT_VALUE(PPC)
#  endif
#  ifdef __ppc__
  PRINT_VALUE(__ppc__)
#  endif
#  ifdef __PPC
  PRINT_VALUE(__PPC)
#  endif
#  ifdef __PPC__
  PRINT_VALUE(__PPC__)
#  endif
#endif
#endif

#if defined(__sparc)
  printf( "for SPARC\n" );
#  ifdef sparc
  PRINT_VALUE(sparc)
#  endif
#  ifdef __sparc
  PRINT_VALUE(__sparc)
#  endif
#  ifdef __sparc__
  PRINT_VALUE(__sparc__)
#  endif
#  ifdef __sparc64__
  PRINT_VALUE(__sparc64__)
#  endif
#  ifdef __sparclite__
  PRINT_VALUE(__sparclite__)
#  endif
#  ifdef __sparclet__
  PRINT_VALUE(__sparclet__)
#  endif
#  ifdef __sparc_v8__
  PRINT_VALUE(__sparc_v8__)
#  endif
#  ifdef __sparc_v9__
  PRINT_VALUE(__sparc_v9__)
#  endif
#  ifdef __supersparc__
  PRINT_VALUE(__supersparc__)
#  endif
#  ifdef __hypersparc__
  PRINT_VALUE(__hypersparc__)
#  endif
#endif

#if defined(__x86_64__) || defined(_M_X64) || defined(__i386) || defined(_M_IX86)
# if defined(__x86_64__) || defined(_M_X64)
  printf( "for x86 64-bit\n" );
#  ifdef __x86_64
  PRINT_VALUE(__x86_64)
#  endif
#  ifdef __x86_64__
  PRINT_VALUE(__x86_64__)
#  endif
#  ifdef __amd64
  PRINT_VALUE(__amd64)
#  endif
#  ifdef __amd64__
  PRINT_VALUE(__amd64__)
#  endif
#  ifdef _M_AMD64
  PRINT_VALUE(_M_AMD64)
#  endif
#  ifdef _M_X64
  PRINT_VALUE(_M_X64)
#  endif
# elif defined(__i386) || defined(_M_IX86)
  printf( "for x86 32-bit\n" );
#  ifdef i386
  PRINT_VALUE(i386)
#  endif
#  ifdef __i386
  PRINT_VALUE(__i386)
#  endif
#  ifdef __i386__
  PRINT_VALUE(__i386__)
#  endif
#  ifdef _M_IX86
  PRINT_VALUE(_M_IX86)
#  endif
#  ifdef _X86_
  PRINT_VALUE(_X86_)
#  endif
# endif
#  ifdef __i486__
  PRINT_VALUE(__i486__)
#  endif
#  ifdef __i586__
  PRINT_VALUE(__i586__)
#  endif
#  ifdef __pentium__
  PRINT_VALUE(__pentium__)
#  endif
#  ifdef __pentiumpro__
  PRINT_VALUE(__pentiumpro__)
#  endif
#  ifdef __athlon__
  PRINT_VALUE(__athlon__)
#  endif
#  ifdef __atom__
  PRINT_VALUE(__atom__)
#  endif
#  ifdef __core2__
  PRINT_VALUE(__core2__)
#  endif
#  ifdef __corei7__
  PRINT_VALUE(__corei7__)
#  endif
#  ifdef __k8__
  PRINT_VALUE(__k8__)
#  endif
#endif

#ifdef __GNUC__
printf( "\n" );
printf( "Preprocessor common gnu macros\n" );
# include "common-macros-gnu.h"
#endif


printf( "\n" );

printf( "Preprocessor type / type size macros\n" );

#ifdef __CHAR_BIT__
  PRINT_VALUE(__CHAR_BIT__)
#else
  PRINT_UNDEFINED(__CHAR_BIT__)
#endif

#ifdef WORD_BIT
  PRINT_VALUE(WORD_BIT)
#else
  PRINT_UNDEFINED(WORD_BIT)
#endif

#ifdef __WORDSIZE
  PRINT_VALUE(__WORDSIZE)
#else
  PRINT_UNDEFINED(__WORDSIZE)
#endif

#ifdef __LP64__
  PRINT_VALUE(__LP64__)
#else
  PRINT_UNDEFINED(__LP64__)
#endif

printf( "\n" );

printf( "Standard Types\n" );

PRINT_SIZEOF(void*)

PRINT_SIZEOF(char)
PRINT_SIZEOF(short)
PRINT_SIZEOF(int)
PRINT_SIZEOF(long)
PRINT_SIZEOF(long long)

PRINT_SIZEOF(float)
PRINT_SIZEOF(double)

printf( "\n" );

printf( "Common Types\n" );

PRINT_SIZEOF(size_t)
PRINT_SIZEOF(time_t)

printf( "\n" );

printf( "Extended Types\n" );

PRINT_SIZEOF(wchar_t)

printf( "\n" );

}


