#include <Blink.h>

Blink Blink(D4);

void setup(){
  Serial.begin(115200);
  Serial.println("\nBlink Version 1.0 Ha Incheol);
}
void loop(){
  blink.on(500);
  blink.off(300);
}
