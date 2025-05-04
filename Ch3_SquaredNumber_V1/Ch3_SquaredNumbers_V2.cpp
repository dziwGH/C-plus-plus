// Ch3_SquaredNumbers_V2.cpp
// Andrew Dziwanowski
// 9/17/22
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Named Constants

int main()
{
    // Local Variables
    int num1, num2, num3, num4, num5, square1, square2, square3, square4, square5;

    // File stream variables
    ifstream fin; // File Input
    ofstream fout; // File Output

    // Opening the file for input
    fin.open("SquaredNumbers_input.txt");
    fout.open("SquaredNumbers_output.txt");

    // Read the numbers from the input file
    fin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Program title and description print
    cout << "Welcome to Squared Numbers V1. This program will take numbers input from an outside file named \"SquaredNumbers_input\", and will then square the number\n";
    cout << "In Version 2, the program will output to an external file named \"SquaredNumbers_output\".\n";
    cout << endl;

    // Compute the squares
    square1 = num1 * num1;
    square2 = num2 * num2;
    square3 = num3 * num3;
    square4 = num4 * num4;
    square5 = num5 * num5;

    // Output to the console.
    fout << num1 << " squared is " << square1 << endl;
    fout << num2 << " squared is " << square2 << endl;
    fout << num3 << " squared is " << square3 << endl;
    fout << num4 << " squared is " << square4 << endl;
    fout << num5 << " squared is " << square5 << endl;

    // Closing the file
    fin.close();
    fout.close();

    return 0;
}

