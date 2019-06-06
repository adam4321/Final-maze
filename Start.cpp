/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Start derived class 
***********************************************************************/

#include "Start.hpp"


/*********************************************************************
** Description:   Constructor function for the 
*********************************************************************/

Start::Start() : Space()
{

    room = "Start";
}


/*********************************************************************
** Description:   Function that prints the image for the Finish class
**                ascii art from http://ascii.co.uk/art/rooms
*********************************************************************/

void Start::printImg()
{

cout << R"(
+------------------------------------+ 
|#####|WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW| 
|#####|<(       HOME ROOM          )>| 
|#####|WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW| 
|#####|WWWWWWWWWW.----.WWWWWWWWWWWWWW| 
|#####|WWWWWWWW,'  ||  `.WWWWWWWWWWWW| 
|#####|WWWWWWWI    ||    IWWWWWWWWWWW| 
|#####|WWWWWWWI    ||    IWWWWWWWWWWW| 
|#####|WWWWWWWI    ||    IWWWWWWWWWWW| 
|#####|WWWWWWWI   _||_   IWWWWWWWWWWW| 
|#####|WWWWWWWI  ' || `  IWWWWWWWWWWW| 
|#####|WWWWWWWI    ||    IWWWWWWWWWWW| 
|#####|WWWWWWWI    ||    IWWWWWWWWWWW| 
|#####|WWWWWWWI    ||    IWWWWWWWWWWW| 
|#####|WWWWWWWI____||____IWWWWWWWWWWW| 
|#####/                              | 
|####/                               | 
|###/                                | 
|##/                                 | 
|#/                                  | 
|/                                   | 
+------------------------------------+ 

~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.~.:.<>.:.~.:.~.:.~.:.



)";
}