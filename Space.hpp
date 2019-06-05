/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    Header file for the Space base class 
***********************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Space
{
protected:
    Space *up;
    Space *right;
    Space *down;
    Space *left;
    string room;

public:
    Space();
    virtual void printImg() = 0;
};
#endif