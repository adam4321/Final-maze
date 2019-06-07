/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Dinosaur derived class 
***********************************************************************/

#include "Dinosaur.hpp"


/*********************************************************************
** Description:   Method that prints the image for the Dinosaur class
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
   |  ,     |  /\ \ \__    |       \_
   \_/|\___/   \   \}}}\__|  (@)     )
    \)\)\)      \_\---\   \|       \ \
                  \>\>\>   \   /\__o_o)
                            | /  VVVVV
                            \ \    \
                             \ \MMMMM                  
                              \______/   

)";
}

/*********************************************************************
** Description:   Method that runs the room's action
*********************************************************************/

void Dinosaur::action(Character &player)
{
    cout << "OH NO!!!   Its a DINOSAUR!!!";

    if (player.getStickCount() > 0)
    {
        cout << endl << endl;
        cout << "Press enter to throw your stick to escape!";
        cout << endl << endl;

        char temp = 'x';
        cin.clear();
        cin.ignore();

        while (temp != '\n')
        {
            cin.get(temp);
        }

        player.removeItem("stick");
        player.setStickCount(player.getStickCount() - 1);
    }

    else
    {   
        cout << endl << endl;
        cout << "I'm afraid that the dinosaur has attacked you!" << endl;
        cout << "He has taken 3 pieces of your cheese!";
        cout << endl << endl << endl;

        player.setHealth(player.getHealth() - 3);
    }
}