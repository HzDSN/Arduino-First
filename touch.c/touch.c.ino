void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  while (true)
  {
    i = digitalRead(10);
    if (i == HIGH)
      digitalWrite(13, HIGH);
    else
      digitalWrite(13, LOW);
  }
}
