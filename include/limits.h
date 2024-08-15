#ifndef __SKYLOS_LIMITS_H__
#define __SKYLOS_LIMITS_H__

/* Define type-specific minima and maxima for 1-byte char types */
#ifndef SCHAR_MIN
#define SCHAR_MIN -128
#endif

#ifndef SCHAR_MAX
#define SCHAR_MAX 127
#endif

#ifndef UCHAR_MAX
#define UCHAR_MAX 255
#endif

/* Define type-specific minima and maxima for 2-byte short types */
#ifndef SHORT_MIN
#define SHORT_MIN -32768
#endif

#ifndef SHORT_MAX
#define SHORT_MAX 32767
#endif

#ifndef USHORT_MAX
#define USHORT_MAX 65535
#endif

/* Define type-specific minima and maxima for 4-byte int types (based on 64-bit
 * target) */
#ifndef INT_MIN
#define INT_MIN -2147483648
#endif

#ifndef INT_MAX
#define INT_MAX 2147483647
#endif

#ifndef UINT_MAX
#define UINT_MAX 4294967295
#endif

/* 
 * Define type-specific minima and maxima for 8-byte long types (based on
 * 64-bit target). Secondarily, define minima and maxima for architecture-
 * defined size types (based on 64-bit target).
 */
#ifndef LONG_MIN 
#define LONG_MIN -9223372036854775808L 
#define SSIZE_MIN LONG_MIN 
#endif

#ifndef LONG_MAX
#define LONG_MAX 9223372036854775807L
#define SSIZE_MAX LONG_MAX
#endif

#ifndef ULONG_MAX
#define ULONG_MAX 18446744073709551615UL
#define SIZE_MAX ULONG_MAX
#endif

#endif
