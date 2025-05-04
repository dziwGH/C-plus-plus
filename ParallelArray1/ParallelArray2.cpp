// ParallelArray1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// Constant declaration
const int ARRAY_SIZE = 5;

// Function definitions


// Main-----------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    // Variable declarations
    string name[ARRAY_SIZE];
    int age[ARRAY_SIZE];


    // Program title and description
    cout << "Parallel Array Example" << endl << endl;
    cout << "This program shows an example of parallel arrays. An array can\n";
    cout << "only hold data of one type. So, if you want to store something\n";
    cout << "like names and ages, you must store them in different arrays.\n";
    cout << "This program will take in 5 names and their corresponding\n";
    cout << "ages from an external file and then output the results in columns." << endl << endl;

    // File variable and open file
    ifstream fin;
    fin.open("ParallelArray_data.txt");
    
    // Input file error check
    if (!fin)
    {
        cout << "Cannot find/open the input file. Program terminating..." << endl;
        return 1;
    }


    // Collect file input
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        
        getline(fin, name[i]); // use then collecting more than one word (whitespace)

       
        fin >> age[i];
        fin.ignore(); // ignores the newline character after age before beginning the loop again
    }

    // no system clear so that the title and description would print
    
    // Print column headings
    cout << setw(25) << left << "Name" << setw(4) << right << "Age" << endl;

    
    // Print name and ages from parallel arrays
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << setw (25) << left << name[i] << setw(4) << right << age[i] << endl;
    }


    // close the file
    fin.close();
    

    return 0;
}

