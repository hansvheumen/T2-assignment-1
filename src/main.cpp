#include <Arduino.h>


void log(String message, int value = 0)
{
  Serial.print(message);
  Serial.print(":  ");
  Serial.println(value);
}

void setup()
{
  Serial.begin(9600);
 

}

void loop()
{
 

}
