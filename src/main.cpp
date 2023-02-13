#include <Arduino.h>

#define DEBUG true

#if DEBUG == true
#define log(message, value) Serial.print(message); Serial.print(":  "); Serial.println(value);
#else
#define log(message, value) 
#endif


void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT_PULLUP);  
  log("setup", "done");
}

void loop()
{
  int value = analogRead(A0);
  log("A0", value);
  delay(2000);
}
