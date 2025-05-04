// doWhileLoopPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable declarations
    int i; // counter
    int num;

    cout << "DO ... WHILE Loop Example #1" << endl;
    i = 11;
    do
    {
        cout << i << " ";
        i = i + 5;

    } while (i <= 10);

    cout << endl << endl;

    cout << "DO ... WHILE Loop Example #2" << endl;
    do
    {
        cout << "Enter an integer between 0 and 50: ";
        cin >> num;
    } while (num < 0 || num > 50);
    
    
    
    
    return 0;
}
