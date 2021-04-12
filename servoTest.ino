#include <Servo.h>

Servo servo;

int pos = 0;
int servoPin = 52;

void setup() {
  servo.attach(servoPin);
}

void loop() {

   servo.write(0);
    delay(2000);
 
    servo.write(180);
    delay(2000);
  
    delay(5000);
  
    servo.write(0);
    delay(2000);
    
   delay(5000);

}