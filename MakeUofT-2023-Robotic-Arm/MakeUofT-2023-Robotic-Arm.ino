#include <Servo.h>
#include "servoControllers.h"
#include "movments.h"


//servo postions 

//servo 2
int s2pos1 =0; //start pos
int s2pos2 =0; //end pos

//servo 3
int s3pos1 =0; //start pos
int s3pos2 =0; //end pos

//servo 4
int s4pos1 =0; //start pos
int s4pos2 =0; //end pos



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








   
