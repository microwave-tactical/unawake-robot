#include <Servo.h>
#include "servoControllers.h"
#include "movments.h"

int led = 13; 
int anger = 0;

void setup() {

  //servo motors
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);


  pinMode(toggle, INPUT);   //robot on/off swtich
  pinMode(led, OUTPUT); // on board LED indicates whether it is trying to move or not

  Serial.begin(9600);

  // move servos to home positions
  movementHome();

}



void loop() { //main
/*
  while(digitalRead(toggle) == LOW){
    // Idle waiting for switch
  }
  anger++;
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
    }
    //Serial.println(anger);
  }
*/

  //moveExample();
  //movement1();
}





   
