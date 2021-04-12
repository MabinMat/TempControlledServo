#include <Servo.h>
#include  <dht.h>
#include <LiquidCrystal.h>

Servo servo;
int pos = 0;
int servoPin = 52;

int tempPin = A0;
dht DHT;


int led01 = 8;
int led02 = 9;
int led03 = 10;
int led04 = 11;


int rs = 7;
int en = 6;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;

int temp = 0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
 servo.attach(servoPin);

pinMode(led01,OUTPUT);
pinMode(led02,OUTPUT);
pinMode(led03,OUTPUT);
pinMode(led04,OUTPUT);

lcd.begin(16, 2);
 
}

void loop() {
  // put your main code here, to run repeatedly:

//**DHT TEMPERATURE TESTER**
DHT.read11(tempPin);

//Serial.print("temperature = ");
//Serial.print(DHT.temperature); 
//Serial.println("C  ");

temp = DHT.temperature;

//**SERVO TESTER**
//servo.write(180);
// delay(2000);

lcd.setCursor(0,1);
lcd.print("Temperature:");
lcd.print(temp);
lcd.print("C ");

int led_val = map(temp,15,25,0,255);


analogWrite(led01,led_val);
analogWrite(led02,led_val);
analogWrite(led03,led_val);
analogWrite(led04,led_val);


if(temp > 20){
  servo.write(180);
  delay(1000);
}

else{
  servo.write(0);
  delay(1000);
}
//digitalWrite(led01,HIGH);
//digitalWrite(led02,HIGH);
//digitalWrite(led03,HIGH);
//digitalWrite(led04,HIGH);



}