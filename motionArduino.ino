
#include <Servo.h>
volatile char v; 
Servo servo_7; 
 
void setup(){ 
  v = 0; 
  Serial.begin(9600); 
  servo_7.attach(7); 
} 
 
void loop(){ 
  v = Serial.read(); 
  if (Serial.available() > 0) { 
    if (v == 'A') { 
      servo_7.write(0); 
      delay(100); 
 
    } 
    if (v == 'B') { 
      servo_7.write(180); 
      delay(100); 
 
    } 
 
  } 
 
}
