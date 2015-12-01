#ifndef COMMON_MACROS_PRINT_H
# define COMMON_MACROS_PRINT_H

# ifndef TODQUOTED
#  define TODQUOTED(s) #s
# endif
# ifndef PRINT_UNDEFINED
#  define PRINT_UNDEFINED(t) printf("  %-36s %26s\n",TODQUOTED(t),"(undefined)");
# endif
# ifndef PRINT_DEFINED
#  define PRINT_DEFINED(t) printf("  %-36s %26s\n",TODQUOTED(t),"(defined)");
# endif
# ifndef PRINT_UNSIGNED
#  define PRINT_UNSIGNED(t) printf("  %-36s %26lu\n",#t,(unsigned long)(t));
# endif
# ifndef PRINT_SIGNED
#  define PRINT_SIGNED(t) printf("  %-36s %26ld\n",#t,(long)(t));
# endif
# ifndef PRINT_STRING
#  define PRINT_STRING(t) printf("  %-36s %26s\n",#t,(t));
# endif
# ifndef PRINT_STRING_UNSIGNED
#  define PRINT_STRING_UNSIGNED(t,v) printf("  %-36s %26s %s\n",#t,#v,TODQUOTED([v]));
# endif
# ifndef PRINT_POINTER
#  define PRINT_POINTER(t) printf("  %-36s %26p\n",#t,(void*)(t));
# endif
# ifndef PRINT_SIZEOF
#  define PRINT_SIZEOF(t) printf("  %-36s %26lu\n", \
TODQUOTED(sizeof(t)),(unsigned long)sizeof(t));
# endif

#endif //COMMON_MACROS_PRINT_H

