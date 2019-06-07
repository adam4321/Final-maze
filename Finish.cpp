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

                           *********************
                           ** !!! FREEDOM !!! **
                           *********************
                    ,.  _~-.,               .
           ~'`_ \/,_. \_
          / ,"_>@`,__`~.)             |           .
          | |  @@@@'  ",! .           .          '
          |/   ^^@     .!  \          |         /
          `' .^^^     ,'    '         |        .             .
           .^^^   .          \                /          .
          .^^^       '  .     \       |      /       . '
.,.,.     ^^^             ` .   .,+~'`^`'~+,.     , '
&&&&&&,  ,^^^^.  . ._ ..__ _  .'             '. '_ __ ____ __ _ .. .  .
%%%%%%%%%^^^^^^%%&&;_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,
&&&&&%%%%%%%%%%%%%%%%%%&&;,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=
%%%%%&&&&&&&&&&&%%%%&&&_,.;^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,
%%%%%%%%%&&&&&&&&&-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-==--^'~=-.,__,.-=~'
##mjy#####*"'
_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,.-=~'`^`'~=-.,__,.-=~'

~`'^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^



)";
}

    //     ______________
    //    |\ ___________ /|
    //    | |  /|,| |   | |
    //    | | |,x,| |   | |
    //    | | |,x,' |   | |
    //    | | |,x   ,   | |
    //    | | |/    |   | |
    //    | |    /] ,   | |
    //    | |   [/ ()   | |
    //    | |       |   | |
    //    | |       |   | |
    //    | |       |   | |
    //    | |      ,'   | |
    //    | |   ,'      | |
    //    |_|,'_________|_| 