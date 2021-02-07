#include "Cirice.h"
#define sen 1500

void setup() {
ledcSetup(0,8000000,2);
  Serial.begin(115200);
  // attach the channel to the GPIO2 to be controlled
ledcAttachPin(4, 0);
Serial.begin(115200);

}
int i=0;
void loop() {
  i++;
  ledcSetup(0,(7000000+(samples[i]*sen)),2);
  ledcWrite(0,2);
  delayMicroseconds(90);
  if(i==sampleCount){i=0;Serial.println("done");}
}
