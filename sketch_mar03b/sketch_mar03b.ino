void setup() {
// put your setup code here, to run once:
pinMode(3,OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
analogWrite(3,0);
delay(100);

analogWrite(3,50);
delay(100);
analogWrite(3,75);
delay(100);
analogWrite(3,100);
delay(100);
analogWrite(3,125);
delay(100);
analogWrite(3,150);
delay(100);
analogWrite(3,175);
delay(100);
analogWrite(3,200);
delay(100);
analogWrite(3,225);
delay(100);
analogWrite(3,250);
delay(100);
}
