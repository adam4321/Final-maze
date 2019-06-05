/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Dinosaur derived class 
***********************************************************************/

#include "Dinosaur.hpp"


/*********************************************************************
** Description:   Constructor function for the Dinosaur class
*********************************************************************/



/*********************************************************************
** Description:   Function that prints the image for the Dinosaur class
**                https://www.asciiart.eu/animals/reptiles/dinosaurs
*********************************************************************/

void Dinosaur::printImg()
{

cout << R"(
        ,
       /|
      / |
     /  /
    |   |
   /    |
   |    \_
   |      \__
   \       __\_______
    \                 \_
    | /                 \
    \/                   \
     |                    |
     \                   \|
     |                    \
     \                     |
     /\    \_               \
    / |      \__ (   )       \
   /  \      / |\\  /       __\____
snd|  ,     |  /\ \ \__    |       \_
   \_/|\___/   \   \}}}\__|  (@)     )
    \)\)\)      \_\---\   \|       \ \
                  \>\>\>   \   /\__o_o)
                            | /  VVVVV
                            \ \    \
                             \ \MMMMM                  
                              \______/   
)";

}