// Value vs Reference Parameters KEY
// Ch 6
// Andrew Dziwanwoski

#include <iostream>
#include <string>

using namespace std;

// Named constants

// Function declarations
void ValueFunctionEx(int x);
void ReferenceFunctionEx(int& y);

// Main function ---------------------------------------------------------------
int main()
{
    // Variable declarations
    int num1, num2;

    // Program title and description
    cout << "Value vs. Reference Parameters" << endl << endl;

    // Value parameter example
    cout << "Value Parameter" << endl << endl;
    cout << "Enter an integer: ";
    cin >> num1;
    ValueFunctionEx(num1);
    cout << "Main num1: " << num1 << endl << endl;

    // Reference parameter example
    cout << "Reference Parameter" << endl << endl;
    cout << "Enter an integer: ";
    cin >> num2;
    ReferenceFunctionEx(num2);
    cout << "Main num2: " << num2 << endl << endl;

    return 0;
}
// Function definitions --------------------------------------------------------
void ValueFunctionEx(int x)
{
    x = x * 2;
    cout << "ValueFunctionEx x: " << x << endl;
}

void ReferenceFunctionEx(int& y)
{
    y = y * 2;
    cout << "ReferenceFunctionEx y: " << y << endl;
}
