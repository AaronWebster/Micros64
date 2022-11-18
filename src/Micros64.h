// Micros64 - 64-bit microseconds function.

#ifndef MICROS64_H_
#define MICROS64_H_

#include <Arduino.h>
#include <inttypes.h>

// Returns an unsigned 64-bit monotonic microseconds counter.
uint64_t Micros64();

// Returns an unsigned 64-bit monotonic milliseconds counter.
uint64_t Millis64();

#endif  // MICROS64_H_
