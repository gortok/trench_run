void setup() {
  pinMode(13, OUTPUT);
}

void loop() {

  if(analogRead(0) > 1000) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
