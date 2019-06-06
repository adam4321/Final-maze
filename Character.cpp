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
    key = false;
}


/*********************************************************************
** Description:   Method that prints the Character's health bar
*********************************************************************/

void Character::printHealth()
{
    cout << "    Cheese-o-Meter" << endl;
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
** Description:   Function that adds an item if the inventory is at 3
**                items or below. It takes a string for the item type
**                as it's argument.
*********************************************************************/

void Character::addItem(string input)
{
    if(itemCount < 4)
    {
        items.push_back(input);
        itemCount++;
    }

    else
    {
        cout << "Sorry your intentory is full";
        cout << endl << endl;
    }  
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

int Character::getItemCount()
{
    return itemCount;
}

void Character::setKey(bool input)
{
    key = input;
}

vector<string> Character::getItems()
{
    return items;
}

bool Character::hasKey()
{
    return key;
}