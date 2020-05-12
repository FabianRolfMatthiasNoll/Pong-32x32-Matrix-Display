void speed_up(){

  //langsames erhöhen der Ballgeschwindigkeit
  
  if(ballspeed > 10){
    if(ballspeed <= 400 && ballspeed > 280){
      ballspeed = ballspeed - 40;
    } else if(ballspeed <= 280 && ballspeed > 200){
      ballspeed = ballspeed - 40;
      ballcolour = matrix.Color333(5, 3, 0);
    } else if(ballspeed <= 200 && ballspeed > 100){
      ballspeed = ballspeed -10;
      ballcolour = matrix.Color333(4, 1, 0);
    } else if(ballspeed <= 100 && ballspeed > 10){
      ballspeed = ballspeed -4;
      ballcolour = matrix.Color333(5, 0, 0);
    }
  }
}
