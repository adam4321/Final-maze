/***********************************************************************
** Program name:   Maze Game
** Author:         Adam Wright
** Date:           5/30/2019
** Description:    Single player console game where the player is a rat
**                 in a maze. The player needs to escape the maze before
**                 they die from running out of health (cheese). The 
**                 program can be run by typing maze into the command 
**                 line and following the prompts.
***********************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

#include "Character.hpp"
#include "Space.hpp"
#include "Start.hpp"
#include "Dinosaur.hpp"
#include "Key.hpp"
#include "Cheese.hpp"
#include "Door.hpp"
#include "Finish.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool requireNumbers(string menuInputTest);


int main()
{
    int menuChoice = 0;
    string menuInputTest;
    bool onlyNumbers = false;
    int gameMenu = 0;


    // Do While loop to allow restarting 

    do
    {
        Space *start = new Start();
        Space *dinosaur = new Dinosaur();
        Space *cheese = new Cheese();
        Space *key = new Key();
        Space *door = new Door();
        Space *finish = new Finish();
        Character player;
        

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

            // free the heap memory

            delete start;
            delete cheese;
            delete key;
            delete dinosaur;
            delete door;
            delete finish;

            return 0;
        } 


        // Select 1 to run begin the game

        if (menuChoice == 1)
        {

            cout << "**************************************************************************";
            cout << endl << endl;
            cout << "I'm afraid that you are a rat!!!" << endl;
            cout << "You have been dropped into a room in a maze!";
            cout << endl << endl << endl;
            cout << "Your goal is to move from room to room and escape" << endl;
            cout << "before your Cheese-O-Meter runs out and you die...";
            cout << endl << endl << endl;


            // Print the "cheese" health meter and first menu

            start->printImg();
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

            cheese->printImg();
            player.printHealth();

            key->printImg();
            dinosaur->printImg();
            door->printImg();
            finish->printImg();


            // free the heap memory

            delete start;
            delete cheese;
            delete key;
            delete dinosaur;
            delete door;
            delete finish;
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