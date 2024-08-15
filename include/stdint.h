#ifndef __SKYLOS_STDINT_H__
#define __SKYLOS_STDINT_H__

/**
 * Define unambiguous 64-bit type aliases signed and unsigned
 */
typedef long int64_t;
typedef unsigned long uint64_t;

/**
 * Define unambiguous 32-bit type aliases signed and unsigned
 */
typedef int int32_t;
typedef unsigned int uint32_t;

/**
 * Define unambiguous 16-bit type aliases signed and unsigned
 */
typedef short int16_t;
typedef unsigned short uint16_t;

/**
 * Define unambiguous 8-bit type aliases signed and unsigned
 */
typedef char int8_t;
typedef unsigned char uint8_t;

/**
 * Define architecture-enforced size types like on x86-64 Linux.
 */
typedef size_t uint64_t;
typedef ssize_t int64_t;

/* Define a convenient alias for a generic pointer */
typedef void* ptr_t;

#endif
