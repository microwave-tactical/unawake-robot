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
int delayTime2 = 30;
int delayTime3 = 50;
int delayTime4 = 25;
 

//___________________________servo 2___________________________

void servo2CW(int s2pos1, int s2pos2){ //servo4 clock wise rotation
  for (int pos = s2pos1; pos < s2pos2; pos ++){
    //  if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(delayTime2);
  }
}

void servo2CCW(int s2pos1, int s2pos2){ //servo4 counter clock wise rotation
  for (int pos = s2pos1; pos > s2pos2; pos --){
      //if (digitalRead(toggle) == LOW) break;
    servo2.write(pos);
    delay(delayTime2);
  }
}

//___________________________servo 3___________________________

void servo3CW(int s3pos1, int s3pos2){ //servo4 clock wise rotation
  for (int pos = s3pos1; pos < s3pos2; pos ++){
    //if (digitalRead(toggle) == LOW) break;
    servo3.write(pos);
    delay(delayTime3);
  }
}

void servo3CCW(int s3pos1, int s3pos2){ //servo4 counter clock wise rotation
  for (int pos = s3pos1; pos > s3pos2; pos --){
    //  if (digitalRead(toggle) == LOW) break;
    servo3.write(pos);
    delay(delayTime3);
  }
}

//___________________________servo 4___________________________

void servo4CW(int s4pos1, int s4pos2){ //servo4 clock wise rotation
  for (int pos = s4pos1; pos < s4pos2; pos ++){
    //  if (digitalRead(toggle) == LOW) break;
    servo4.write(pos);
    delay(delayTime4);
  }
}

void servo4CCW(int s4pos1, int s4pos2){ //servo4 counter clock wise rotation
  for (int pos = s4pos1; pos > s4pos2; pos --){
     // if (digitalRead(toggle) == LOW) break;
    servo4.write(pos);
    delay(delayTime4);
  }
}


//___________________________dual servos___________________________

void servo_dual(int s1, int s2, int s1pos1, int s1pos2, int s2pos1, int s2pos2){
  float stepJump, incr;
  int i, j, m, n = 0;

  // Allows for loops to work in both directions (< and >)
  int pos1 = abs(s1pos1 - s1pos2);
  int pos2 = abs(s2pos1 - s2pos2);

  // Determines CW/CCW directions of servos based on from/to input
  if (s1pos1 < s1pos2) i = 1;
    else i = -1;
  if (s2pos1 < s2pos2) j = 1;
    else j = -1;
  
  if (abs(s1pos1 - s1pos2) > abs(s2pos1 - s2pos2)) {
    // Slow down movement of servo with less travel to match longer travel of other servo
    stepJump = static_cast< float >(pos1) / pos2;
    incr = stepJump;
    for (m = 0; m < pos1; m++){
      s1pos1 = s1pos1 + i;
      //if (digitalRead(toggle) == LOW) break;
      if (s2pos1 > s2pos2){
        if (n < stepJump) {  
          n++;
        }
        else {
          stepJump = stepJump + incr;
          s2pos1 = s2pos1 + j;
          switch (s2) { // Select the servo based on which was chosen    
            case 2:
              servo2.write(s2pos1);
              break;
            case 3:
              servo3.write(s2pos1);
              break;
            case 4:  
              servo4.write(s2pos1);
              break;
          }
        }
      }
      switch (s1) { // Select the servo based on which was chosen    
        case 2:
          servo2.write(s1pos1);
          break;
        case 3:
          servo3.write(s1pos1);
          break;
        case 4:  
          servo4.write(s1pos1);
          break;
      }
      delay(delayTime3);
    }
  }
  else {
    // Slow down movement of servo with less travel to match longer travel of other servo
    stepJump = static_cast< float >(pos2) / pos1;
    incr = stepJump;
    
    Serial.println("===== b =====");
    for (m = 0; m < pos2; m++){
      
    Serial.println("m = " + String(m) + " j + " + String (j) + " s4 = " + String(s2pos1));
      s2pos1 = s2pos1 + j; 
      //if (digitalRead(toggle) == LOW) break;
      if (s1pos1 < s1pos2){
        if (n < stepJump){  
          n++;
        }
        else {
          stepJump = stepJump + incr;
          s1pos1 = s1pos1 + i; 
          switch (s1) { // Select the servo based on which was chosen    
            case 2:
              servo2.write(s1pos1);
              break;
            case 3:
              servo3.write(s1pos1);
              break;
            case 4:  
              servo4.write(s1pos1);
              break;
          }
        }
      }
      switch (s2) { // Select the servo based on which was chosen    
        case 2:
          servo2.write(s2pos1);
          break;
        case 3:
          servo3.write(s2pos1);
          break;
        case 4:  
          servo4.write(s2pos1);
          break;
      }
      delay(delayTime3);
    }
  }
}
