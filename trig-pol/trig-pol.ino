// trig-pol.ino ポーリングでクロック

#define PIN_TRIG 1

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (digitalRead(PIN_TRIG) == LOW) {
    // do nothing
  } else {
    func();
  }
}

void func() {
  Serial.println("i");
}