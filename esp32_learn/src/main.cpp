#include <Arduino.h>
int press = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(5, OUTPUT);
  pinMode(13, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  press = digitalRead(13);
  Serial.println(press);
  if(press == 0){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }
}
