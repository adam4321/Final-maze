/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    Header file for the Character class 
***********************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP  

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Character
{
private:
    int health;
    int itemCount;
    bool key;
    vector<string> items;

public:
    Character();
    void setHealth(int input);
    int getHealth();
    void printHealth();
    int getItemCount();
    void addItem(string input);
    void setKey(bool input);
    bool hasKey();
    void printItems();
};
#endif