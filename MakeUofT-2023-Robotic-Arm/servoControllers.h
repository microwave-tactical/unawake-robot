Servo servo4; //base roation
Servo servo2; //base extension 
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

//___________________________servo 2___________________________

void servo2CW(int s2pos1, int s2pos2){ //servo4 clock wise rotation
  for (int pos = s2pos1; pos < s2pos2; pos ++){
    //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(12);
  }
}

void servo2CCW(int s2pos1, int s2pos2){ //servo4 counter clock wise rotation
  for (int pos = s2pos1; pos > s2pos2; pos --){
    //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(12);
  }
}

//___________________________servo 3___________________________

void servo3CW(int s3pos1, int s3pos2){ //servo4 clock wise rotation
  for (int pos = s3pos1; pos <= s3pos2; pos += 1){
   // if (digitalRead(toggle) == LOW) break;
    delay(8);
    servo3.write(pos);
  }
}

void servo3CCW(int s4pos1, int s4pos2){ //servo4 counter clock wise rotation
  for (int pos = s4pos2; pos >= s4pos1; pos -= 1){
   // if (digitalRead(toggle) == LOW) break;
    delay(8);
    servo3.write(pos);
  }
}

//___________________________servo 4___________________________

void servo4CW(int s4pos1, int s4pos2){ //servo4 clock wise rotation
  for (int pos = s4pos1; pos <= s4pos2; pos += 1){
   // if (digitalRead(toggle) == LOW) break;
    delay(12);
    servo4.write(pos);
  }
}

void servo4CCW(int s4pos1, int s4pos2){ //servo4 counter clock wise rotation
  for (int pos = s4pos2; pos >= s4pos1; pos -= 1){
   // if (digitalRead(toggle) == LOW) break;
    delay(12);
    servo4.write(pos);
  }
}
