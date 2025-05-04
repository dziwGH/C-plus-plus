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
    int choice;

    // Program title and description
    cout << "MENU TEMPLATE" << endl << endl;
    cout << "The purpose of this program is to provide a meu structure as a beginning\n";
    cout << "for future programs that will utilize a menu.\n";
    cout << "For simplicity, we are usign a Mexican ood truck" << endl << endl;

    // set up menu
    cout << "Choose the corresponding number for which menu item you'd like." << endl;
    cout << "  1 - Burrito" << endl;
    cout << "  2 - Taco" << endl;
    cout << "  3 - Quesadilla" << endl;

    // Ask for user input
    cout << "Enter selected menu number here: ";
    cin >> choice;
    

    // Menu Structure
    if (choice == 1) // be sure to use == and not =
    {
        cout << "You chose burrito." << endl;
    }
    else if (choice == 2) // be sure to use == and not =
    {
        cout << "You chose taco." << endl;
    }
    else if (choice == 3) // be sure to use == and not =
    {
        cout << "You chose quesadilla." << endl;
    }
    else
    {
        cout << "Input error detected; terminating program..." << endl;
    }

    return 0;

}

