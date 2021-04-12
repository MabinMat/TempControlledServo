#include  <dht.h>

int tempPin = A0;

dht DHT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  Serial.println("**TEMP SENSOR TEST**\n");
  delay(1000);
  

}

void loop() {
 DHT.read11(tempPin);

 Serial.print("Humibidty = ");
 Serial.print(DHT.humidity);
 Serial.print("% ");
 Serial.print("temperature = ");
 Serial.print(DHT.temperature); 
  Serial.println("C  ");
    
   delay(5000);//Wait 5 seconds before accessing sensor again.
   //Fastest should be once every two seconds.

}