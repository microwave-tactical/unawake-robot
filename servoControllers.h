Servo servo4; //base extension 
Servo servo2; //base roation
Servo servo3; //arm extension 

//servo postions 

//servo 2
int s2pos1 =0; //start pos
int s2pos2 =0; //end pos

//servo 3
int s3pos1; //start pos
int s3pos2; //end pos

//servo 4
int s4pos1; //start pos
int s4pos2; //end pos



//robot on/off swtich
int toggle = 5; 

//step delay
int delayTime = 15; 

//___________________________servo 2___________________________

void servo2CW(int s2pos1, int s2pos2){ //servo4 clock wise rotation
  for (int pos = s2pos1; pos < s2pos2; pos ++){
    //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(delayTime);
  }
}

void servo2CCW(int s2pos1, int s2pos2){ //servo4 counter clock wise rotation
  for (int pos = s2pos1; pos > s2pos2; pos --){
    //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(delayTime);
  }
}

//___________________________servo 3___________________________

void servo3CW(int s3pos1, int s3pos2){ //servo4 clock wise rotation
  for (int pos = s3pos1; pos < s3pos2; pos ++){
   // if (digitalRead(toggle) == LOW) break;
    servo3.write(pos);
        delay(delayTime);
  }
}

void servo3CCW(int s4pos1, int s4pos2){ //servo4 counter clock wise rotation
  for (int pos = s4pos2; pos > s4pos1; pos --){
   // if (digitalRead(toggle) == LOW) break;
    servo3.write(pos);
        delay(delayTime);
  }
}

//___________________________servo 4___________________________

void servo4CW(int s4pos1, int s4pos2){ //servo4 clock wise rotation
  for (int pos = s4pos1; pos < s4pos2; pos ++){
   // if (digitalRead(toggle) == LOW) break;
    servo4.write(pos);
        delay(delayTime);
  }
}

void servo4CCW(int s4pos1, int s4pos2){ //servo4 counter clock wise rotation
  for (int pos = s4pos2; pos > s4pos1; pos --){
   // if (digitalRead(toggle) == LOW) break;
    servo4.write(pos);
    delay(delayTime);
  }
}
