float sigal = 11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sigal = digitalRead(sigal);
Serial.println(sigal);
delay(100);
}
