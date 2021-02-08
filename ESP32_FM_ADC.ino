#define sen 15
#define outputPin 4
#define PWMchannel 0
#define carrier 7000000
#define sampleRate 1000000/10000

void setup() {
ledcSetup(PWMchannel,carrier,2);
ledcAttachPin(outputPin, PWMchannel);
pinMode(35,INPUT);
Serial.begin(115200);
}

void loop() {
  ledcSetup(PWMchannel,(carrier+(analogRead(35)*sen)),2);
  ledcWrite(PWMchannel,2);
  delayMicroseconds(1000000/sampleRate);
}

//this needs a pre amp with DC level to work as it should
