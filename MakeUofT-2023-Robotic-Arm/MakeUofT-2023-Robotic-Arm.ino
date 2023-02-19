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
;
  while(digitalRead(toggle) == LOW){
    // Idle waiting for switch
  }
  delay(200);
  anger++;
  Serial.println(anger);
  while(digitalRead(toggle) == HIGH){ // Don't exit until switch is flipped back to rest state
    digitalWrite(led, HIGH);
    
    //Serial.println(anger);
    delay(200);
    switch (anger) {   
      case 1:
        delay(50);
        movement1();
        break;
      case 2:
        delay(50);
        movement2();
        break;
      case 3:  
        delay(50);
        movement3();
        break;
      case 4:
        delay(50);
        movement4();
        break;
      case 5:
        delay(50);
        movement5();
        break;
      case 6:
        delay(50);
        while(1){

        
        }
        break;
    }
    //Serial.println(anger);
  }


  //moveExample();
  //movement5();

  //in case we can't get the switch to toggle, do this for the demo
  //danceydance();
  
  //1st
  //taquellia(0,14);
  //2nd
  //taquellia(26,24);
  //3rd
  //taquellia(100,57);
  //4th
  //taquellia(144, 82);
}





   
