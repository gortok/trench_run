void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(analogRead(0) > 1000) {
  	Serial.println("ping")
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
