// ArrayExample1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Connstant Declaration
const int ARRAY_SIZE = 5;

int main()
{
	// Variable declarations
	int num[ARRAY_SIZE];
	int maxIndex, minIndex, arrayTotal, arrayAverage;

	// Program title and description
	cout << "Array Example 1 - Single Dimenstional Array\n\n";
	cout << "This program will show to declare, initialize, and traverse\n";
	cout << "(or iterate) through an array, as well as find the smalles value, the\n";
	cout << "largest value, the total of the values, and the average value\n\n";

	// Directions
	cout << "You will be asked to enter " << ARRAY_SIZE << " interger values" << endl;

	// Loop for user input
	for (int i = 0; i < ARRAY_SIZE; i++) 
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> num[i];

	}
	
	// Check input by outputting to console
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "num[" << i << "]: " << num[i] << endl;

		
	}
	cout << endl;

	// Find largest value in array
	maxIndex = 0;
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (num[maxIndex] < num[i])
			maxIndex = i;

	}
	cout << "The largest number in the array is: " << num[maxIndex] << endl << endl;

	// Find the smallest value in array
	minIndex = 0;
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (num[minIndex] > num[i])
			maxIndex = i;

	}
	cout << "The smallest number in the array is: " << num[minIndex] << endl << endl;

	// Find the total of all values in array
	arrayTotal = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		arrayTotal = arrayTotal + num[i];

	}
	cout << "The total of all values in the array is: " << arrayTotal << endl << endl;

	// Find the average of the array

	arrayAverage = arrayTotal / ARRAY_SIZE;

	cout << "The average of the values in the array is: " << arrayAverage << endl << endl;


	return 0;
}

