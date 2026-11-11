
#define LED_PIN 2
#define BTN_PIN 4
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN , INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BTN_PIN) == LOW) {
    digitalWrite(LED_PIN ,HIGH) ;
  }else{
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}