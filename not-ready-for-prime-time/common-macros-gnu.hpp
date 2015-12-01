
include "common-macros-print.hpp"

#  ifdef __COUNTER__
  PRINT_VALUE(__COUNTER__)
#  endif
#  ifdef __GFORTRAN__
  PRINT_VALUE(__GFORTRAN__)
#  endif
#  ifdef __GNUC__
  PRINT_VALUE(__GNUC__)
#  endif
#  ifdef __GNUC_MINOR__
  PRINT_VALUE(__GNUC_MINOR__)
#  endif
#  ifdef __GNUC_PATCHLEVEL__
  PRINT_VALUE(__GNUC_PATCHLEVEL__)
#  endif
#  ifdef __GNUG__
  PRINT_VALUE(__GNUG__)
#  endif
#  ifdef __STRICT_ANSI__
  PRINT_VALUE(__STRICT_ANSI__)
#  endif
#  ifdef __BASE_FILE__
  PRINT_VALUE(__BASE_FILE__)
#  endif
#  ifdef __INCLUDE_LEVEL__
  PRINT_VALUE(__INCLUDE_LEVEL__)
#  endif
#  ifdef __ELF__
  PRINT_VALUE(__ELF__)
#  endif
#  ifdef __VERSION__
  PRINT_VALUE(__VERSION__)
#  endif
#  ifdef __OPTIMIZE__
  PRINT_VALUE(__OPTIMIZE__)
#  endif
#  ifdef __OPTIMIZE_SIZE__
  PRINT_VALUE(__OPTIMIZE_SIZE__)
#  endif
#  ifdef __NO_INLINE__
  PRINT_VALUE(__NO_INLINE__)
#  endif
#  ifdef __GNUC_GNU_INLINE__
  PRINT_VALUE(__GNUC_GNU_INLINE__)
#  endif
#  ifdef __GNUC_STDC_INLINE__
  PRINT_VALUE(__GNUC_STDC_INLINE__)
#  endif
#  ifdef __CHAR_UNSIGNED__
  PRINT_VALUE(__CHAR_UNSIGNED__)
#  endif
#  ifdef __WCHAR_UNSIGNED__
  PRINT_VALUE(__WCHAR_UNSIGNED__)
#  endif
#  ifdef __REGISTER_PREFIX__
// generates expansion error
//  PRINT_VALUE(__REGISTER_PREFIX__)
#  endif
#  ifdef __USER_LABEL_PREFIX__
// generates expansion error
//  PRINT_VALUE(__USER_LABEL_PREFIX__)
#  endif
#  ifdef __SIZE_TYPE__
// generates expansion error
//  PRINT_VALUE(__SIZE_TYPE__)
#  endif
#  ifdef __PTRDIFF_TYPE__
// generates expansion error
//  PRINT_VALUE(__PTRDIFF_TYPE__)
#  endif
#  ifdef __WCHAR_TYPE__
// generates expansion error
//  PRINT_VALUE(__WCHAR_TYPE__)
#  endif
#  ifdef __WINT_TYPE__
// generates expansion error
//  PRINT_VALUE(__WINT_TYPE__)
#  endif
#  ifdef __INTMAX_TYPE__
// generates expansion error
//  PRINT_VALUE(__INTMAX_TYPE__)
#  endif
#  ifdef __UINTMAX_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINTMAX_TYPE__)
#  endif
#  ifdef __SIG_ATOMIC_TYPE__
// generates expansion error
//  PRINT_VALUE(__SIG_ATOMIC_TYPE__)
#  endif
#  ifdef __INT8_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT8_TYPE__)
#  endif
#  ifdef __INT16_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT16_TYPE__)
#  endif
#  ifdef __INT32_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT32_TYPE__)
#  endif
#  ifdef __INT64_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT64_TYPE__)
#  endif
#  ifdef __UINT8_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT8_TYPE__)
#  endif
#  ifdef __UINT16_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT16_TYPE__)
#  endif
#  ifdef __UINT32_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT32_TYPE__)
#  endif
#  ifdef __UINT64_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT64_TYPE__)
#  endif
#  ifdef __INT_LEAST8_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_LEAST8_TYPE__)
#  endif
#  ifdef __INT_LEAST16_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_LEAST16_TYPE__)
#  endif
#  ifdef __INT_LEAST32_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_LEAST32_TYPE__)
#  endif
#  ifdef __INT_LEAST64_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_LEAST64_TYPE__)
#  endif
#  ifdef __UINT_LEAST8_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_LEAST8_TYPE__)
#  endif
#  ifdef __UINT_LEAST16_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_LEAST16_TYPE__)
#  endif
#  ifdef __UINT_LEAST32_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_LEAST32_TYPE__)
#  endif
#  ifdef __UINT_LEAST64_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_LEAST64_TYPE__)
#  endif
#  ifdef __INT_FAST8_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_FAST8_TYPE__)
#  endif
#  ifdef __INT_FAST16_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_FAST16_TYPE__)
#  endif
#  ifdef __INT_FAST32_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_FAST32_TYPE__)
#  endif
#  ifdef __INT_FAST64_TYPE__
// generates expansion error
//  PRINT_VALUE(__INT_FAST64_TYPE__)
#  endif
#  ifdef __UINT_FAST8_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_FAST8_TYPE__)
#  endif
#  ifdef __UINT_FAST16_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_FAST16_TYPE__)
#  endif
#  ifdef __UINT_FAST32_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_FAST32_TYPE__)
#  endif
#  ifdef __UINT_FAST64_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINT_FAST64_TYPE__)
#  endif
#  ifdef __INTPTR_TYPE__
// generates expansion error
//  PRINT_VALUE(__INTPTR_TYPE__)
#  endif
#  ifdef __UINTPTR_TYPE__
// generates expansion error
//  PRINT_VALUE(__UINTPTR_TYPE__)
#  endif
#  ifdef __CHAR_BIT__
  PRINT_VALUE(__CHAR_BIT__)
