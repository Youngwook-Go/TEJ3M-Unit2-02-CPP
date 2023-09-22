/*
C++ code
Created by: Youngwook Go
Created on: Sep 2023
Blinks LED for increasing time
*/

int blinkTime = 1000;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  blinkTime = blinkTime + 1000;
}
