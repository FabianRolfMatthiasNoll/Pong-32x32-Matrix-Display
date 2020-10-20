# Pong
Pong on 32x32 matrix panel via Arduino / 2 Players
  
![IMG_5210](https://user-images.githubusercontent.com/43731826/96623699-089d6480-130c-11eb-98a2-0e826175107c.JPG)  
  
This program allows to play the classic Pong game on a 32x32 Matrix Display.
The game features a ball that speeds up over time

# Controls
The game will start in a default scrren. To start playing both players must press
both buttons on their controller

# Controller schematic
  
![IMG_5175](https://user-images.githubusercontent.com/43731826/96623860-44382e80-130c-11eb-96a5-8166c9ea2592.JPG)  
  
The controller buttons are used with a internal pullup resistor in the code.  
  
Player 1: Button UP is on Pin 11; Button DOWN is on Pin A4  
Player 2: Button UP is on Pin 12; Button DOWN is on Pin A5  
  
//The other Pin of the Buttons is connected to GND of the Arduino  

# Arduino Shield schematic
  
![Unbenannt](https://user-images.githubusercontent.com/43731826/96623788-2d91d780-130c-11eb-9e38-0845ef5bccff.PNG)  
  
The RGB Matrix is connected after the standard Adafruit connection:   
Matrix Pin | Arduino Pin
------------ | -------------
CLK | 8
OE | 9
LAT | 10
A | A0
B | A1
C | A2
D | A3
