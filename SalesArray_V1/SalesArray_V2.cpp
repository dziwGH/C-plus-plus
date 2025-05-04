// SalesArray_V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

// Function Declarations
void printDailySales(double day[]);
double findTotal(double day[]);
double findMax(double day[]);
double findMin(double day[]);



int main()
{
    // Variable declarations
    double day[ARRAY_SIZE], weeklyTotal = 0, weeklyAvg;
    int highestDay = 0, lowestDay = 0;


    


    // Program title and description
    cout << "Weekly Sales Report for Andrew's Chicken and BBQ shack:" << endl << endl;

    // Function call to print the daily sales
    printDailySales(day);
    
    // Organizing the output for weekly total, weekly average, lowest day, and highest day
    cout << endl;
    cout << setw(COL_W) << left << "Weekly Total:" << setw(COL4) << left <<"$" << setw(COL_WT) << right << findTotal(day) << endl;
    
    weeklyAvg = findTotal(day) / ARRAY_SIZE; // Calculation for the weekly average. Called findTotal function again as a replacement for the weeklyTotal variable.
    cout << setw(COL_W) << left << "Weekly Average:" << setw(COL4) << left << "$" << setw(COL_WT) << right << weeklyAvg << endl; // weeklyAvg not calculated in a funciton, doesn't need function call
    cout << setw(COL_HSD) << left << "Highest Sales Day:" << setw(COL4) << left << "$" << setw(COL_WT) << right << findMax(day) << endl;
    cout << setw(COL_HSD) << left << "Lowest Sales Day:" << setw(COL4) << left << "$" << setw(COL_WT) << right << findMin(day) << endl;


   





    return 0;
}

// Outer Functions------------------------------------------------------------------------
void printDailySales(double day[])
{
    // Open file and declare input and output
    ifstream fin;
    fin.open("daily_sales.txt");

    cout << setprecision(2) << fixed << showpoint;
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        fin >> day[i];
        cout << setw(COL1) << left << "Day " << setw(COL2) << left << i + 1 << setw(COL3) << left << ":" << setw(COL4) << left << "$" << setw(COL5) << day[i] << endl;
        
    }
    
    // Closing external file
    fin.close();

}
double findTotal(double day[])
{
    double weeklyTotal = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        weeklyTotal = weeklyTotal + day[i];
    }
       
    
    
    return weeklyTotal;

}
double findMax(double day[])
{
    int highestDay = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (day[highestDay] < day[i])
        {
            highestDay = i;
        }
    }

    return day[highestDay];
}
double findMin(double day[])
{
    int lowestDay = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (day[lowestDay] > day[i])
        {
            lowestDay = i;
        }
    }

    return day[lowestDay];


}


