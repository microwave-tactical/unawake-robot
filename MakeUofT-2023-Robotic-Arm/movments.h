
//enter coordinates for movments 

void moveExample(){

  // base roation servo2
    // 60 left, 150 right, 105 center
  servo2CW(60, 150);
  servo2CCW(150, 60);


  delay(200); //delay is needed to make it move in sequrence
    
  // arm extension servo3
    // low 120 if facing switch
    // low 105 anywhere else
    // high 70

  servo3CW(85, 105);
  servo3CCW(105, 85);

  delay(200);

   
  // end extension servo4
    // low 180 high 20
  
  servo4CW(20, 180);
  servo4CCW(180, 20);
  delay(200);

  
}


// moves all servos to home positions
void movementHome(){

  servo2.write(97);
  servo3.write(105);
  servo4.write(180);
}


void movement1(){

  servo3CCW(105, 90);
  delay(50);
  servo_dual(3, 4, 90, 105, 180, 150);
  delay(300);
  //servo3CW(100, 105);
  //delay(300);
  servo4CW(150, 180); 
  delay(300);
  
  /*
  servo4CCW(180, 150);
  servo3CW(90,100);
  */
  

}


// servo4CW(20, 180);
  //servo4CCW(180, 20);
 
