// SumOfRange.cpp
// Andrew Dziwanowski
// 10/10/22

#include <iostream>

using namespace std;

int main()
{
    // Variables
    int num1, num2, sum;

    // Program title and description
    cout << "SUM OF RANGE" << endl;
    cout << "The purpose of this program is to take 2 numbers that the user inputs\n";
    cout << " and add all of the numbers in between and output the sum of the range." << endl << endl;

    // Input from user num1
    cout << "Please enter a number between 1 and 50 (WHOLE NUMBER): ";
    cin >> num1;
    cout << endl;

    if (num1 < 1 || num1 >= 50) // Input failure failsafe
        {
        cout << "Input error detected. Terminating program..." << endl;
        return 1;
        }
    // Inpur from user num2
    cout << "Please enter a second number between 1 and 50 (WHOLE NUMBER): ";
    cin >> num2;

    if (num2 > 50 || num2 <= num1)
    {
        cout << "Input error detected. Terminating program..." << endl;
        return 1;
    }

    sum = 0; // making sum 0 for easier addition

    // Loop to calculate sum
    while (num1 <= num2)
    {
        sum = sum + num1;
        num1++;
    }
    cout << endl << endl;
    // Out put of sum
    cout << "The sum of your range is: " << sum << endl;


    return 0;
}