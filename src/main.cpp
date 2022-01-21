//Basic
#include "Arduino.h"
         

void setup()
{
  Serial.begin(115200);


}
const int potPin = 12;
int potValue = 0;

void loop()
{





  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}