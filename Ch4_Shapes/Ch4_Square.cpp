// Ch4_Shappes.cpp 
// Andrew Dziwanowski
// 9/25/22
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
    // Program title and description
    cout << "SHAPES_V1" << endl << endl;
    cout << "The purpose of this program is to calculate the area of a \n";
    cout << "shape chosen by the user. The user will need to input some variables\n";
    cout << "for the program to work, for example if the user chooses rectangle, they\n";
    cout << "will need to input a length and width variable.\n";
    cout << "For simplicity, the only choices will be a rectangle, circle, or triangle.\n" << endl << endl;

    // set up menu
    cout << "Choose the corresponding number for the shape you would like the area for." << endl;
    cout << "  1 - Rectangle" << endl;
    cout << "  2 - Circle" << endl;
    cout << "  3 - Triangle" << endl;

    // Ask for user input
    cout << "Enter selected shape number here: ";
    cin >> shapeChoice;


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

    return 0;

}

