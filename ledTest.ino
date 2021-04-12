
int led01 = 39;
int led02 = 46;
int led03 = 51;
int led04 = 53;

void setup() {
pinMode(led01,OUTPUT);
pinMode(led02,OUTPUT);
pinMode(led03,OUTPUT);
pinMode(led04,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led01,HIGH);
delay(500);
digitalWrite(led01,LOW);
digitalWrite(led02,HIGH);
delay(500);
digitalWrite(led02,LOW);
digitalWrite(led03,HIGH);
delay(500);
digitalWrite(led03,LOW);
digitalWrite(led04,HIGH);
delay(500);
digitalWrite(led04,LOW);
}