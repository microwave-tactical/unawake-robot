
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


void movement1(){
  
  servomv(3, 105, 90);
  delay(50);
  servomv_dual(3, 90, 87, 4, 180, 150);
  delay(300);
  servomv_dual(3, 87, 105, 4, 150, 180); 
  delay(300);
  
}

void movement2(){
  
  servomv(2, 105, 110);
  delay(50);
  servomv(2, 110, 85);
  delay(50);
  servomv(2, 85, 115);
  delay(50);
  servomv(2, 115, 105);
  delay(50);
  
}
 
