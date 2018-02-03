void setup() {
pinMode(9,OUTPUT); //step
pinMode(8,OUTPUT); //dirección
digitalWrite(8,1);
}

void loop() {
digitalWrite(9,1);
delay(300);
digitalWrite(9,0);
delay(300);
}
