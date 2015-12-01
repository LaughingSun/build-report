
#ifndef MACROS_ENDIAN_STD_CXX
# define MACROS_ENDIAN_STD_CXX

/***************** Detect endianness at compile-time ******************
 * Please notice that the follow list of macros is not exhaustive.    *
 *                                                                    *
 * System headers                                                     *
 *                                                                    *
 * Some compilers or system headers provide macros to specify         *
 * endianness. Unfortunately, there is no standard for the names of   *
 * the macros or even of the header files. Many operating systems     *
 * contains the following macros in <sys/param.h>. Operating systems  *
 * that use the GNU C library generally provide a header named        *
 * <endian.h> containing these macros.                                *
 *                                                                    *
 *--------------------------------------------------------------------*
 * Type                         | Macro           | Value             *
 *--------------------------------------------------------------------*
 * Big endian                   | __BYTE_ORDER	  | __BIG_ENDIAN      *
 * Little endian	              | __BYTE_ORDER    | __LITTLE_ENDIAN   *
 * Little endian (word-swapped) | __BYTE_ORDER    | __PDP_ENDIAN      *
 *--------------------------------------------------------------------*
 *                                                                    *
 * Pre-defined endian macros                                          *
 *--------------------------------------------------------------------*
 * Type              | Macro                | Value                   *
 *--------------------------------------------------------------------*
 * Big endian        | __BIG_ENDIAN__       | (ifdef)                 *
 * Big endian        | __ARMEB__            | (ifdef)                 *
 * Big endian        | __THUMBEB__          | (ifdef)                 *
 * Big endian        | __AARCH64EB__        | (ifdef)                 *
 * Big endian        | _MIPSEB              | (ifdef)                 *
 * Big endian        | __MIPSEB             | (ifdef)                 *
 * Big endian        | __MIPSEB__           | (ifdef)                 *
 * Big endian        | __BYTE_ORDER__       | __ORDER_BIG_ENDIAN__    *
 * Big endian        | __FLOAT_WORD_ORDER__ | __ORDER_BIG_ENDIAN__    *
 *--------------------------------------------------------------------*
 * Little endian     | __LITTLE_ENDIAN__    | (ifdef)                 *
 * Little endian     | __ARMEL__            | (ifdef)                 *
 * Little endian     | __THUMBEL__          | (ifdef)                 *
 * Little endian     | __AARCH64EL__        | (ifdef)                 *
 * Little endian     | _MIPSEB              | (ifdef)                 *
 * Little endian     | __MIPSEL             | (ifdef)                 *
 * Little endian     | __MIPSEL__           | (ifdef)                 *
 * Little endian     | __BYTE_ORDER__       | __ORDER_LITTLE_ENDIAN__ *
 * Little endian     | __FLOAT_WORD_ORDER__ | __ORDER_LITTLE_ENDIAN__ *
 *--------------------------------------------------------------------*
 *                                                                    *
 **********************************************************************
*/

#include "main-head.cpp"

printf( "Preprocessor macros endian std:\n" );

#if defined(__BYTE_ORDER) || defined(__BYTE_ORDER__) || defined(__FLOAT_WORD_ORDER__) \
|| defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIPSEB) || defined(__MIPSEB) || defined(__MIPSEB__) \
|| defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__)

# ifdef __BYTE_ORDER
#  if defined(__BIG_ENDIAN) && __BYTE_ORDER == __BIG_ENDIAN
PRINT_STRING_UNSIGNED(__BYTE_ORDER, __BIG_ENDIAN)
#  elif defined(__LITTLE_ENDIAN) && __BYTE_ORDER == __LITTLE_ENDIAN
PRINT_STRING_UNSIGNED(__BYTE_ORDER, __LITTLE_ENDIAN)
#  elif defined(__PDP_ENDIAN) && __BYTE_ORDER == __PDP_ENDIAN
PRINT_STRING_UNSIGNED(__BYTE_ORDER, __LITTLE_ENDIAN)
#  elif __BYTE_ORDER != ""
PRINT_STRING_ULONG(__BYTE_ORDER)
#  else
PRINT_DEFINED(__BYTE_ORDER)
#  endif
# endif

# ifdef __BYTE_ORDER__
#  if defined(__ORDER_BIG_ENDIAN__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
PRINT_STRING_UNSIGNED(__BYTE_ORDER__, __ORDER_BIG_ENDIAN__)
#  elif defined(__ORDER_LITTLE_ENDIAN__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
PRINT_STRING_UNSIGNED(__BYTE_ORDER__, __ORDER_LITTLE_ENDIAN__)
#  elif __BYTE_ORDER__ != ""
PRINT_STRING_ULONG(__BYTE_ORDER__)
#  else
PRINT_DEFINED(__BYTE_ORDER__)
#  endif
# endif

# ifdef __FLOAT_WORD_ORDER__
#  if defined(__ORDER_BIG_ENDIAN__) && __FLOAT_WORD_ORDER__ == __ORDER_BIG_ENDIAN__
PRINT_STRING_UNSIGNED(__FLOAT_WORD_ORDER__, __ORDER_BIG_ENDIAN__)
#  elif defined(__ORDER_LITTLE_ENDIAN__) && __FLOAT_WORD_ORDER__ == __ORDER_LITTLE_ENDIAN__
PRINT_STRING_UNSIGNED(__FLOAT_WORD_ORDER__, __ORDER_LITTLE_ENDIAN__)
#  elif __FLOAT_WORD_ORDER__ != ""
PRINT_STRING_ULONG(__FLOAT_WORD_ORDER__)
#  else
PRINT_DEFINED(__FLOAT_WORD_ORDER__)
#  endif
# endif

# ifdef __BIG_ENDIAN__
PRINT_DEFINED(__BIG_ENDIAN__)
# endif
# ifdef __LITTLE_ENDIAN__
PRINT_DEFINED(__LITTLE_ENDIAN__)
# endif
# ifdef __ARMEB__
PRINT_DEFINED(__ARMEB__)
# endif
# ifdef __ARMEL__
PRINT_DEFINED(__ARMEL__)
# endif
# ifdef __THUMBEB__
PRINT_DEFINED(__THUMBEB__)
# endif
# ifdef __THUMBEL__
PRINT_DEFINED(__THUMBEL__)
# endif
# ifdef __AARCH64EB__
PRINT_DEFINED(__AARCH64EB__)
# endif
# ifdef __AARCH64EL__
PRINT_DEFINED(__AARCH64EL__)
# endif
# ifdef _MIPSEB
PRINT_DEFINED(_MIPSEB)
# endif
# ifdef _MIPSEL
PRINT_DEFINED(_MIPSEL)
# endif
# ifdef __MIPSEB
PRINT_DEFINED(__MIPSEB)
# endif
# ifdef __MIPSEL
PRINT_DEFINED(__MIPSEL)
# endif
# ifdef __MIPSEB__
PRINT_DEFINED(__MIPSEB__)
# endif
# ifdef __MIPSEL__
PRINT_DEFINED(__MIPSEL__)
# endif

#else
printf( "no recognized endian macros detected\n" );
#endif

printf( "\n" );

#include "main-tail.cpp"

#endif // MACROS_ENDIAN_STD_CXX

