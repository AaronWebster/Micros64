#include <Int64String.h>
#include <Micros64.h>

void setup() { Serial.begin(115200); }

void loop() {
  Serial.print("microseconds: ");
  Serial.println(int64String(Micros64()));
  Serial.print("milliseconds: ");
  Serial.println(int64String(Millis64()));
  delay(500);
}
