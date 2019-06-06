/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    File that implements the Finish derived class 
***********************************************************************/

#include "Finish.hpp"


/*********************************************************************
** Description:   Constructor function for the Finish class
*********************************************************************/

Finish::Finish()
{
    finished = true;
}


/*********************************************************************
** Description:   Function that prints the image for the Finish class
**                http://ascii.co.uk/art/doors
*********************************************************************/

void Finish::printImg()
{

cout << R"(   

 ______________
|\ ___________ /|
| |  /|,| |   | |
| | |,x,| |   | |
| | |,x,' |   | |
| | |,x   ,   | |
| | |/    |   | |
| |    /] ,   | |
| |   [/ ()   | |
| |       |   | |
| |       |   | |
| |       |   | |
| |      ,'   | |
| |   ,'      | |
|_|,'_________|_| 



)";

    cout << "Congratulations You have escaped the maze. You are a lucky rat!" << endl;
    cout << "Press enter to finish";
    cout << endl << endl;

    char temp = 'x';

    cin.clear();
    cin.ignore();

    while (temp != '\n')
    {
        cin.get(temp);
    }
}