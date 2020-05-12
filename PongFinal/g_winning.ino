void winning_conditions(){

  while(pointone < 3 || pointtwo < 3){
    if(point_won == true){
      
      //Taster auslesen da wir nicht mehr in der void loop sind
    
      s_upone = digitalRead(upone);
      s_uptwo = digitalRead(uptwo);
      s_downone = digitalRead(downone);
      s_downtwo = digitalRead(downtwo);

      //Player 2 bekommt Punkt und Programm pausiert solange
      
      if(playertwo_won == true){

        //Spieler 1 bekommt einen Punkt
        
        pointone++; 

        //Siegesbedingung wird zurückgesetzt
        
        playertwo_won = false;

        //Hier wird abgespeichert das Spieler 1 den Ball bekommt
        
        ballp1 = true;
        ballp2 = false;
        playerone(pointone);
        digitalWrite(Lautsprecher, HIGH);
        delay(60);
        digitalWrite(Lautsprecher, LOW);
        delay(60);
        digitalWrite(Lautsprecher, HIGH);
        delay(60);
        digitalWrite(Lautsprecher, LOW);
        matrix.fillRect(0,0,16,32,RED3);
        delay(100);
      }

      //Player 1 bekommt Punkt und Programm pausiert solange
      
      if(playerone_won == true){

        //Spieler 2 bekommt einen Punkt
        
        pointtwo++;

        //Siegesbedingung wird zurückgesetzt
        
        playerone_won = false;

        //Hier wird abgespeichert das Spieler 2 den Ball bekommt
        
        ballp1 = false;
        ballp2 = true;
        playertwo(pointtwo);
        digitalWrite(Lautsprecher, HIGH);
        delay(60);
        digitalWrite(Lautsprecher, LOW);
        delay(60);
        digitalWrite(Lautsprecher, HIGH);
        delay(60);
        digitalWrite(Lautsprecher, LOW);
        matrix.fillRect(15,0,17,32,RED3);
        delay(100);
      }

      if(pointone == 3 || pointtwo == 3){

        //Bildschirm wird kurz komplett Schwarz gemacht um alles zu löschen
        
        matrix.fillRect(0,0,32,32,BLACK); 

        //Gewinner Bildschirm wenn Spieler 1 3 Punkte hat
        
        while(pointone == 3){ 

          //Zeichnet ein P

          matrix.fillRect(5,6,21,14,BLACK);
          
          matrix.drawLine(12,8,12,11, WHITE);
          matrix.drawLine(13,7,14,7, WHITE);
          matrix.drawPixel(15,8,WHITE);
          matrix.drawLine(14,9,13,9,WHITE);

          //Zeichnet eine 1

          matrix.drawLine(19,7,19,11,WHITE);
          matrix.drawPixel(18,8,WHITE);

          //Zeichnet WINS

          matrix.drawLine(6,14,6,15,WHITE);
          matrix.drawLine(7,16,7,17,WHITE);
          matrix.drawPixel(8,18,WHITE);
          matrix.drawPixel(9,17,WHITE);
          matrix.drawPixel(10,18,WHITE);
          matrix.drawLine(11,16,11,17,WHITE);
          matrix.drawLine(12,14,12,15,WHITE);

          matrix.drawLine(14,14,14,18,WHITE);

          matrix.drawLine(16,14,16,18,WHITE);
          matrix.drawPixel(17,15,WHITE);
          matrix.drawLine(18,16,18,17,WHITE);
          matrix.drawLine(19,14,19,18,WHITE);

          matrix.drawLine(21,14,24,14,WHITE);
          matrix.drawPixel(21,15,WHITE);
          matrix.drawLine(21,16,24,16,WHITE);
          matrix.drawPixel(24,17,WHITE);
          matrix.drawLine(21,18,24,18,WHITE);

          matrix.drawPixel(random(0,32),random(0,32),RANDOM);
          digitalWrite(Lautsprecher, HIGH);
          delay(random(0,60));
          digitalWrite(Lautsprecher, LOW);
          delay(random(0,60));
          digitalWrite(Lautsprecher, HIGH);
          delay(random(0,60));
          digitalWrite(Lautsprecher, LOW);
        }

        //Gewinner Bildschirm wenn Spieler 2 3 Punkte hat
        
        while(pointtwo == 3){

          matrix.fillRect(5,6,21,14,BLACK);
          
          //Zeichnet ein P
          
          matrix.drawLine(12,8,12,11, WHITE);
          matrix.drawLine(13,7,14,7, WHITE);
          matrix.drawPixel(15,8,WHITE);
          matrix.drawLine(14,9,13,9,WHITE);

          //Zeichnet eine 2

          matrix.drawLine(17,7,20,7,WHITE);
          matrix.drawPixel(20,8,WHITE);
          matrix.drawLine(17,9,20,9,WHITE);
          matrix.drawPixel(17,10,WHITE);
          matrix.drawLine(17,11,20,11,WHITE);

          //Zeichnet WINS

          matrix.drawLine(6,14,6,15,WHITE);
          matrix.drawLine(7,16,7,17,WHITE);
          matrix.drawPixel(8,18,WHITE);
          matrix.drawPixel(9,17,WHITE);
          matrix.drawPixel(10,18,WHITE);
          matrix.drawLine(11,16,11,17,WHITE);
          matrix.drawLine(12,14,12,15,WHITE);

          matrix.drawLine(14,14,14,18,WHITE);

          matrix.drawLine(16,14,16,18,WHITE);
          matrix.drawPixel(17,15,WHITE);
          matrix.drawLine(18,16,18,17,WHITE);
          matrix.drawLine(19,14,19,18,WHITE);

          matrix.drawLine(21,14,24,14,WHITE);
          matrix.drawPixel(21,15,WHITE);
          matrix.drawLine(21,16,24,16,WHITE);
          matrix.drawPixel(24,17,WHITE);
          matrix.drawLine(21,18,24,18,WHITE);

          matrix.drawPixel(random(0,32),random(0,32),RANDOM);
          digitalWrite(Lautsprecher, HIGH);
          delay(random(0,60));
          digitalWrite(Lautsprecher, LOW);
          delay(random(0,60));
          digitalWrite(Lautsprecher, HIGH);
          delay(random(0,60));
          digitalWrite(Lautsprecher, LOW);
          
        }
      }
      
      //Wenn beide Spieler bereit sind und jeweils beide Knöpfe drücken wird die neue Ballrichtung bestimmt und alles auf Anfang gesetzt
      
      if(s_upone == LOW && s_uptwo == LOW && s_downone == LOW && s_downtwo == LOW){
        
        //Bildschirm wird geleert
        
        matrix.fillRect(0,0,32,32,BLACK);
       
        //Siegesbedingung wird zurückgesetzt
        
        point_won = false;

        //Ball wird Spieler 1 an einer zufälligen Position zugespielt 
        
        if(ballp1 == true){
          ballx = random(14,17);
          bally = random(12,18);
          balldirectionx = -1;
          balldirectiony = -1;
        }

        //Ball wird Spieler 2 an einer zufälligen Position zugespielt
        
        if(ballp2 == true){
          ballx = random(16,19);
          bally = random(12,18);
          balldirectionx = 1;
          balldirectiony = 1;
        }

        //Positionen werden wieder auf Standard zurückgesetzt
        
        ballspeed = 100;
        paddleonex = 31;
        paddleoney = 9;
        paddletwox = 0;
        paddletwoy = 9;

        //Punktestand wird aktualisiert

        playerone(pointone);
        playertwo(pointtwo);

        //Programm wird wieder fortgesetzt
        
        loop();
        break;
      }
    }
  }
}
