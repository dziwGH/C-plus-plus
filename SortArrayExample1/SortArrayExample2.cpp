// SortArrayExample1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* The selection sort algorithm rearranges a list by selecting an element in the list and moving it to its proper position. This algorithm finds the location of the smallest element in the unsorted portion of the list and moves it to the top of the unsorted portion of the list. The first time, we locate the smallest item in the entire list. The second time, we locate the smallest item in the list starting from the second element in the list, and so on. */

#include <iostream>

using namespace std;

// Function Declarations
void sortArray(int list[]);


// Constant declarations
const int ARRAY_SIZE = 8;

int main()
{
    // variable declarations
    int list[ARRAY_SIZE] = { 16, 30, 24, 7, 62, 45, 5, 55 };
    

    // Program  title and description
    cout << "Selection Sort Example" << endl << endl;

    cout << "Original Unsorted Array/List:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        cout << list[i] << endl;
    }

    sortArray(list);
    // output sorted array
    cout << "Sorted Array: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << list[i] << endl;

    



    return 0;
}

// Function Definition
void sortArray(int list[])
{
    int smallestIndex;
    int temp;
    // outer FOR loop controls current location of the smallest index
    // notice that you iterate to one less than the array size
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        

        // Find location of the smallest element
        smallestIndex = i; // sets smallest value ot first item in array

        // Inner FOR loop iterates through array to compare two values
        for (int currentLocation = i + 1; currentLocation < ARRAY_SIZE; currentLocation++)
        {
            // ... if the current value is less than the smallest value
            if (list[currentLocation] < list[smallestIndex])
                // ...then set the smallest value to the current value
                smallestIndex = currentLocation;
        }
        // Move the smallest element to the beginning of the list- note 3 variables are needed
        temp = list[smallestIndex];
        list[smallestIndex] = list[i];
        list[i] = temp;
    }

}


