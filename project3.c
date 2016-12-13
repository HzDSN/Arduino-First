void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(115200);
}

char c;

void loop() {
  // put your main code here, to run repeatedly:
  c = Serial.read();
  if(c == 'R')
  digitalWrite(13,HIGH);
}