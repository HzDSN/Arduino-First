int c = 'C';
int status = 1;

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  c = Serial.read();
  switch (c)
  {
    case 'O':
      status = 0;
      break;
    case 'C':
      status = 1;
      break;
    default:
      if (c != -1) status = 2;
      break;
  }
  switch (status)
  {
    case 0:
      digitalWrite(13, HIGH);
      break;
    case 1:
      digitalWrite(13, LOW);
      break;
    case 2:
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      delay(500);
      break;
  }
}

