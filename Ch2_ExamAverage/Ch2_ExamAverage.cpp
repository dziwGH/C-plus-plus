// Ch2_ExamAverage.cpp 
// Andrew Dziwanowski
// 8/31/22

#include <iostream>
#include <string>

using namespace std;

// Named Constant

int main()
{
	// Variable Declarations
	double exam1;
	double exam2;
	double exam3;
	double exam4;
	double exam5;
	double examAverage;
	const int NO_OF_EXAMS = 5;
	// Program title and description
	cout << "Exam Average Calculator";
	cout << "This program will ask the user for 5 exam scores and will find the average.";

	cout << "You will be promted to enter 5 exam scores below. Please use";
	cout << "the format xx.x to enter your scores. For example, if you ";
	cout << "scored an 89.5%, please enter --> 89.5";

	// Collecting 5 exam scores from user
	cout << "Enter Exam 1 score: ";
	cin >> exam1;
	cout << "Enter Exam 2 score: ";
	cin >> exam2;
	cout << "Enter Exam 3 score: ";
	cin >> exam3;
	cout << "Enter Exam 4 score: ";
	cin >> exam4;
	cout << "Enter Exam 5 score: ";
	cin >> exam5;

	// Calculate average by adding 5 exam scores and dividing by 5
	examAverage = (exam1 + exam2 + exam3 + exam4 + exam5) / NO_OF_EXAMS;
	// Output exam average
	cout << "This is your exam average scores: ";
	cout << examAverage;

	return 0;

}


