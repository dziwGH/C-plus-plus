// SearchArrayExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Named constants
const int ARRAY_SIZE = 7;

int main()
{
	// Variable declarations
	int list[ARRAY_SIZE] = { 35,12,27,18,45,16,12 };
	int num;
	bool isFound = false;
	int count_num = 0; // Initialize to 0 to assume value is not in list

	// Program titel and description
	cout << "Search an Array" << endl << endl;

	// Ask user for number to search
	cout << "What value would you like to search for? ";
	cin >> num;

	// Search array (list) to determin if value (num) is in the array/list
	for (int i = 0; i < ARRAY_SIZE; i++) 
	{
		if (num == list[i])
		{
			isFound = true;
			break; // breaks out of loop if num is found in the list
		}
			
	}

	// Report results of above fro loop - was num in teh list
	if (isFound == true)
		cout << "The number " << num << " is in the list." << endl;
	else
		cout << "The number " << num << " is not in the list." << endl;

	// Count how many times a value is in the list
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (num == list[i])
		{
			count_num++; // counting how many times value is in the list (running total)
			cout << "list[" << i << "]" << endl;
		}
		
	}
	cout << "The number " << num << " is in the list " << count_num << " times." << endl;


	return 0;
}