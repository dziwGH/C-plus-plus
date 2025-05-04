// nestedLoopPractice.cpp 
// Andrew Dziwanowski
// 10/12/22

#include <iostream>


using namespace std;

int main()
{

	// variables
	int i, j, rows;
	char answer;

	cout << "Nested loop practice - drawing triangles" << endl << endl;

	// Triangle 1
	for (i = 1; i <= 5; i++) // outer loop controls # of rows
	{
		for (j = 1; j <= i; j++) // inner for loop controls # of asterisks
		{
			cout << "*";
		}
		
		cout << endl;

	}

	// Triangle 2
	for (i = 5; i >= 1; i--) // outer loop controls # of rows
	{
		for (j = 1; j <= i; j++) // inner for loop controls # of asterisks
		{
			cout << "*";
		}
		
		cout << endl;

	}	

	// Triangle 3
	do
	{
		do
		{ // collect user input and verify number is within range
			cout << "Enter number of rows (between 2 and 20): ";
			cin >> rows;
			if (rows < 2 || rows > 20)
				cout << "Invalid number. Please try again." << endl;
		} while (rows < 2 || rows > 20);

		// Once valid number determinded, draw triangle
		for (i = 1; i <= rows; i++) // outer loop controls # of rows
		{
			for (j = 1; j <= i; j++) // inner for loop controls # of asterisks
			{
				cout << "*";
			}

			cout << endl;

		}
		cout << endl << "Would you like to make another triangle? Enter Y or N: ";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}