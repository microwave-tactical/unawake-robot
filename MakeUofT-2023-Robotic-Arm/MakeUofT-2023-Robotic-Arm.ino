#include <Servo.h>
#include "servoControllers.h"


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



void loop() {

  //while(digitalRead(toggle) == HIGH){

  

  //functions to move servos and take in cords
  
  servo2CW(0, 180);
  delay(200);
  servo2CCW(180, 0);
  delay(200);

   servo3CW(0, 180);
  delay(200);
  servo3CCW(180, 0);
  delay(200);

 servo4CW(0, 180);
  delay(200);
  servo4CCW(180, 0);
  delay(200);


 // }
}








   
