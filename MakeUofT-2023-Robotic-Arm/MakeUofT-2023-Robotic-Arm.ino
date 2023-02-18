#include <Servo.h>

Servo servo4; //base roation
Servo servo2; //base extension 
Servo servo3; //arm extension 

int pos1;

int toggle = 5; //robot on/off swtich

int servo_position = 0;    //servo position
 
void setup() {

  //servo motors
  servo4.attach(2);
  servo2.attach(3);
  servo3.attach(4);

  //robot on/off swtich
  pinMode(toggle, INPUT);
  pinMode(13, OUTPUT);
  

  Serial.begin(9600);

}

void move1(){
  
  for (servo_position = 0; servo_position <=180; servo_position +=1 ){   //pin 9 for yellow, middle is 5v, black or brown is ground 
      if (digitalRead(toggle) == LOW) break;
      delay(8);
      servo4.write(servo_position);
  }


    for (servo_position= 180; servo_position >=0; servo_position -=1){
         if (digitalRead(toggle) == LOW) break;
         delay(8);
         servo4.write(servo_position);
   }
  
  }



void loop() {

  while(digitalRead(toggle) == HIGH){

  move1();

 
delay(200);
 

  



  }
  digitalWrite(13,LOW);
}








   
