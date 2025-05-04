// FinalProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

// Constant Declaration
const int ARRAY_SIZE = 10;

// Function Declaration


int main()
{
	// Variable Declatations
	string fName[ARRAY_SIZE], lName[ARRAY_SIZE];
	double wage[ARRAY_SIZE];
	int hours[ARRAY_SIZE];

	// File input and open file
	ifstream fin;
	fin.open("hourlyinput.txt");


	// Program Title and Description
	cout << "Andrew's Chicken and BBQ Shack biweekly payroll report.";

	// File Input
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		fin >> lName[i] >> fName[i] >> wage[i] >> hours[i];
	}

	cout << fName << " " << lName << " " << wage << " " << hours;



	return 0;
}

