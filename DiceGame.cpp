/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST - 210
 * Wed/Fri
 * Worked with Zachary Vollmer
 */
#include <iostream>
#include "Die.h"
#include <ctime>

using namespace std;

//define functions
void showDice(Die[]);        // both go through die array
int getTotalScore(Die[]);

int main()    // function main
{
    // seed the random generator within the die function
    srand(time(NULL));

    // instance of a class
    // Die.ccp initializes the attributes
    Die myDice;

    // array of 5 dice
    Die theDice[5];

    //populates array
    for(int i = 0; i < 5; i++)
    {
        // use roll function to populate the array
        theDice[i].roll();
    }

    // print first roll to the user
    showDice(theDice);
    cout << endl;

    // ask user how many dice to reroll
    // 3 chances to reroll
    for(int i = 0; i < 3; i++)
    {
        cout << "How many times would you like to roll? "
                "A positive int pls." << endl;
        int rollInput;
        cin >> rollInput;
        for (int j = 0; j < rollInput; j++)
        {
            // ask user which die to reroll
            cout << "Which die do you wanna reroll? "
                    "Options: 1-5" << endl;
            // store as
            int numDieInput;
            cin >> numDieInput;

            //reroll based on the user input
            // using the roll function
            theDice[numDieInput-1].roll();


        }
        // prints current roll of 5dies nums and values
        showDice(theDice);
        cout << endl;
    }
    showDice(theDice);

    // get the new value of dice and print
    int totalScore;
    totalScore = getTotalScore(theDice);
    cout << "Your total score is: " << totalScore;
}
int getTotalScore(Die theDice[])
{
   int totalScore = 0;
    //loop and add total
    for(int i = 0; i < 5; i++)
    {
        totalScore += theDice[i].getValue();

    }
    return totalScore;
}
void showDice(Die theDice[])
{
    cout << "1 2 3 4 5" << endl;
    cout << "_________" << endl;
    // print the 5 dice
    for(int i = 0; i < 5; i++)
    {
        cout << int(theDice[i].getValue()) << " ";
    }
}

