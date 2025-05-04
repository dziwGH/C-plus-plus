// ForLoopPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The FOR loop is a specialized form the the WHILE loop and is ussed for writing counter-controlled loops. For example, you know up front that the loop should execute "x" number of times. the FOR loop is uniqe in that it initializes, tests, and modfies all in one line.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Named Variables
    int i; // counter variable used in all loops below
    string fName;
    int no_times_print;
    // Example 1
    cout << "FOR loop example 1" << endl;
    for (i = 0; i < 4; i++)
        cout << i << " ";
    cout << endl << endl;

    // Example 2
    cout << "FOR loop example 2" << endl;
    for (i = 1; i <= 3; i++)
    {
        cout << "Hello!" << endl;
        cout << "*" << endl;
    }

    // Exmple 3
    cout << "Enter your first name: ";
    cin >> fName;
    cout << "How many times would you like to your name to print? ";
    cin >> no_times_print;
    for (i = 1; i <= no_times_print; i++)
        cout << fName << endl;


    // Example 4
    for (i = 3; i >= 1; i--)
        cout << " " << i;

    return 0;
}

