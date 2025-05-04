// FinalProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

// Constant Declaration
const int ARRAY_SIZE = 10;
const double OVERTIME = 1.5;
const double FED_TAX = 0.09;
const double STATE_TAX = 0.05;
const double FICA_TAX = 0.062;
const int REGULAR_HOURS = 40; // used for the calculation of regular hours in the overtime calculation so that hours[i] does not change.


// Column Constant Declarations
const int COL_N = 20; // Name column
const int COL_W = 10; // Wages column
const int COL_H = 10; // Hours column
const int COL_GP = 13; // Gross pay column
const int COL_T = 10; // Taxes column
const int COL_NP = 10; // Net pay column
const int COL_TGP = 7; // Total gross pay column


// Function Declaration
void totals(double& totalGP, double& totalTX, double& totalNP);
bool exitProgram(bool& ifYes);


int main()// Main-------------------------------------------------------------------------------------------
{
	// Variable Declatations
	string fName[ARRAY_SIZE], lName[ARRAY_SIZE], name[ARRAY_SIZE];
	double wage[ARRAY_SIZE], grossPay[ARRAY_SIZE], taxes[ARRAY_SIZE], netPay[ARRAY_SIZE], totalGP = 0, totalTX = 0, totalNP = 0;
	int hours[ARRAY_SIZE];
	bool ifYes = false;
	int option = 0;
	char yayNay = 'y';

	
	// Program Title and Description
	cout << "Andrew's Chicken and BBQ Shack biweekly payroll report." << endl << endl;


	// Tell the user to check output file
	cout << "For the full pay roll report, check the external text file \n";
	cout << "'Dziwanowski_PayrollReport.txt'" << endl << endl;


	// File input and open file
	ifstream fin; // fin and fout used because they are easier to remember and what I have always used
	fin.open("hourlyinput.txt");
	ofstream fout;
	fout.open("Dziwanowski_PayrollReport.txt");
	if (!fin) // if statement for input file error checking
	{
		cout << "Cannot find file. Program terminating..." << endl;
		return 1;
	}

	


	// setprecision for both fout and cout
	fout << setprecision(2) << fixed << showpoint;
	cout << setprecision(2) << fixed << showpoint;

	// Fout column headings
	fout << setw(COL_N) << left << "Name" << setw(COL_W) << right << "Pay Rate" << setw(COL_H) << right << "Hours" << setw(COL_GP) << right << "Gross Pay" << setw(COL_T) << right << "Taxes" << setw(COL_NP) << right << "Net Pay" << endl << endl;

	

	// File Input
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		fin >> lName[i] >> fName[i] >> wage[i] >> hours[i]; // not using get line because it would cause input error

		if (hours[i] > 40) // checking and calculating gross pay with overtime
			grossPay[i] = wage[i] * REGULAR_HOURS + ((wage[i] * OVERTIME) * (hours[i] - 40));
		else
			grossPay[i] = wage[i] * hours[i]; // gross pay calculation for employees without overtime
		
		name[i] = lName[i] + " " + fName[i]; // combining last name in first name into one singular array

		taxes[i] = (grossPay[i] * FED_TAX) + (grossPay[i] * STATE_TAX) + (grossPay[i] * FICA_TAX); // taxes calculations

		netPay[i] = grossPay[i] - taxes[i]; // calculating net pay

		// set up columns in the output file
		fout << setw(COL_N) << left << name[i] << setw(COL_W) << right << wage[i] << setw(COL_H) << right << hours[i] << setw(COL_GP) << right << grossPay[i] << setw(COL_T) << right << taxes[i] << setw(COL_NP) << right << netPay[i] << endl; 

		totalGP = grossPay[i] + totalGP;
		totalTX = taxes[i] + totalTX;
		totalNP = netPay[i] + totalNP;
	}

	do {
		do {

			// Menu structure
			cout << "For more information, please choose an option from the menu below:" << endl << endl;
			cout << " 1 - View payroll statistics" << endl;
			cout << " 2 - View overtime employees" << endl;
			cout << " 3 - Exit the program" << endl << endl;

			cout << "What would you like to do?: ";
			cin >> option;
			cout << endl; // endline to make it look pretty
			if (!cin || option < 1 || option > 3)
			{
				system("cls");
				cout << "Invalid input. Try again." << endl;
				cin.clear();
				cin.ignore(100, '\n');
				
			}
		} while (!cin || option < 1 || option > 3);
		if (option == 1) // Payroll statistics menu option
		{
			cout << "Weekly Payroll Statistics" << endl << endl;
			// output payroll statistics
			
			totals(totalGP, totalNP, totalTX);
			do {
				cout << "Do you want to exit the program? (ENTER ONLY 'Y' OR 'N'): "; // asks user if they want to exit the program or if they want to go back to the menu
				cin >> yayNay;
				if (yayNay != 'y' && yayNay != 'Y' && yayNay != 'n' && yayNay != 'N')
				{
					cout << "Invalid input. Try again." << endl;
					cin.clear();
					cin.ignore(100, '\n');

				}
			} while (yayNay != 'y' && yayNay != 'Y' && yayNay != 'n' && yayNay != 'N');
		}
		else if (option == 2) // Overtime report menu option
		{
			cout << "Employees who qualified for overtime:" << endl;
			// output overtime employees
			for (int i = 0; i < ARRAY_SIZE; i++)
			{
				if (hours[i] > 40)
					cout << setw(17) << left << name[i] << setw(5) << right << hours[i] << " hours" << endl; // using numbers here because I feel like I already have too many constants and I'm losing track of how long each one is ;_;
			}
			do {
				cout << "Do you want to exit the program? (ENTER ONLY 'Y' OR 'N'): "; // asks user if they want to exit the program or if they want to go back to the menu
				cin >> yayNay;
				if (yayNay != 'y' && yayNay != 'Y' && yayNay != 'n' && yayNay != 'N')
				{
					cout << "Invalid input. Try again." << endl;
					cin.clear();
					cin.ignore(100, '\n');

				}
			} while (yayNay != 'y' && yayNay != 'Y' && yayNay != 'n' && yayNay != 'N');
			
		}
		else if (option == 3) // exits program
		{
			exitProgram(ifYes);
			return 1;
		}
		


		if (yayNay == 'Y' || yayNay == 'y') // exits the program or resets the menu if the user wants to
		{
			exitProgram(ifYes);
			return 1;
		}
		

		if (yayNay == 'n' || yayNay == 'N') // clears the screen and sets ifYes to false which resets the menu
		{
			system("CLS");
			ifYes = false;
		}

	} while (ifYes == false); // Exit loop

	// Close the files
	fin.close();
	fout.close();



	return 0;
}

// Functions------------------------------------------------------------------------------------------------
void totals(double& totalGP, double& totalTX, double& totalNP)
{
	cout << setw(COL_N) << left << "Total Gross Pay:" << setw(2) << left << "$" << setw(COL_TGP) << right << totalGP << endl; // output for total gross pay
	cout << setw(COL_N) << left << "Total Taxes:" << setw(2) << left << "$" << setw(COL_TGP) << right << totalTX << endl; // output for total taxes taken out
	cout << setw(COL_N) << left << "Total Net Pay:" << setw(2) << left << "$" << setw(COL_TGP) << right << totalNP << endl; // output for total net pay

}

bool exitProgram(bool& ifYes)
{
	// exit program
	cout << "Exiting program..." << endl;
	ifYes = true;
	return ifYes;
}
