#include "audio.h" //audio.h would be your audio header file

#define sen 1500
#define outputPin 4
#define PWMchannel 0
#define carrier 7000000

void setup() {
ledcSetup(PWMchannel,carrier,2);
ledcAttachPin(outputPin, PWMchannel);
}

void loop() {
  ledcSetup(PWMchannel,(carrier+(samples[i]*sen)),2);
  ledcWrite(PWMchannel,outputPin);
  delayMicroseconds(1000000/sampleRate);
}
