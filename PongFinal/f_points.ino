void playerone(int pointone){

  switch(pointone){

    case 0:
      matrix.fillRect(27,26,5,5,BLACK);
      matrix.drawLine(27,26,30,26,WHITE);
      matrix.drawLine(27,26,27,30,WHITE);
      matrix.drawLine(27,30,30,30,WHITE);
      matrix.drawLine(30,30,30,26,WHITE);
      break;

    case 1:
      matrix.fillRect(27,26,5,5,BLACK);
      matrix.drawLine(30,30,30,26,WHITE);
      break;
    case 2:
      matrix.fillRect(27,26,5,5,BLACK);
      matrix.drawLine(27,26,30,26,WHITE);
      matrix.drawLine(30,26,30,28,WHITE);
      matrix.drawLine(30,28,27,28,WHITE);
      matrix.drawLine(27,28,27,30,WHITE);
      matrix.drawLine(27,30,30,30,WHITE);
      break;
    case 3:
      matrix.fillRect(27,26,5,5,BLACK);
      matrix.drawLine(27,26,30,26,WHITE);
      matrix.drawLine(30,26,30,28,WHITE);
      matrix.drawLine(30,28,27,28,WHITE);
      matrix.drawLine(30,28,30,30,WHITE);
      matrix.drawLine(27,30,30,30,WHITE);
      break;
  }
}

void playertwo(int pointtwo){

  switch(pointtwo){

    case 0:
      matrix.fillRect(1,26,5,5,BLACK);
      matrix.drawLine(1,26,4,26,WHITE);
      matrix.drawLine(1,26,1,30,WHITE);
      matrix.drawLine(1,30,4,30,WHITE);
      matrix.drawLine(4,30,4,26,WHITE);
      break;

    case 1:
      matrix.fillRect(1,26,5,5,BLACK);
      matrix.drawLine(4,30,4,26,WHITE);
      break;
    case 2:
      matrix.fillRect(1,26,5,5,BLACK);
      matrix.drawLine(1,26,4,26,WHITE);
      matrix.drawLine(4,26,4,28,WHITE);
      matrix.drawLine(4,28,1,28,WHITE);
      matrix.drawLine(1,28,1,30,WHITE);
      matrix.drawLine(1,30,4,30,WHITE);
      break;
    case 3:
      matrix.fillRect(1,26,5,5,BLACK);
      matrix.drawLine(1,26,4,26,WHITE);
      matrix.drawLine(4,26,4,28,WHITE);
      matrix.drawLine(4,28,1,28,WHITE);
      matrix.drawLine(4,28,4,30,WHITE);
      matrix.drawLine(1,30,4,30,WHITE);
      break;
  }
}
