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
using std::cin;
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
    bool finished = false;

public:
    Space();
    virtual void setDirections(Space *U, Space *L, Space *R, Space *D);
    virtual Space *getUp();
    virtual Space *getRight();
    virtual Space *getDown();
    virtual Space *getLeft();
    virtual bool getFinish();
    virtual string getRoom();
    virtual void printImg() = 0;
};
#endif