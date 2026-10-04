int button = 4;
int led = 5;
int state = LOW;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) {
    delay(50);

    if (digitalRead(button) == LOW) {
      state = !state;
      digitalWrite(led, state);

      while (digitalRead(button) == LOW);
      delay(50);
    }
  }
}
