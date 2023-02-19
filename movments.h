
//entercoirdnets for movments 


void moveExample(){

  //base roation
  servo2CW(60, 150);
  servo2CCW(150, 60);

  delay(200); //delay is needed to make it move in sequrence
    
   //arm extension servo3

  servo3CW(null, null);
  servo3CCW(null, null);

  delay(200);

   
  //base extension servo4
  
  servo4CW(null, null);
  servo4CCW(null, null);

  delay(200);

  
    }


  /*
  servo2CW(0, 180);
  delay(200);
  servo2CCW(180, 0);
  delay(200);

   servo3CW(0, 180);
  delay(200);
  servo3CCW(180, 0);
  delay(200);

 servo4CW(0, 180);
  delay(200);
  servo4CCW(180, 0);
  delay(200);


 
   */
