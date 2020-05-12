void ball_movement() {

  //Prüfen auf Kollision mit dem Matrix Rand
  
  if (ballx > width-2 || ballx < 1) {
    balldirectionx = -balldirectionx;
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
    speed_up();
  }
  
  if (bally > height-10 || bally <= 1 || bally >= 30) {
    balldirectiony = -balldirectiony;
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
    speed_up();
  } 
  
  //Aktualisieren der Ballposition

  ballx += balldirectionx;
  bally += balldirectiony;
  
  //Entfernen des alten Balls wenn die Position des alten Balls nicht mehr mit dem aktuellen übereinstimmt
  
  if (oldballx != ballx || oldbally != bally) {
    matrix.fillRect(oldballx, oldbally, ballsize, ballsize, BLACK);
  }

  //Überprüfung ob Ball einen der Paddel berührt

  if((ballx <= paddleonex && ballx >= (paddleonex - paddlewidth)) && (bally >= paddleoney && bally <= (paddleoney + paddleheight))){
    balldirectionx = -balldirectionx;
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
  }

  if((ballx >= paddletwox && ballx <= (paddletwox + paddlewidth)) && (bally >= paddletwoy && bally <= (paddletwoy + paddleheight))){
    balldirectionx = -balldirectionx;
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
  }
  
  //Aktueller Ball wird nun gezeichnet

  matrix.fillRect(ballx, bally, ballsize, ballsize,ballcolour);

  oldballx = ballx;
  oldbally = bally;

  if(ballx == 0){
    playertwo_won = true;
    point_won = true;
  }
  if(ballx == 31){
    playerone_won = true;
    point_won = true;
  }
}
