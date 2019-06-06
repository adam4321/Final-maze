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
        Space *one = new Start();
        Space *two = new Dinosaur();
        Space *three = new Cheese();
        Space *four = new Key();
        Space *five = new Door();
        Space *six = new Finish();

        one->setDirections(two, four, NULL, NULL);
        two->setDirections(six, NULL, NULL, NULL);

        Space *current;
        Character player;
        bool finished = false;
        bool wall = true;
        int roomNum = 1;
        

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
    #         ((("`             (((---~"`         //                     #
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

            delete one;
            delete two;
            delete three;
            delete four;
            delete five;
            delete six;

            return 0;
        } 


        // Select 1 to run begin the game

        if (menuChoice == 1)
        {
            cout << ".........................................................................." << endl;
            cout << "**************************************************************************";
            cout << endl << endl;
            cout << "I'm afraid that you are a rat!!!" << endl;
            cout << "You have been dropped into a room in a maze!";
            cout << endl << endl << endl;
            cout << "Your goal is to move from room to room and escape" << endl;
            cout << "before your Cheese-O-Meter runs out and you die...";
            cout << endl << endl;
            cout << "You loose a piece of cheese for each move" << endl;
            cout << "and you need to find a key to escape...";
            cout << endl << endl << endl;


            cout << "Press enter to Begin";
            cout << endl << endl;

            char temp = 'x';

            cin.clear();
            cin.ignore();

            while (temp != '\n')
            {
                cin.get(temp);
            }


            // Set the current room to one to start the game

            current = one;


            // Game loop that runs until the player wins or dies

            while (finished == false && player.getHealth() > 0)
            {
                wall = true;
                current->printImg();

                while (wall == true && player.getHealth() > 0)
                {
                    player.printHealth();

                    onlyNumbers = false;

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

                    // Check if the move is a wall or else move the player

                    if (gameMenu == 1)
                    {
                        if (current->getUp() == NULL)
                        {
                            cout << "Sorry that is a wall..." << endl;
                            cout << "Try again.";
                            cout << endl << endl;
                        }

                        else
                        {
                            wall = false;
                            roomNum = 6;
                            current = current->getUp();
                            
                        }

                        finished = current->getFinish();
                        player.setHealth(player.getHealth() - 1);
                    }

                    else if (gameMenu == 2)
                    {
                        if (current->getRight() == NULL)
                        {
                            cout << "Sorry that is a wall..." << endl;
                            cout << "Try again.";
                            cout << endl << endl;
                        }

                        else
                        {
                            wall = false;
                            roomNum = 6;
                            current = current->getRight();
                        }

                        finished = current->getFinish();
                        player.setHealth(player.getHealth() - 1);
                    }

                    else if (gameMenu == 3)
                    {
                        if (current->getDown() == NULL)
                        {
                            cout << "Sorry that is a wall..." << endl;
                            cout << "Try again.";
                            cout << endl << endl;
                        }

                        else
                        {
                            wall = false;
                            roomNum = 6;
                            current = current->getDown();
                        }

                        finished = current->getFinish();
                        player.setHealth(player.getHealth() - 1);
                    }

                    else if (gameMenu == 4)
                    {
                        if (current->getLeft() == NULL)
                        {
                            cout << "Sorry that is a wall..." << endl;
                            cout << "Try again.";
                            cout << endl << endl;
                        }

                        else
                        {
                            wall = false;
                            roomNum = 6;
                            current = current->getLeft();
                        }

                        finished = current->getFinish();
                        player.setHealth(player.getHealth() - 1);
                    }
                }
            }


            //Check the state at the end and print a win or a death

            if (finished == true)
            {
                six->printImg();

                cout << "Congratulations You have escaped the maze..." << endl;
                cout << "You are a lucky rat!";
                cout << endl << endl;
                cout << "Press enter to finish";
                cout << endl << endl;

                char temp = 'x';

                cin.clear();
                cin.ignore();

                while (temp != '\n')
                {
                    cin.get(temp);
                }

                cout << endl << endl << endl << endl << endl << endl;
            }
            
            else
            {

    cout << R"(

                           ...
                         ;::::;
                       ;::::; :;
                     ;:::::'   :;
                    ;:::::;     ;.
                   ,:::::'       ;           OOO\
                   ::::::;       ;          OOOOO\
                   ;:::::;       ;         OOOOOOOO
                  ,;::::::;     ;'         / OOOOOOO
                ;:::::::::`. ,,,;.        /  / DOOOOOO
              .';:::::::::::::::::;,     /  /     DOOOO
             ,::::::;::::::;;;;::::;,   /  /        DOOO
            ;`::::::`'::::::;;;::::: ,#/  /          DOOO
            :`:::::::`;::::::;;::: ;::#  /            DOOO
            ::`:::::::`;:::::::: ;::::# /              DOO
            `:`:::::::`;:::::: ;::::::#/               DOO
             :::`:::::::`;; ;:::::::::##                OO
             ::::`:::::::`;::::::::;:::#                OO
             `:::::`::::::::::::;'`:;::#                O
              `:::::`::::::::;' /  / `:#
               ::::::`:::::;'  /  /   `#


              I'm sorry but you've died
                        --- 
               Press enter to Try again
)";

                char temp = 'x';

                cin.clear();
                cin.ignore();

                while (temp != '\n')
                {
                    cin.get(temp);
                }

                cout << endl << endl << endl << endl << endl << endl;
            }
            

            // two->printImg();
            // player.printHealth();

            // three->printImg();
            // player.printHealth();
            
            // four->printImg();
            // player.printHealth();

            // five->printImg();
            // player.printHealth();


            // free the heap memory

            delete one;
            delete two;
            delete three;
            delete four;
            delete five;
            delete six;
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