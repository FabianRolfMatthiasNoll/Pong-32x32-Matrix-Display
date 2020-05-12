void loop(){

  
  
  s_upone = digitalRead(upone);
  s_uptwo = digitalRead(uptwo);
  s_downone = digitalRead(downone);
  s_downtwo = digitalRead(downtwo);

if(game_won == false && point_won == false){
  matrix.drawLine(0, 24, 31, 24, GRAY);
  matrix.drawLine(0, 0, 31, 0, GRAY);

  //Paddel werden bewegt

  if(paddleoney >= 1){
      
    if(s_downone == HIGH){
         paddleoney--;
    }
  }
  if(paddleoney < 24 - paddleheight){
    
    if(s_upone == HIGH){
         paddleoney++;
    }
  }
  if(paddletwoy >= 1){
      
    if(s_downtwo == HIGH){
        paddletwoy--;
    }
  }
  if(paddletwoy < 24 - paddleheight){
    
    if(s_uptwo == HIGH){
        paddletwoy++;
      }
  }
  
  //Anzeigen und löschen von Paddel 1
  
  if (oldpaddleonex != paddleonex || oldpaddleoney != paddleoney) {
    matrix.fillRect(oldpaddleonex, oldpaddleoney, paddlewidth, paddleheight,BLACK);
  }
  
  matrix.fillRect(paddleonex, paddleoney, paddlewidth, paddleheight,YELLOW);

  oldpaddleonex = paddleonex;
  oldpaddleoney = paddleoney;

  //Anzeigen und Löschen von Paddel 2

  if (oldpaddletwox != paddletwox || oldpaddletwoy != paddletwoy) {
    matrix.fillRect(oldpaddletwox, oldpaddletwoy, paddlewidth, paddleheight,BLACK);
  }
  
  matrix.fillRect(paddletwox, paddletwoy, paddlewidth, paddleheight,WHITE);

  oldpaddletwox = paddletwox;
  oldpaddletwoy = paddletwoy;

  //Lässt Ball anhand von Ballgeschwindigkeit bewegen
  
  ball_movement();
  delay(ballspeed);  
} else {
  winning_conditions();
}
}
