/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    Header file for the Cheese class derived from space
***********************************************************************/

#ifndef CHEESE_HPP
#define CHEESE_HPP  

#include "Space.hpp"


class Cheese : public Space
{
private:


public:
    Cheese();
    void printImg() override;
};
#endif