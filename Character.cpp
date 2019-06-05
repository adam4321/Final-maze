/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Character class 
***********************************************************************/

#include "Character.hpp"


/*********************************************************************
** Description:   Constructor function for the 
*********************************************************************/

Character::Character()
{
    health = 10;
}


/*********************************************************************
** Description:   Method that prints the Character's health bar
*********************************************************************/

void Character::printHealth()
{
    cout << "      Cheese-O-Meter" << endl;
    cout << "-----------------------" << endl;
    cout << "| ";
    
    for (auto i = 0; i < health; i++)
    {
        if (i < health)
        {
            cout << "* ";
        }

        else
        {
            cout << "  ";
        }
    }
    
    cout << "|" << endl;
    cout << "-----------------------" << endl << endl;
}


/*********************************************************************
** Description:   Getters and setters for the Character class
*********************************************************************/

int Character::getHealth()
{
    return health;
}