//Paul Rowe
//11/5/24
//Looping Lab
//Extra: Tells user the code if they choose to not guess again
#include <cstdlib>
#include <iostream>
using namespace std;
//including neccessary libraries

int main()
{
    //Exercise 1
    string quotes[7];
    cout << "Exercise 1" << endl;

    for (int i = 1; i < 7; i++)
    {
        cout << "Enter quote (with no spaces) for Day: " << i << endl;
        cin >> quotes[i];
    }
    //for loop that asks user for seven inputs
 
    for (string quote : quotes) {
        cout << quote << endl;
    }

    //Exercise 2
    int energy = 5;
    int supplies = 0;
    int turn;

    cout << "\nExercise 2" << endl;

    while (energy > 0 && supplies < 10) {
        cout << "\nEnergy: " << energy << ", Supplies: " << supplies << endl;
        cout << "Choose an action:\n1: Search for supplies (costs 1 energy, adds 1 supply)\n2: Rest (restores 2 energy)\n";
        cout << "Enter your choice: ";
        cin >> turn;

        if (turn == 1) {
            energy -= 1;
            supplies += 1;
            cout << "You searched for supplies.\n";
            //increments amount of supplies by one
        }
        else if (turn == 2) {
            energy += 2;
            cout << "You rested and restored energy.\n";
            //increments amount of energy by two
        }
        else {
            cout << "Invalid choice. Please try again.\n";
            //error trap
        }
        
    }

    if (supplies >= 10) {
        cout << "Congratulations! You collected enough supplies to escape the zombies.\n";
    }
    else {
        cout << "Unfortunately, you were too tired and ran out of energy. The zombies killed you.\n";
    }

    //Exercise 3
    int guess;
    int random = rand() % 900 + 100;
    //generates random three digit code
    char rpt;
    cout << "\nExercise 3" << endl;
    do {
        cout << "Enter a 3-digit code guess: ";
        cin >> guess;

        if (guess == random) {
            cout << "Congratulations! You unlocked the box!\n";
            return 0;
        }
        else {
            cout << "Incorrect. Try again (y/n): ";
            cin >> rpt;
            //repeats code if user incorrectly guesses
        }
    } while (rpt == 'Y' || rpt == 'y');

    cout << "You failed to unlock the box.\n";
    cout << "The code was " << random << ".";
}


