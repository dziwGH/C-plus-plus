// Cube.cpp 
// Andrew Dziwanowski
// 9/21/22
// Program description: Menu template to use as start file for future programs that utilize a menu


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named Constants



int main()
{
    // Variable Declarations
    double length, faceArea, totsurfArea, facePerim, cubeVolume;
    char choice;

    // Program title and description
    cout << "CUBE" << endl << endl;
    cout << "The purpose of this program is to calculate different measurements of a\n";
    cout << "square cube. The user will input the length of one side of the cube, and\n";
    cout << "then just needs to choose what calculation they want to be done." << endl << endl;

    // set up menu
    cout << "Choose the corresponding letter for which calculation you would like." << endl;
    cout << "  A - Perimeter of one face" << endl;
    cout << "  B - Surface area of one face" << endl;
    cout << "  C - Surface area of the whole cube" << endl;
    cout << "  D - Volume of the cube" << endl;

    // Ask for user input
    cout << "Enter the length of one side of your cube: ";
    cin >> length;
    cout << endl;
    cout << "Enter selected menu letter here: ";
    cin >> choice;
    cout << endl;
    


    // Menu Structure using SWITCH and letter options
    switch (choice)
    {
    case 'a':
    case 'A':
        cout << "You chose calculation A." << endl << endl;
        facePerim = 4 * length;
        cout << "The perimeter of one face is: " << facePerim << endl << endl;
        break;
    case 'b':
    case 'B':
        cout << "You chose calculation B." << endl << endl;
        faceArea = pow(length, 2);
        cout << "The area of one face is: " << faceArea << endl << endl;
        break;
    case 'c':
    case 'C':
        cout << "You chose calculation C." << endl << endl;
        totsurfArea = (pow(length, 2)) * 6;
        cout << "The surface area of the cube is: " << totsurfArea << endl << endl;
        break;
    case 'd':
    case 'D':
        cout << "You chose calculation D." << endl << endl;
        cubeVolume = pow(length, 3);
        cout << "The volume of the cube is: " << cubeVolume << endl << endl;
        break;
    default:
        cout << "Input error detected; terminating program..." << endl;
    } 

    return 0;

}

