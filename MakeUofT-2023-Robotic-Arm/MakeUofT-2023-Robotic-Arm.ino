#include <Servo.h>
#include "servoControllers.h"
#include "movments.h"



void setup() {

  //servo motors
  servo4.attach(2);
  servo2.attach(3);
  servo3.attach(4);

  //robot on/off swtich
  pinMode(toggle, INPUT);

  Serial.begin(9600);

}



void loop() { //main

  //while(digitalRead(toggle) == HIGH){

  

  //call robot movments
  moveExample(); 


 // }
}








   
