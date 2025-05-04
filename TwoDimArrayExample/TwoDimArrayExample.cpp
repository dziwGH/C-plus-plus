// TwoDimArrayExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    // Variable Declarations
    string name[5]; // 1-dimensional array to hold student names
    double tests[5][3]; // 2-dimensional array to hold 3 tests per student
    int row, col; // counters


    ifstream fin; // declare filestream variable
    fin.open("student_data.txt"); // open file
    

    // Program title and description
    cout << "Two Dimensional Array Example" << endl << endl;
    cout << "This program utilizes parallel arrays: one being a one-dimensional\n";
    cout << "array to stor student names and the other being a two-dimensional\n";
    cout << "array to store 3 exam scores. The input will be read from an external\n";
    cout << "file and then printed on the screen." << endl << endl;


    // Read array data in from file and store in both arrays
    for (row = 0; row < 5; row++) // outer loop iterates through each row
    {
        fin >> name[row];
        for (col = 0; col < 3; col++) // inner for loop iterates through each column
        {
            fin >> tests[row][col];
        }
    }

    // Print column heading on screen
    cout << setw(10) << left << "Name" << setw(7) << right << "Test1" << setw(7) << right << "Test2" << setw(7) << right << "Test3" << endl;

    // Print data from both arrays
    for (row = 0; row < 5; row++) // outer loop iterates through each row
    {
        cout << setw(10) << left << name[row]; // at start of each row, print name
        for (col = 0; col < 3; col++) // inner for loop iterates through each column
        {
            cout << setw(7) << right << tests[row][col];
        }
        cout << endl;
    }

    // Close input file
    fin.close();


    return 0;
}

