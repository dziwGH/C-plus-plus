// Ch7StringExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

int main()
{
    // Variables
    string fName, lName, wholeName;
    char letter;

    // Program title and description
    cout << "string processing example" << endl << endl;

    // Colledct user input
    cout << "Enter your first name: ";
    cin >> fName;
    cout << "Enter your last name: ";
    cin >> lName;

    // Concatenation - adding together
    wholeName = fName + " " + lName;
    cout << "Whole name = " << wholeName << endl;

    // length examples
    cout << "Length of fName = " << fName.length() << endl;
    cout << "Length of lName = " << lName.length() << endl;
    cout << "Length of wholeName = " << wholeName.length() << endl;

    // Return the index of first occurrence of character
    cout << "What letter do you want to search for?: ";
    cin >> letter;
    cout << "Index/position of char " << letter << " = " << wholeName.find(letter) << endl;
    for (int i = 0; i < wholeName.length(); i++)
        cout << i << " " << wholeName[i] << endl;

    // Returns a portion of a string
    cout << "Substring of wholeName from position 8 to 15 = " << wholeName.substr(8, 8) << endl;



    // Delete all characters in string
    fName.clear();

    // check to see if delete worked
    cout << "First name = " << fName << endl;

    // check to see if string is empty
    cout << "Is first name empty?" << fName.empty() << endl;

    return 0;
}

