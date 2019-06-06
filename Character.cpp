/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Character class 
***********************************************************************/

#include "Character.hpp"


/*********************************************************************
** Description:   Constructor function for the Character class
*********************************************************************/

Character::Character()
{
    health = 10;
    itemCount = 0;
}


/*********************************************************************
** Description:   Method that prints the Character's health bar
*********************************************************************/

void Character::printHealth()
{
    cout << "    Cheese-O-Meter" << endl;
    cout << "-----------------------" << endl;
    cout << "| ";
    
    for (auto i = 0; i < 10; i++)
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

void Character::setHealth(int input)
{
    health = input;
}