/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    Console game that 
***********************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

#include "Space.hpp"
#include "Character.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

bool requireNumbers(string menuInputTest);


int main()
{
    int menuChoice = 0;
    string menuInputTest;
    bool onlyNumbers = false;
    int gameMenu = 0;

    do
    {
        Character player;

    	// Do While loop to allow restarting 

        /*********************************************************************
        ** Description:   Rat ascii art from 
        **        https://asciiart.website/index.php?art=animals/rodents/other
        *********************************************************************/
        

        cout << R"(
    ######################################################################
    #         __             _,-"~^"-.                                   #
    #       _// )      _,-"~`         `.                                 #
    #     ." ( /`"-,-"`                 ;                                #
    #    / 6                             ;                               #
    #   /           ,             ,-"     ;                              #
    #  (,__.--.      \           /        ;                              #
    #   //'   /`-.\   |          |        `._________                    #
    #     _.-'_/`  )  )--...,,,___\     \-----------,)                   #
    #   ((("~` _.-'.-'           __`-.   )         //                    #
    #     jgs ((("`             (((---~"`         //                     #
    #                                            ((________________      #
    #                                            `----""""~~~~^^^```     #
    ######################################################################
        )";


        cout << R"(
                          **********************
                          **  The Rat's Maze  **
                          **********************
                               ***********
                                   ***
                                    *
        )";

        // Print the menu each time through the loop

        onlyNumbers = false;

		while (onlyNumbers == false || menuChoice != 1 && menuChoice != 2)
		{
            cout << endl << endl;
			cout << "Press 1 to Enter the Maze" << endl;
            cout << "Press 2 to Exit";
 			cout << endl << endl;
			cin >> menuInputTest;
			onlyNumbers = requireNumbers(menuInputTest);
			menuChoice = atoi(menuInputTest.c_str());
            cout << endl;
        }

        // Select 2 to exit

        if (menuChoice == 2)
        {
            cout << "Maze Game Quitting  --  Goodbye!";
            cout << endl << endl;

            return 0;
        } 

        // Select 1 to run begin the game

        if (menuChoice == 1)
        {




        player.printHealth();

        onlyNumbers = false;
        gameMenu = 0;

        while (onlyNumbers == false || gameMenu != 1 && gameMenu != 2 && gameMenu != 3 && gameMenu != 4)
        {
            cout << "Press 1 to move UP" << endl;
            cout << "Press 2 to move RIGHT" << endl;
            cout << "Press 3 to move DOWN" << endl;
            cout << "Press 4 to move LEFT" << endl;
            cout << endl << endl;
            cin >> menuInputTest;
            onlyNumbers = requireNumbers(menuInputTest);
            gameMenu = atoi(menuInputTest.c_str());
            cout << endl;
            }



        }

    } while (true);
}


/*********************************************************************
** Description:   Function to make sure that only integers are being
**                passed and not characters or periods or spaces. It takes
**                a string as input and returns true if it only contains
**                the numbers 0 - 9.
*********************************************************************/

bool requireNumbers(string menuInputTest)
{
	return menuInputTest.find_first_not_of("0123456789") == string::npos;
}