#  endif
#  ifdef __SCHAR_MAX__
  PRINT_VALUE(__SCHAR_MAX__)
#  endif
#  ifdef __WCHAR_MAX__
  PRINT_VALUE(__WCHAR_MAX__)
#  endif
#  ifdef __SHRT_MAX__
  PRINT_VALUE(__SHRT_MAX__)
#  endif
#  ifdef __INT_MAX__
  PRINT_VALUE(__INT_MAX__)
#  endif
#  ifdef __LONG_MAX__
  PRINT_VALUE(__LONG_MAX__)
#  endif
#  ifdef __LONG_LONG_MAX__
  PRINT_VALUE(__LONG_LONG_MAX__)
#  endif
#  ifdef __WINT_MAX__
  PRINT_VALUE(__WINT_MAX__)
#  endif
#  ifdef __SIZE_MAX__
  PRINT_VALUE(__SIZE_MAX__)
#  endif
#  ifdef __PTRDIFF_MAX__
  PRINT_VALUE(__PTRDIFF_MAX__)
#  endif
#  ifdef __INTMAX_MAX__
  PRINT_VALUE(__INTMAX_MAX__)
#  endif
#  ifdef __UINTMAX_MAX__
  PRINT_VALUE(__UINTMAX_MAX__)
#  endif
#  ifdef __SIG_ATOMIC_MAX__
  PRINT_VALUE(__SIG_ATOMIC_MAX__)
#  endif
#  ifdef __INT8_MAX__
  PRINT_VALUE(__INT8_MAX__)
#  endif
#  ifdef __INT16_MAX__
  PRINT_VALUE(__INT16_MAX__)
#  endif
#  ifdef __INT32_MAX__
  PRINT_VALUE(__INT32_MAX__)
#  endif
#  ifdef __INT64_MAX__
  PRINT_VALUE(__INT64_MAX__)
#  endif
#  ifdef __UINT8_MAX__
  PRINT_VALUE(__UINT8_MAX__)
#  endif
#  ifdef __UINT16_MAX__
  PRINT_VALUE(__UINT16_MAX__)
#  endif
#  ifdef __UINT32_MAX__
  PRINT_VALUE(__UINT32_MAX__)
#  endif
#  ifdef __UINT64_MAX__
  PRINT_VALUE(__UINT64_MAX__)
#  endif
#  ifdef __INT_LEAST8_MAX__
  PRINT_VALUE(__INT_LEAST8_MAX__)
#  endif
#  ifdef __INT_LEAST16_MAX__
  PRINT_VALUE(__INT_LEAST16_MAX__)
#  endif
#  ifdef __INT_LEAST32_MAX__
  PRINT_VALUE(__INT_LEAST32_MAX__)
#  endif
#  ifdef __INT_LEAST64_MAX__
  PRINT_VALUE(__INT_LEAST64_MAX__)
