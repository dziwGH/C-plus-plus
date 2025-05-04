// TakeOrder_2.cpp 
// Andrew Dziwanowski
// 10/16/22
// Program description: Creating a menu that the user can order from


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named Constants
int const COL1 = 10;
int const COL2 = 20;
int const COL3 = 2;
int const COL4 = 4;
int const MENU_COL2 = 3;
double const SMALL_PRICE = 5.00;
double const MEDIUM_PRICE = 7.50;
double const LARGE_PRICE = 9.25;
double const TAXES = 0.09;

int main()
{
    // Variable Declarations
    int choice, i = 1, num_OF_orders;
    string mainItem, sizeName;
    char size, correct = 'y';
    double subtotal = 0, taxTotal = 0, grandTotal, cost;
    bool inputFailure = false;

    // Set up menu
    cout << "Welcome to Andrew's Chicken and BBQ shack! Please choose an option from the menu below\n";
    cout << "and input the corresponding number!" << endl;

    // Column Headings
    cout << setw(COL1) << left << "Menu #" << setw(19) << left << "Item" << endl;

    cout << setprecision(2) << fixed << showpoint; // setting decimal precision for the whole program so I won't need to during the if statements

    // Menu Body
    cout << setw(COL1) << left << "  1" << setw(COL2) << left << "Chicken Sandwich" << endl;
    cout << setw(COL1) << left << "  2" << setw(COL2) << left << "Chicken Tenders" << endl;
    cout << setw(COL1) << left << "  3" << setw(COL2) << left << "Brisket" << endl;
    cout << setw(COL1) << left << "  4" << setw(COL2) << left << "Pork Ribs" << endl << endl;

    // Menu for sizing
    cout << "Here is our size pricing:" << endl;
    cout << setw(COL1) << left << "  S" << setw(COL3) << left << "$" << setw(COL4) << right << SMALL_PRICE << endl;
    cout << setw(COL1) << left << "  M" << setw(COL3) << left << "$" << setw(COL4) << right << MEDIUM_PRICE << endl;
    cout << setw(COL1) << left << "  L" << setw(COL3) << left << "$" << setw(COL4) << right << LARGE_PRICE << endl;
    cout << endl << endl;


    // Ask for user input
    cout << "When you make a selection, please only use 1, 2, 3, or 4 for the item,\n";
    cout << "and S, M, L for the sizes. Any other inputs will cause input failure.\n";
    cout << "A tax of 9% will be included in your total." << endl << endl;
    
    do {
        cout << "How many orders would you like? (Enter 1-10) \n";
        cout << "MAXIMUM OF 10 ORDERS: ";
        cin >> num_OF_orders;
        
        if (!cin) 
        {
            cout << "Invalid number of orders, try again." << endl << endl;
            cin.clear(); // restores input stream to a working state
            cin.ignore(100, '\n'); // ignores any garbage in the input stream
            inputFailure = true;
        }

    } while (inputFailure == true || num_OF_orders < 1 || num_OF_orders > 10);
    
    
    cout << endl;
    for (i = 1; i <= num_OF_orders; i++) // main loop
    {
        cout << "Order #" << i << ":" << endl; // output order number
        do { // loop to run no matter what

        
            do {

                cout << "Enter selected menu number here: ";
                cin >> choice;
                cout << endl;
                if (choice <= 0 || choice >= 5 || !cin)
                {
                    cout << "Invalid choice, try again. The item numbers are 1, 2, 3, or 4." << endl << endl;
                    cin.clear(); // restores input stream to a working state
                    cin.ignore(100, '\n'); // ignores any garbage in the input stream
                }
            } while (choice <= 0 || choice >= 5);


            // Menu Structure

            if (choice == 1) // be sure to use == and not =
            {
            mainItem = "Chicken Sandwich";
            }
            else if (choice == 2)
            {
            mainItem = "Chicken Tenders";
            }
            else if (choice == 3)
            {
            mainItem = "Brisket";
            }
            else if (choice == 4)
            {
            mainItem = "Pork Ribs";
            }
           

        // asking the user for the size of the meal they would like
            do {
                cout << "Please choose your order size: ";
                cin >> size;
                cout << endl;
                if (size != 's' && size != 'S' && size != 'm' && size != 'M' && size != 'l' && size != 'L')
                {
                cout << "Invalid input, try again. The sizes are S, M, or L" << endl << endl;
                }

            } while (size != 's' && size != 'S' && size != 'm' && size != 'M' && size != 'l' && size != 'L');


        // switch structure for sizing
        
        
        switch (size) // first switch to out put what the user ordered
        {
        case 's':
        case 'S':
            sizeName = "small";
            cost = SMALL_PRICE;
            break;
        case 'M':
        case 'm':
            sizeName = "Medium";
            cost = MEDIUM_PRICE;
            break;
        case 'l':
        case 'L':
            sizeName = "Large"; 
            cost = LARGE_PRICE;
            break;
        default:
            cout << "You made an invalid choice. Program terminating";
            return 1;
        }
        cout << "You ordered a " << sizeName << " " << mainItem << "." << endl << endl;
        cout << "Does this look good to you? Enter 'Y' to continue or 'N' to go back\n"; // asking the user if their order looks correct.
        cout << "Any input other than 'Y' or 'N' will prompt the program to advance\n"; // could not get the input failure check to work. this is a simplified version.
        cout << "to the next step. Enter your answer here: ";
        cin >> correct;
        cout << endl;
        
        } while (correct == 'n' || correct == 'N'); // had to put it above the first and second switch so that the calculations would run well.
        
        // Total calculations
        subtotal = cost + subtotal;
        taxTotal = (cost * TAXES) + taxTotal;
        grandTotal = taxTotal + subtotal;
    }
    
    
    
    // Output order confirmation for user
    cout << endl;
    cout << setw(COL2) << left << "Subtotal:" << setw(MENU_COL2) << left << "$" << setw(COL4) << left << subtotal << endl;
    cout << setw(COL2) << left << "Taxes:" << setw(MENU_COL2) << left << "$" << setw(COL4) << left << taxTotal << endl;
    cout << setw(COL2) << left << "Grand Total:" << setw(MENU_COL2) << left << "$" << setw(COL4) << left << grandTotal << endl << endl;
    cout << "Thank you, have a great day!" << endl << endl;
    
    return 0;

}