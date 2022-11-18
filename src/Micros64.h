// Micros64 - 64-bit microseconds function.

#ifndef MICROS64_H_
#define MICROS64_H_

#include <Arduino.h>
#include <inttypes.h>

#define MAKE_FUNCTION(name, now)                    \
  uint64_t name {                                   \
    static uint32_t low, high;                      \
    uint32_t new_low = now;                         \
    if (new_low < low) high++;                      \
    low = new_low;                                  \
    return static_cast<uint64_t>(high) << 32 | low; \
  }

// Returns an unsigned 64-bit monotonic microseconds counter.
MAKE_FUNCTION(Micros64(), micros())

// Returns an unsigned 64-bit monotonic milliseconds counter.
MAKE_FUNCTION(Millis64(), millis())

#undef MAKE_FUNCTION

#endif  // MICROS64_H_