#  endif
#  ifdef __UINT_LEAST8_MAX__
  PRINT_VALUE(__UINT_LEAST8_MAX__)
#  endif
#  ifdef __UINT_LEAST16_MAX__
  PRINT_VALUE(__UINT_LEAST16_MAX__)
#  endif
#  ifdef __UINT_LEAST32_MAX__
  PRINT_VALUE(__UINT_LEAST32_MAX__)
#  endif
#  ifdef __UINT_LEAST64_MAX__
  PRINT_VALUE(__UINT_LEAST64_MAX__)
#  endif
#  ifdef __INT_FAST8_MAX__
  PRINT_VALUE(__INT_FAST8_MAX__)
#  endif
#  ifdef __INT_FAST16_MAX__
  PRINT_VALUE(__INT_FAST16_MAX__)
#  endif
#  ifdef __INT_FAST32_MAX__
  PRINT_VALUE(__INT_FAST32_MAX__)
#  endif
#  ifdef __INT_FAST64_MAX__
  PRINT_VALUE(__INT_FAST64_MAX__)
#  endif
#  ifdef __UINT_FAST8_MAX__
  PRINT_VALUE(__UINT_FAST8_MAX__)
#  endif
#  ifdef __UINT_FAST16_MAX__
  PRINT_VALUE(__UINT_FAST16_MAX__)
#  endif
#  ifdef __UINT_FAST32_MAX__
  PRINT_VALUE(__UINT_FAST32_MAX__)
#  endif
#  ifdef __UINT_FAST64_MAX__
  PRINT_VALUE(__UINT_FAST64_MAX__)
#  endif
#  ifdef __INTPTR_MAX__
  PRINT_VALUE(__INTPTR_MAX__)
#  endif
#  ifdef __UINTPTR_MAX__
  PRINT_VALUE(__UINTPTR_MAX__)
#  endif
#  ifdef __WCHAR_MIN__
  PRINT_VALUE(__WCHAR_MIN__)
#  endif
#  ifdef __WINT_MIN__
  PRINT_VALUE(__WINT_MIN__)
#  endif
#  ifdef __SIG_ATOMIC_MIN__
  PRINT_VALUE(__SIG_ATOMIC_MIN__)
#  endif
#  ifdef __INT8_C
// generates expansion error
//  PRINT_VALUE(__INT8_C)
#  endif
#  ifdef __INT16_C
// generates expansion error
//  PRINT_VALUE(__INT16_C)
#  endif
#  ifdef __INT32_C
// generates expansion error
//  PRINT_VALUE(__INT32_C)
#  endif
#  ifdef __INT64_C
// generates expansion error
//  PRINT_VALUE(__INT64_C)
#  endif
#  ifdef __UINT8_C
// generates expansion error
//  PRINT_VALUE(__UINT8_C)
#  endif
#  ifdef __UINT16_C
// generates expansion error
//  PRINT_VALUE(__UINT16_C)
#  endif
#  ifdef __UINT32_C
// generates expansion error
//  PRINT_VALUE(__UINT32_C)
#  endif
#  ifdef __UINT64_C
// generates expansion error
//  PRINT_VALUE(__UINT64_C)
#  endif
#  ifdef __INTMAX_C
// generates expansion error
//  PRINT_VALUE(__INTMAX_C)
#  endif
#  ifdef __UINTMAX_C
// generates expansion error
//  PRINT_VALUE(__UINTMAX_C)
#  endif
#  ifdef __SIZEOF_INT__
  PRINT_VALUE(__SIZEOF_INT__)
#  endif
#  ifdef __SIZEOF_LONG__
  PRINT_VALUE(__SIZEOF_LONG__)
#  endif
#  ifdef __SIZEOF_LONG_LONG__
  PRINT_VALUE(__SIZEOF_LONG_LONG__)
#  endif
#  ifdef __SIZEOF_SHORT__
  PRINT_VALUE(__SIZEOF_SHORT__)
#  endif
#  ifdef __SIZEOF_POINTER__
  PRINT_VALUE(__SIZEOF_POINTER__)
#  endif
#  ifdef __SIZEOF_FLOAT__
  PRINT_VALUE(__SIZEOF_FLOAT__)
#  endif
#  ifdef __SIZEOF_DOUBLE__
  PRINT_VALUE(__SIZEOF_DOUBLE__)
#  endif
#  ifdef __SIZEOF_LONG_DOUBLE__
  PRINT_VALUE(__SIZEOF_LONG_DOUBLE__)
