#include "Micros64.h"

uint64_t Micros64() {
  static uint32_t low, high;
  uint32_t new_low = micros();
  if (new_low < low) high++;
  low = new_low;
  return static_cast<uint64_t>(high) << 32 | low;
}

uint64_t Millis64() {
  static uint32_t low, high;
  uint32_t new_low = millis();
  if (new_low < low) high++;
  low = new_low;
  return static_cast<uint64_t>(high) << 32 | low;
}
