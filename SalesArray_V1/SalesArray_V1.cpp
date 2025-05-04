// SalesArray_V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

// Constant Declaration
const int ARRAY_SIZE = 7;
const int COL1 = 4; // column for 'day' output
const int COL2 = 1; // column to output which day it is ouptuting
const int COL3 = 6; // column to output the ':' and makes space for the next columns
const int COL4 = 2; // column for $ output, creates space for the money
const int COL5 = 6; // column for sale output
const int COL_W = 20; // column for the weekly total output
const int COL_WT = 7; // column for the weekly total money output
const int COL_HSD = 20; // column for the highest sales day output, also used to ouptu lowest day


int main()
{
    // Variable declarations
    double day[ARRAY_SIZE], weeklyTotal = 0, weeklyAvg;
    int highestDay = 0, lowestDay = 0;


    // Open file and declare input and output
    ifstream fin;
    fin.open("daily_sales.txt");


    // Program title and description
    cout << "Weekly Sales Report for Andrew's Chicken and BBQ shack:" << endl << endl;

    // Input from file into the array
    cout << setprecision(2) << fixed << showpoint;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        fin >> day[i];
        cout << setw(COL1) << left << "Day " << setw(COL2) << left << i + 1 << setw(COL3) << left << ":" << setw(COL4) << left << "$" << setw(COL5) << day[i] << endl;
        weeklyTotal = weeklyTotal + day[i];
        
        if (day[highestDay] < day[i]) 
        {
            highestDay = i;
        }
        if (day[lowestDay] > day[i])
        {
            lowestDay = i;
        }



    }
    
    // Organizing the output for weekly total, weekly average, lowest day, and highest day
    cout << endl;
    cout << setw(COL_W) << left << "Weekly Total:" << setw(COL4) << left <<"$" << setw(COL_WT) << right << weeklyTotal << endl;
    
    weeklyAvg = weeklyTotal / ARRAY_SIZE; // Calculation for the weekly average
    cout << setw(COL_W) << left << "Weekly Average:" << setw(COL4) << left << "$" << setw(COL_WT) << right << weeklyAvg << endl;
    cout << setw(COL_HSD) << left << "Highest Sales Day:" << setw(COL4) << left << "$" << setw(COL_WT) << right << day[highestDay] << endl;
    cout << setw(COL_HSD) << left << "Lowest Sales Day:" << setw(COL4) << left << "$" << setw(COL_WT) << right << day[lowestDay] << endl;


    // Closing external file
    fin.close();





    return 0;
}


