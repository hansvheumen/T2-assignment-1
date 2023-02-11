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
  pinMode(A0, INPUT_PULLUP);  
}

void loop()
{
  int value = analogRead(A0);
  log("A0", value);
  delay(2000);
}
