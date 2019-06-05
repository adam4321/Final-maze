/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    Header file for the Character class 
***********************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP  

#include <iostream>

using std::cout;
using std::endl;

class Character
{
private:
    int health;

public:
    Character();
    void setHealth();
    int getHealth();
    void printHealth();
};
#endif