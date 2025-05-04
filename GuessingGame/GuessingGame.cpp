// GuessingGame.cpp 
// Andrew Dziwanowski
// 10/17/22

#include <iostream>
#include <cstdlib>           // both of these libraries need to be included 
#include <ctime> 

using namespace std;

int main()
{
    // Variable declarations
    int correct_num;
    int guess;
    int i;

    // Setting up the random number generator
    srand(time(0));                                    // these two lines of code generate a  
    correct_num = rand() % 100;  // random number between 0 and 100

    // Program title and desctiption
    cout << "Guessing Game Program - This program is a guessing game.\n";
    cout << "The user is prompted to input a number between 0 and 100 and then adjust\n";
    cout << "their answer according to the info output by the program" << endl << endl;
   
    // Ask the user for input
    

    for (i = 10; i >= 1; i--) // for loop used to determine the amount of tries the user has. i = the amount of attempts.
    {
        cout << "You have " << i << " attempts remaining." << endl << endl; // shows the user how many attempts they have left
        cout << "Enter a number between 0 and 100: ";
        cin >> guess;
        if (guess < 0 || guess > 100)
        { // Checks if the number entered is within the valid range
            cout << "You guessed outside of the range. How did you even manage to do that. The instructions were literally\n";
            cout << "infront of your face. Can you not read ? Are you literally illiterate ? ? ? ? ? ? ? ? ? ?" << endl << endl;
        }
        else if (guess > correct_num) // checks if the number is too high
            cout << "You guessed too high, try again." << endl << endl;
        else if (guess < correct_num) // checks if the number is too low
            cout << "You guessed too low, try again." << endl << endl;
        
        if (guess == correct_num) // checks if the user guesses the right number and congradulates them
        {
            cout << "Congrats! You guessed the right number!" << endl << endl;
            return 1;
        }
        else if (i == 1) // ends the program when the user runs out of attempts.
        {
            cout << "You have run out of guesses." << endl;
            return 1;
        }
    } 
     
    return 0;
}