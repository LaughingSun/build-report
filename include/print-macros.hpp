/*


Copyright (c) <2015> <Erich Horn and LaughingSun>


Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:


The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.


THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.


 */


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

