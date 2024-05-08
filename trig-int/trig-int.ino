#define PIN_TRIG 1

void setup() {
  Serial.begin(115200);
  attachInterrupt(digitalPinToInterrupt(PIN_TRIG), func, RISING);
  
}

void loop() {
}

void func() {
  Serial.println("i");
}