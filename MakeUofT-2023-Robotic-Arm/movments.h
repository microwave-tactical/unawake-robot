
//entercoirdnets for movments 


void moveExample(){

  //base roation
  servo2CW(60, 150);
  servo2CCW(150, 60);


  delay(200); //delay is needed to make it move in sequrence
    
   //arm extension servo3
   // low 120 if facing switch
   // low 105 anywhere else
   // high 70

 servo3CW(85, 105);
 servo3CCW(105, 85);

 delay(200);

   
  //base extension servo4
  // low 180 high 20
  
  servo4CW(20, 180);
  servo4CCW(180, 20);

  delay(200);

  
    }
