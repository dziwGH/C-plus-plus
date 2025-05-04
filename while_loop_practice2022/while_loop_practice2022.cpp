// Template.cpp 
// Andrew Dziwanowski
// 9/21/22
// Program description: Menu template to use as start file for future programs that utilize a menu


#include <iostream>
#include <string>

using namespace std;

// Named Constants



int main()
{
    // Variable Declarations
    int i = 5; // declare and initialize variable used to control loop

    // Program title and description
    cout << "Counter-controlled while loop example #1" << endl << endl;

    while (i >= 0)
    {
        cout << i << endl;
        i--;
    }

    cout << "Sentinel-controlled while loop example" << endl << endl;
    int sentinel = 3;
    int choice = 0;
    
    while (choice != sentinel)
    {
        cout << "Guess a number between 1 and 5: ";
        cin >> choice;
        cout << endl;
    }

    return 0;

}