#  endif
#  ifdef __SIZEOF_SIZE_T__
  PRINT_VALUE(__SIZEOF_SIZE_T__)
#  endif
#  ifdef __SIZEOF_WCHAR_T__
  PRINT_VALUE(__SIZEOF_WCHAR_T__)
#  endif
#  ifdef __SIZEOF_WINT_T__
  PRINT_VALUE(__SIZEOF_WINT_T__)
#  endif
#  ifdef __SIZEOF_PTRDIFF_T__
  PRINT_VALUE(__SIZEOF_PTRDIFF_T__)
#  endif
#  ifdef __BYTE_ORDER__
  PRINT_VALUE(__BYTE_ORDER__)
#  endif
#  ifdef __ORDER_LITTLE_ENDIAN__
  PRINT_VALUE(__ORDER_LITTLE_ENDIAN__)
#  endif
#  ifdef __ORDER_BIG_ENDIAN__
  PRINT_VALUE(__ORDER_BIG_ENDIAN__)
#  endif
#  ifdef __ORDER_PDP_ENDIAN__
  PRINT_VALUE(__ORDER_PDP_ENDIAN__)
#  endif
#  ifdef __FLOAT_WORD_ORDER__
  PRINT_VALUE(__FLOAT_WORD_ORDER__)
#  endif
#  ifdef __DEPRECATED
  PRINT_VALUE(__DEPRECATED)
#  endif
#  ifdef __EXCEPTIONS
  PRINT_VALUE(__EXCEPTIONS)
#  endif
#  ifdef __GXX_RTTI
  PRINT_VALUE(__GXX_RTTI)
#  endif
#  ifdef __USING_SJLJ_EXCEPTIONS__
  PRINT_VALUE(__USING_SJLJ_EXCEPTIONS__)
#  endif
#  ifdef __GXX_EXPERIMENTAL_CXX0X__
  PRINT_VALUE(__GXX_EXPERIMENTAL_CXX0X__)
#  endif
#  ifdef __GXX_WEAK__
  PRINT_VALUE(__GXX_WEAK__)
#  endif
#  ifdef __NEXT_RUNTIME__
  PRINT_VALUE(__NEXT_RUNTIME__)
#  endif
#  ifdef __LP64__
  PRINT_VALUE(__LP64__)
#  endif
#  ifdef _LP64
  PRINT_VALUE(_LP64)
#  endif
#  ifdef __SSP__
  PRINT_VALUE(__SSP__)
#  endif
#  ifdef __SSP_ALL__
  PRINT_VALUE(__SSP_ALL__)
#  endif
#  ifdef __SSP_STRONG__
  PRINT_VALUE(__SSP_STRONG__)
#  endif
#  ifdef __SSP_EXPLICIT__
  PRINT_VALUE(__SSP_EXPLICIT__)
#  endif
#  ifdef __SANITIZE_ADDRESS__
  PRINT_VALUE(__SANITIZE_ADDRESS__)
#  endif
#  ifdef __TIMESTAMP__
  PRINT_VALUE(__TIMESTAMP__)
#  endif
#  ifdef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1
  PRINT_VALUE(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1)
#  endif
#  ifdef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2
  PRINT_VALUE(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2)
#  endif
#  ifdef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4
  PRINT_VALUE(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
#  endif
#  ifdef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8
  PRINT_VALUE(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8)
#  endif
#  ifdef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16
  PRINT_VALUE(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_16)
#  endif
#  ifdef __GCC_HAVE_DWARF2_CFI_ASM
  PRINT_VALUE(__GCC_HAVE_DWARF2_CFI_ASM)
#  endif
#  ifdef __FP_FAST_FMA
  PRINT_VALUE(__FP_FAST_FMA)
#  endif
#  ifdef __FP_FAST_FMAF
  PRINT_VALUE(__FP_FAST_FMAF)
#  endif
#  ifdef __FP_FAST_FMAL
  PRINT_VALUE(__FP_FAST_FMAL)
#  endif
#  ifdef __GCC_IEC_559
  PRINT_VALUE(__GCC_IEC_559)
#  endif
#  ifdef __GCC_IEC_559_COMPLEX
  PRINT_VALUE(__GCC_IEC_559_COMPLEX)
#  endif
#  ifdef __NO_MATH_ERRNO__
  PRINT_VALUE(__NO_MATH_ERRNO__)
#  endif
