

Servo servo4; //base extension 
Servo servo2; //base roation
Servo servo3; //arm extension 

//robot on/off swtich
int toggle = 5; 

//step delay
int delayTime2 = 20;
int delayTime3 = 50;
int delayTime4 = 25;


//___________________________single servo___________________________

void servomv(int snum, int pos1, int pos2){ //servo4 clock wise rotation
  int i, j, k;

  // Determines CW/CCW directions of servos based on from/to input
  if (pos1 < pos2) k = 1;
    else k = -1;
  j = abs(pos1 - pos2);
  
  for (i = 0; i < j; i++){
    pos1 = pos1 + k;
      if (digitalRead(toggle) == LOW) break;
    switch (snum) { // Select the servo based on which was chosen    
      case 2:
        servo2.write(pos1);
        break;
      case 3:
        servo3.write(pos1);
        break;
      case 4:  
        servo4.write(pos1);
        break;
    }
    delay(delayTime2);
  }
}


//___________________________dual servos___________________________

void servomv_dual(int s1, int s1pos1, int s1pos2, int s2, int s2pos1, int s2pos2){
  float stepJump, incr;
  int i, j, m, n, p = 0;

  // Allows for loops to work in both directions (< and >)
  int end1 = abs(s1pos1 - s1pos2);
  int end2 = abs(s2pos1 - s2pos2);

  // Determines CW/CCW directions of servos based on from/to input
  if (s1pos1 < s1pos2) i = 1;
    else i = -1; // Decrements (CCW) if pos1 is greater
  if (s2pos1 < s2pos2) j = 1;
    else j = -1;
  
  if (abs(s1pos1 - s1pos2) > abs(s2pos1 - s2pos2)) {
    // Slow down movement of servo with less travel to match longer travel of other servo
    stepJump = static_cast< float >(end1) / end2;
    incr = stepJump;
    for (m = 0; m < end1; m++){
      s1pos1 = s1pos1 + i;
      //if (digitalRead(toggle) == LOW) break;
      if (p < end2){
        if (n < stepJump) {  
          n++;
        }
        else {
          stepJump = stepJump + incr;
          s2pos1 = s2pos1 + j;
          p++;
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
      //Serial.println(s1pos1);
    }
  }
  else {
    // Slow down movement of servo with less travel to match longer travel of other servo
    stepJump = static_cast< float >(end2) / end1;
    incr = stepJump;
    for (m = 0; m < end2; m++){
      s2pos1 = s2pos1 + j; 
      //if (digitalRead(toggle) == LOW) break;
      if (p < end1){
        if (n < stepJump){  
          n++;
        }
        else {
          stepJump = stepJump + incr;
          s1pos1 = s1pos1 + i; 
          p++;
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
      
      //Serial.println(s1pos1);
    }
  }
}
