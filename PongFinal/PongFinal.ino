#include <RGBmatrixPanel.h>

//Definieren der RGB-Panel Anschlüsse

#define CLK 8
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

//Festlegen aller Farben die ich verwenden möchte um Platz zu sparen

#define BLACK  matrix.Color333(0, 0, 0)
#define GRAY   matrix.Color333(2, 2, 2)
#define YELLOW matrix.Color333(5, 3, 0)
#define BLUE   matrix.Color333(0, 0, 4)
#define GREEN  matrix.Color333(0, 4, 0)
#define ORANGE matrix.Color333(4, 1, 0)
#define RED    matrix.Color333(4, 0, 0)
#define RED1   matrix.Color333(3, 0, 0)
#define RED2   matrix.Color333(2, 0, 0)
#define RED3   matrix.Color333(1, 0, 0)
#define PURPLE matrix.Color333(4, 0, 4)
#define CYAN   matrix.Color333(0, 4, 4)
#define WHITE  matrix.Color333(7, 7, 7)
#define RANDOM matrix.Color333(random(0,8),random(0,8),random(0,8))

//Festlegen diverser Variablen um Positionen etc. zu speichern

int upone = 11; //HOCH-Taster Spieler 1
int uptwo = A4; //HOCH-Taster Spieler 2
int downone = 12; //RUNTER-TASTER Spieler 1
int downtwo = A5; //RUNTER-TASTER Spieler 2

int s_upone; //Tasterabfrage HOCH-Taster Spieler 1
int s_uptwo; //Tasterabfrage HOCH-Taster Spieler 2
int s_downone; //Tasterabfrage RUNTER-TASTER Spieler 1
int s_downtwo; //Tasterabfrage RUNTER-TASTER Spieler 2

//Variablen für das Panel selbst

int width;
int height;

//Variablen für den Ball

int ballx;
int bally;
int ballspeed =100;
int ballsize = 1;
int balldirectionx = 1;
int balldirectiony = 1;
int ballcolour;

int oldballx = 13;
int oldbally = 13;

int Lautsprecher = 13;

//Variablen für das Paddel 1

int paddleonex = 31; //aktuelle x Koordinate von Paddel 1
int paddleoney = 9; //aktuelle y Koordinate von Paddel 1
int paddlewidth = 1; 
int paddleheight = 6;

int oldpaddleonex; //alte x Koordinate von Paddel 1
int oldpaddleoney; //alte xy Koordinate von Paddel 1

//Variablen für das Paddel 2

int paddletwox = 0; //aktuelle x Koordinate von Paddel 2
int paddletwoy = 9; //aktuelle y Koordinate von Paddel 2

int oldpaddletwox; //alte x Koordinate von Paddel 2
int oldpaddletwoy; //alte xy Koordinate von Paddel 2

//Variablen für Spielregeln

int point_won = false; //Ein Punkt wurde erspielt
int game_won = false; //Das Spiel wurde gewonnen
int playerone_won = false; //Spieler 1 hat gewonnen
int playertwo_won = false; //Spieler 2 hat gewonnen
int pointone = 0; //Punktestand Spieler 1
int pointtwo = 0; //Punktestand Spieler 2
int ballp1 = false; //Abspeicherung ob Spieler 1 den Ball bekommt
int ballp2 = false; //Abspeicherung ob Spieler 2 den Ball bekommt

//Funktionen müssen Deklariert werden da Arduino sonst manchmal Fehler macht

void ball_movement();
void speed_up();
void winning_conditions();
void playerone(int pointone);
void playertwo(int pointtwo);

RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);
