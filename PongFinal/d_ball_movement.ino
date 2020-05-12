void ball_movement() {

  //Prüfen auf Kollision mit dem Matrix Rand
  
  if (ballx > width-2 || ballx < 1) {
    balldirectionx = -balldirectionx; //Richtung des Balls wird nun umgedreht (prallt ab)
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
    speed_up(); //Geschwindigkeit wird erhöht
  }
  
  if (bally > height-10 || bally <= 1 || bally >= 30) {
    balldirectiony = -balldirectiony; //Richtung des Balls wird nun umgedreht (prallt ab)
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
    speed_up(); //Geschwindigkeit wird erhöht
  } 
  
  //Aktualisieren der Ballposition (Ball bewegt sich um den Wert balldirection vorwärts)

  ballx += balldirectionx; //Übersetzt: ballx = ballx + balldirection
  bally += balldirectiony;
  
  //Entfernen des alten Balls wenn die Position des alten Balls nicht mehr mit dem aktuellen übereinstimmt
  
  if (oldballx != ballx || oldbally != bally) {
    matrix.fillRect(oldballx, oldbally, ballsize, ballsize, BLACK); //Die alte Postion wird mit einem schwarzen 1x1 Viereck ausgefüllt
  }

  //Überprüfung ob Ball einen der Paddel berührt

  if((ballx <= paddleonex && ballx >= (paddleonex - paddlewidth)) && (bally >= paddleoney && bally <= (paddleoney + paddleheight))){
    balldirectionx = -balldirectionx; //Richtung des Balls wird nun umgedreht (prallt ab)
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
  }

  if((ballx >= paddletwox && ballx <= (paddletwox + paddlewidth)) && (bally >= paddletwoy && bally <= (paddletwoy + paddleheight))){
    balldirectionx = -balldirectionx; //Richtung des Balls wird nun umgedreht (prallt ab)
    digitalWrite(Lautsprecher, HIGH);
    delay(10);
    digitalWrite(Lautsprecher, LOW);
  }
  
  //Aktueller Ball wird nun gezeichnet

  matrix.fillRect(ballx, bally, ballsize, ballsize,ballcolour);

  //Die aktuelle Position wird nun als alte Position abgespeichert da sich der Ball ja schon bewegt hat
  //und als nächtes wieder bewegen wird. Somit haben wir zwei verschiedene Werte die man vergleichen kann
  
  oldballx = ballx;
  oldbally = bally;

  //Abfrage ob der Ball die rechte oder linke Wand berührt

  if(ballx == 0){
    playertwo_won = true; //Spieler 2 hat gewonnen
    point_won = true; //Punkt wurde gewonnen
  }
  if(ballx == 31){
    playerone_won = true; //Spieler 1 hat gewonnen
    point_won = true; //Punkt wurde gewonnen
  }
}
