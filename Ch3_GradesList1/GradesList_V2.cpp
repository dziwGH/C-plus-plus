// Ch3_GradesList1.cpp
// Andrew Dziwanowski
// 9/18/22


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// Named Constants
const int COL1 = 15;
const int COL2 = 6;
const int COL3 = 10;
const int COL4 = 10;
const int COL5 = 10;


int main()
{
    // Variable Declarations
    double test1, test2, test3, testAvg;
    string name;
    int i; // loop control variable

    // Declare File Stream Variables
    ifstream fin; // Textbook uses inData and outData
    ofstream fout;

    // Open Files
    fin.open("raw_scores.txt");
    fout.open("grades_formatted2.txt");

    // Output to files - Column Headings
    fout << setw(COL1) << left << "Name" << setw(COL2) << right << "Test 1" << setw(COL3) << right << "Test 2" << setw(COL4) << right << "Test 3" << setw(COL5) << right << "Test Avg" << endl;

    // declaring LCV
    i = 1;
    while (i <= 3) {


        // Read Data from File - Person 1
        getline(fin, name);
        fin >> test1 >> test2 >> test3;
        fin.ignore();

        // Data Calculation - Person 1
        testAvg = (test1 + test2 + test3) / 3;

        // Output to Files - Person 1
        fout << setprecision(0) << fixed << noshowpoint;
        fout << setw(COL1) << left << name << setw(COL2) << right << test1 << setw(COL3) << right << test2 << setw(COL4) << right << test3 << setw(COL5) << right << setprecision(2) << fixed << showpoint << testAvg << endl;

        // Test i
        i++;
    }

    // Program Description
    cout << "Ch3_GradesList1. This program will take inputs from an external file called \"raw_scores.txt\", and will compute \n";
    cout << "the scores of 3 test grades from 3 students and will find the average score of each student. This data will then\n";
    cout << "output to a file called \"grades_formatted.txt\"." << endl << endl;
    cout << "Check the \"grades_formatted.txt\" file for the results." << endl << endl;

    // Closing the programs
    fin.close();
    fout.close();


    return 0;

}