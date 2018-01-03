#ifndef HALF_H
#define HALF_H

#if (_MSC_VER < 1600)
typedef __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
#include <stdint.h>
#endif

uint32_t half_to_float( uint16_t h );
uint16_t half_from_float( uint32_t f );
uint16_t half_add( uint16_t arg0, uint16_t arg1 );
uint16_t half_mul( uint16_t arg0, uint16_t arg1 );

static inline uint16_t 
half_sub( uint16_t ha, uint16_t hb ) 
{
  // (a-b) is the same as (a+(-b))
  return half_add( ha, hb ^ 0x8000 );
}

#endif /* HALF_H */
