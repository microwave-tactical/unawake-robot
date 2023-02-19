#include <Servo.h>
#include "servoControllers.h"
#include "movments.h"


int led = 13; 
int anger = 0;

//Adding RGB LED
//const int Red_LED = 6;
//const int Green_LED = 7;
//const int Blue_LED = 8;

void setup() {

  //servo motors
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);


  pinMode(toggle, INPUT);   //robot on/off swtich
  pinMode(led, OUTPUT); // on board LED indicates whether it is trying to move or not
  //setting up the RGB
  //pinMode(Red_LED, OUTPUT);
  //pinMode(Green_LED, OUTPUT);
  //pinMode(Blue_LED, OUTPUT);

  Serial.begin(9600);

  // move servos to home positions
  movementHome();

}



void loop() { //main

  while(digitalRead(toggle) == LOW){
    // Idle waiting for switch
  }
  /*anger++;
  while(digitalRead(toggle) == HIGH){ // Don't exit until switch is flipped back to rest state
    digitalWrite(led, HIGH);
    
    //Serial.println(anger);
    switch (anger) {   
      case 1:
        movement1();
        break;
      case 2:
        movement2();
        break;
      case 3:  
        //movement3();
        break;
      case 4:
        //movement4();
        break;
      case 5:
        //movement5();
        break;
    }
    //Serial.println(anger);
  }
*/

  //moveExample();
  //movement1();

  //in case we can't get the switch to toggle, do this for the demo
  //danceydance();
}





   
