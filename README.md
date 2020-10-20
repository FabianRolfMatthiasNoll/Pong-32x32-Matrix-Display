# Pong
Pong on 32x32 matrix panel via Arduino / 2 Players

This program allows to play the classic Pong game on a 32x32 Matrix Display.
The game features a ball that speeds up over time

# Controls
The game will start in a default scrren. To start playing both players must press
both buttons on their controller

# Controller schematic
The controller buttons are used with a internal pullup resistor in the code.  
  
Player 1: Button UP is on Pin 11; Button DOWN is on Pin A4  
Player 2: Button UP is on Pin 12; Button DOWN is on Pin A5  
  
//The other Pin of the Buttons is connected to GND of the Arduino  

# Arduino Shield schematic

The RGB Matrix is connected after the standard Adafruit connection:  
CLK = 8; OE = 9; LAT = 10; A = A0; B = A1; C 0 A2; D = A3;  
