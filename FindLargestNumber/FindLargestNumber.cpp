// FindLargestNumber.cpp 
// 10/17/22
// Andrew Dziwanowski

#include <iostream>
#include <string>

using namespace std;

// Named Constants

// Function Declaration/prototypes - must be placed before main so that program will compile (function id defined below main)
double larger(double x, double y); //<-- copy function header and add semicolon to the end
double comparethree(double x, double y, double z);

// Main program----------------------------------------------------------------------------------------------
int main()
{
    // Variable Declarations
    double num1, num2, num3, answer;

    // Program title and description
    cout << "Find Largest Number Program" << endl << endl;
    cout << "This program will ask you for two integers and will determin which is the largest." << endl << endl;

    // Ask user for input
    cout << "Enter the first value: ";
    cin >> num1;
    cout << "Enter the second value: ";
    cin >> num2;
    cout << "Enter the third value: ";
    cin >> num3;

    // function call - control passes to the function and then back to main after function is finished
    answer = comparethree(num1, num2, num3);


    cout << "The largest of the numbers you entered is: " << answer;
    return 0;
}

// Function Definitions--------------------------------------------------------------------------------------
double larger(double x, double y)
{
    double max; // Local variable to store the larges value

    if (x >= y)
        max = x;
    else
        max = y;
    
    return max;

}

double comparethree(double x, double y, double z)
{
    return larger(x, (larger(y, z)));
}