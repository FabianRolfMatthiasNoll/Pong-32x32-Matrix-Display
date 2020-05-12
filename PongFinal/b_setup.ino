void setup() {

  //Standard-Initialisierungen
  
  matrix.begin();
  Serial.begin(9600);

  pinMode(upone, INPUT_PULLUP);
  pinMode(uptwo, INPUT_PULLUP);
  pinMode(downone, INPUT_PULLUP);
  pinMode(downtwo, INPUT_PULLUP);

  pinMode(Lautsprecher, OUTPUT);

  //Spielfeld wird gezeichnet
  
  width = matrix.width();
  height = matrix.height();
  ballcolour = matrix.Color333(0, 4, 4);
  
  //Ballposition wird zufällig festgesetzt

  ballx=20;
  bally=6;

  //Anfangspunktestand wird angezeigt
  
  playerone(pointone);
  playertwo(pointtwo);
}
