#include <Servo.h>
#include "servoControllers.h"
#include "movments.h"



void setup() {

  //servo motors
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  //servo2.write(100);

  //robot on/off swtich
  pinMode(toggle, INPUT);

  Serial.begin(9600);

}



void loop() { //main

  //while(digitalRead(toggle) == HIGH){

/* 
for (int pos = 0; pos < 180; pos ++){
    //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(12);
}

    for (int pos = 180; pos > 0; pos --){
    //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(12);
    }
*/
moveExample();
 // }
}








   
