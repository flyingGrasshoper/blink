#include <Blink.h>

Blink Blink(D4);

void setup(){
  Serial.begin(115200);
  Serial.println("\nBlink Version 1.0 Ha Incheol");
}
void loop(){
  Blink.on(500);
  Blink.off(300);
}
