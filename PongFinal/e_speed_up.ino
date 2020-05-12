void speed_up(){

  //langsames erhöhen der Ballgeschwindigkeit
  
  if(ballspeed > 10){
    if(ballspeed <= 100 && ballspeed > 10){
      ballspeed = ballspeed -4;
      ballcolour = matrix.Color333(5, 0, 0);
    }
  }
}
