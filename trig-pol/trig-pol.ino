// trig-pol.ino ポーリングでクロック

#define PIN_TRIG 33

void setup() {
  Serial.begin(115200);
  pinMode(PIN_TRIG, INPUT);
  Serial.print("a");
}

void loop() {
  if (digitalRead(PIN_TRIG) == LOW) {
    // do nothing
  } else {
    func();
  }
}

void func() {
  Serial.println(millis());
  while(digitalRead(PIN_TRIG) == HIGH){}
}