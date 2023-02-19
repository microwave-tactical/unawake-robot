#include "taqellia.h"
//enter coordinates for movments 

void moveExample(){

  // base roation servo2
    // 60 left, 150 right, 105 center
  servomv(2, 60, 150);
  servomv(2, 150, 60);


  delay(200); //delay is needed to make it move in sequrence
    
  // arm extension servo3
    // low 120 if facing switch
    // low 105 anywhere else
    // high 70

  servomv(3, 85, 105);
  servomv(3, 105, 85);

  delay(200);

   
  // end extension servo4
    // low 180 high 20
  
  servomv(4, 20, 180);
  servomv(4, 180, 20);
  delay(200);

  
}


// moves all servos to home positions
void movementHome(){

  servo2.write(97);
  servo3.write(105);
  servo4.write(180);
}


void movement1(){ //default
  //setting the RGB LED -> Green Light
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 255);
  //analogWrite(Blue_LED, 0);
  
  servomv(3, 105, 90);
  delay(50);
  servomv_dual(3, 90, 87, 4, 180, 150);
  delay(300);
  servomv_dual(3, 87, 105, 4, 150, 180); 
  delay(300);

  //turning the RGB LED off
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);  
}

void movement2(){ //confused, hesitent
  //setting RGB LED -> Green Light
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 255);
  //analogWrite(Blue_LED, 0);

  /*
  Desired actions:
  - slowly approach the switch
  - pause
  - flick the switch and shuts down
   */
  
   //this came from 3
  servomv(3, 105, 90);
  delay(50);
  servomv_dual(3, 90, 87, 4, 180, 150);
  delay(300);
  servomv_dual(3, 87, 105, 4, 150, 180); 
  delay(300);

  //turning the RGB LED off
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);  
}

void movement3(){ //annoyed, "okay, buddy"
  //setting RGB LED -> Orange Light
  //analogWrite(Red_LED, 255);
  //analogWrite(Green_LED, 20);
  //analogWrite(Blue_LED, 0);

  //positions still need to be changed
  /*
  Desired actions:
  - pause for a moment before pointing toward observer with a jab
  - shake back and forth minutely in a 'no' gesture
  - flick the switch and shut down
   */


  servomv(2,105,150); //shake head
  delay(50); 
  servomv(2,150,60);//shake head
  delay(50); 
   
   servomv(2,60,97); //return rotation to certern 
   //turn off switch
  servomv(3, 105, 90);
  delay(50);
  servomv_dual(3, 90, 87, 4, 180, 150);
  delay(300);
  servomv_dual(3, 87, 105, 4, 150, 180); 
  delay(300);

  /* you told me to move this from 2 to 3
     servomv(2, 105, 110);
  delay(50);
  servomv(2, 110, 85);
  delay(50);
  servomv(2, 85, 115);
  delay(50);
  servomv(2, 115, 105);
  delay(50);
   */


  //turning the RGB LED off
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);
}

void movement4(){
  //setting RGB LED -> Red Light
  //analogWrite(Red_LED, 255);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);
  /*
  Desired actions:
  - throw second segment up in frustration, don't knock off dunce cap
  -- "why, Lord?" style shakes
  - turn back and forth (move around a bit)
  - flick the switch and shuts down
   */
   
   delay(200);
   servomv(3, 90, 110); //raise up
   delay(10);
   


     //servomv(4, 180, 20); //hands go up
   servo4.write(150);
   delay(10);
   //servomv(4, 20, 180); //hands go down
   servo4.write(20);
   delay(10);
      delay(10);

  
   delay(10);
   
     //turn off switch
  servomv(3, 105, 90);
  delay(50);
  servomv_dual(3, 90, 87, 4, 180, 150);
  delay(300);
  servomv_dual(3, 87, 105, 4, 150, 180); 
  delay(300);


  //turning the RGB LED off
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);
}

void movement5(){
  //setting RGB LED -> Red Light
  //analogWrite(Red_LED, 255);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);
  
  /*
  Desired actions:
  - play Tequila from buzzer
  - robot has a little freak out
  -- throw hands up in frustration, knocking off the dunce cap
  - when the song ends, robot flicks the switch and shuts down
   */
    servomv(2, 97, 110);
    delay(50);
    servomv(2, 110, 85);
    delay(50);
    servomv(2, 85, 115);
    delay(50);
    servomv(2, 115, 97);
    delay(50);
  
  taquellia();
  
servo4.write(90);
servo3.write(120);

delay(500);

servomv_dual(3, 120, 105, 4, 90, 180);

while(digitalRead(toggle) == HIGH){

  servomv(3, 105, 90);
  delay(50);
  servomv_dual(3, 90, 87, 4, 180, 150);
  delay(300);
  servomv_dual(3, 87, 105, 4, 150, 180); 
  delay(300);

}

  //turning the RGB LED off
  //analogWrite(Red_LED, 0);
  //analogWrite(Green_LED, 0);
  //analogWrite(Blue_LED, 0);
}

void danceydance(){ //if we cannot toggle the switch, call this function for demo 
  /*
  Desired actions:
  - make the robot wiggle to dance to the song
   */

taquellia();

servo4.write(90);
servo3.write(120);

delay(500);

servomv_dual(3, 120, 105, 4, 90, 180);

/*
  servomv(2, 97, 130);
  delay(50);
  servomv_dual(3, 105, 90, 4, 180, 130);
  //taquellia(0, 14);
  
  servomv_dual(3, 90, 105, 4, 130, 180);
  servomv(2, 130, 85);
  servomv_dual(3, 105, 90, 4, 180, 130);
  //taquellia(26,24);
  
  servomv_dual(3, 90, 105, 4, 130, 180);
  servomv(2, 85, 130);
  delay(50);
  servomv_dual(3, 105, 90, 4, 180, 130);
  //taquellia(100,57);
  
  servomv_dual(3, 90, 105, 4, 130, 180);
  
  servomv(2, 130, 97);
  delay(50);
  servomv_dual(3, 105, 100, 4, 180, 130);
  taquellia(144, 82);

  servomv(4, 130, 100);
  delay(100);
  servomv_dual(3, 100, 105, 4, 100, 180);
  */

}
 
