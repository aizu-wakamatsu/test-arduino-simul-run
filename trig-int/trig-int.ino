#define PIN_TRIG 33

static int count = 0;
volatile bool flag_high = false;

void IRAM_ATTR func() {
  if (flag_high == false) {
    flag_high == true;
    Serial.println("i");
  }
}
void setup() {
  pinMode(PIN_TRIG, INPUT);
  Serial.begin(115200);
  attachInterrupt(digitalPinToInterrupt(PIN_TRIG), func, RISING);
}

void loop() {
}
