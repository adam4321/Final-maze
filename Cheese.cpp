/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Cheese derived class 
***********************************************************************/

#include "Cheese.hpp"


/*********************************************************************
** Description:   Constructor function for the Dinosaur class
*********************************************************************/

Cheese::Cheese()
{

}


/*********************************************************************
** Description:   Function that prints the image for the Dinosaur class
**                ascii art from http://ascii.co.uk/art/cheese
*********************************************************************/

void Cheese::printImg()
{



cout << R"(


         _--"-.
      .-"      "-.
     |""--..      '-.
     |      ""--..   '-.
     |.-. .-".    ""--..".
     |'./  -_'  .-.      |
     |      .-. '.-'   .-'
     '--..  '.'    .-  -.
          ""--..   '_'   :
                ""--..   |
                      ""-' 


                      
)";
}