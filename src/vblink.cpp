#include <Arduino.h>

#define LED LED_BUILTIN

int offtime;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int local_ontime = random(100,1000);
  offtime = local_ontime + offtime;
  if (offtime > 3000) {
    offtime = 100;
  }
  digitalWrite(LED, HIGH);
  delay(local_ontime);
  digitalWrite(LED, LOW);
  delay(offtime);
}
