// Shapes_V2.cpp 
// Andrew Dziwanowski
// 10/16/22
// Program description: Will calculate the area of a chosen shape by the user.


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named Constants
const double PI = 3.1415;


int main()
{
    // Variable Declarations
    int shapeChoice;
    double tArea, rArea, cArea, length, width, height, base, radius;
    char ans;
    // Program title and description
    cout << "SHAPES_V2" << endl << endl;
    cout << "The purpose of this program is to calculate the area of a \n";
    cout << "shape chosen by the user. The user will need to input some variables\n";
    cout << "for the program to work, for example if the user chooses rectangle, they\n";
    cout << "will need to input a length and width variable.\n";
    cout << "For simplicity, the only choices will be a rectangle, circle, or triangle.\n" << endl << endl;


    do {
        // set up menu
        cout << "Choose the corresponding number for the shape you would like the area for." << endl;
        cout << "  1 - Rectangle" << endl;
        cout << "  2 - Circle" << endl;
        cout << "  3 - Triangle" << endl;
        cout << "  4 - Exit program" << endl;
        do {
         // Ask for user input
            cout << "Enter selected shape number here (1, 2, 3, 4): ";
            cin >> shapeChoice;
            // Exits program if user chooses 4
            if (shapeChoice == 4) 
            {
                cout << "you have successfully ended the program." << endl << endl;
                return 0;
            }
            // Checks for invalid input
            if (!cin || shapeChoice < 1 || shapeChoice > 3)
            {
                cout << "Invalid menu selection. Please try again." << endl;
                cin.clear(); // restores input stream to a working state
                cin.ignore(100, '\n'); // ignores any garbage in the input stream
            }
        } while (!cin || shapeChoice < 1 || shapeChoice > 3);

        // Describe input format for user
        cout << "For each measurement requested, please enter an integer or decimal value. Example: 6.25" << endl;
        cout << "The program will calculate area with an accuracy to 2 decimal places." << endl << endl;
        // Menu Structure
        if (shapeChoice == 1) // be sure to use == and not =
        {
            cout << "You chose Regtangle." << endl;
            cout << "Enter your length here: ";
            cin >> length;
            cout << "Enter your width here: ";
            cin >> width;
            rArea = length * width;
            cout << "The area is: " << rArea << endl << endl;

        }
        else if (shapeChoice == 2) // be sure to use == and not =
        {
            cout << "You chose Circle." << endl;
            cout << "Enter your radius here: ";
            cin >> radius;
            cArea = PI * (radius * radius);
            cout << "The area is: " << cArea << endl << endl;
        }
        else if (shapeChoice == 3) // be sure to use == and not =
        {
            cout << "You chose Triangle." << endl;
            cout << "Enter your height here: ";
            cin >> height;
            cout << "Enter your base here: ";
            cin >> base;
            tArea = (height * base) / 2;
            cout << "The area is: " << tArea << endl << endl;
        }
        else
        {
            cout << "Input error detected; terminating program..." << endl;
        }
        
        cout << endl << endl;
 
        cout << "Would you like to find the area of another shape? Enter Y or N: ";
        cin >> ans;

        system("cls");

    } while (ans == 'y' || ans == 'Y'); // end outer loop
   
    
    return 0;

}

