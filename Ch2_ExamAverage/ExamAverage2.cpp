// Ch2_ExamAverage.cpp 
// Andrew Dziwanowski
// 8/31/22

#include <iostream>
#include <string>

using namespace std;

// Declare Function - copy function header and put ; on end
double exam_avg_funct(double x, double y, double z, double a, double b);

// Named Constant
const int NO_OF_EXAMS = 5;
int main()
{
	// Variable Declarations
	double exam1;
	double exam2;
	double exam3;
	double exam4;
	double exam5;
	double examAverage;
	
	// Program title and description
	cout << "Exam Average Calculator" << endl;
	cout << "This program will ask the user for 5 exam scores and will find the average." << endl << endl;

	cout << "You will be promted to enter 5 exam scores below. Please use\n";
	cout << "the format xx.x to enter your scores. For example, if you \n";
	cout << "scored an 89.5%, please enter --> 89.5" << endl << endl;

	
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

	examAverage = exam_avg_funct(exam1, exam2, exam3, exam4, exam5);
	// Calculate average by adding 5 exam scores and dividing by 5
	

	// Output exam average
	cout << "This is your exam average scores: ";
	cout << examAverage;
	cout << endl << endl;
	return 0;

}

// define function
// function header
// datatype/void name_of_function (parameters)
// {
// 
// }

double exam_avg_funct(double x, double y, double z, double a, double b)
{
	double functAvg;

	functAvg = (x + y + z + a + b) / NO_OF_EXAMS;

	return functAvg;
}


