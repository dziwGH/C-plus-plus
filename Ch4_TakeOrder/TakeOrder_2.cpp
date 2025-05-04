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
    int choice;
    string mainItem, sizeName;
    char size;
    double subtotal, taxTotal, grandTotal;

    // Set up menu
    cout << "Welcome to Andrew's Chicken and BBQ shack! Please choose an option from the menu below\n";
    cout << "and input the corresponding number!" << endl;

    // Column Headings
    cout << setw(COL1) << left << "Menu #" << setw(19) << left << "Item" << endl;

    cout << setprecision(2) << fixed << showpoint; // setting decimal precision for the whole program so I won't need to during the if statements

    // Menu Body
    cout << setw(COL1) << left << "  1" << setw(COL2) << left << "Chicken Sandwich" << endl;
    cout << setw(COL1) << left << "  2" << setw(COL2) << left << "Chicken Tenders"  << endl;
    cout << setw(COL1) << left << "  3" << setw(COL2) << left << "Brisket" << endl;
    cout << setw(COL1) << left << "  4" << setw(COL2) << left << "Pork Ribs" << endl << endl;

    // Menu for sizing
    cout << "Here is our size pricing:" << endl;
    cout << noshowpoint << setw(COL1) << left << "  S" << setw(COL4) << left << "$" << setw(COL4) << right << showpoint << SMALL_PRICE << endl;
    cout << setw(COL1) << left << "  M" << setw(COL4) << left << "$" << setw(COL4) << right << showpoint << MEDIUM_PRICE << endl;
    cout << noshowpoint << setw(COL1) << left << "  L" << setw(COL4) << left << "$" << setw(COL4) << right << showpoint << LARGE_PRICE << endl;
    cout << endl << endl;


    // Ask for user input
    cout << "When you make a selection, please only use 1, 2, 3, or 4 for the item,\n";
    cout << "and S, M, L for the sizes. Any other inputs will cause input failure.\n";
    cout << "A tax of 9% will be included in your total." << endl << endl;
    cout << "Enter selected menu number here: ";
    cin >> choice;
    cout << endl;

    

    // Menu Structure
    if (choice == 1) // be sure to use == and not =
    {
        //cout << "You ordered a chicken sandwich. Your total is: $" << CSAND_PRICE << endl;
        mainItem = "Chicken Sandwich";
    }
    else if (choice == 2)
    {
        //cout << "You ordered chicken tenders. Your total is: $" << CTENDER_PRICE << endl;
        mainItem = "Chicken Tenders";
    }
    else if (choice == 3)
    {
        //cout << "You ordered brisket. Your total is: $" << BRISKET_PRICE << endl;
        mainItem = "Brisket";
    }
    else if (choice == 4)
    {
        //cout << "You ordered pork ribs. Your total is: $" << PRIB_PRICE << endl;
        mainItem = "Pork Ribs";
    }
    else 
    {
        cout << "INPUT ERROR DETECTED. TERMINATING PROGRAM" << endl;
        return 1;
    }

    // asking the user for the size of the meal they would like
    cout << "Please choose your order size: ";
    cin >> size; 


    // switch structure for sizing
    switch (size)
    {
    case 's':
    case 'S':
        sizeName = "small";
        subtotal = SMALL_PRICE;
        taxTotal = SMALL_PRICE * TAXES;
        break;
    case 'M':
    case 'm':
        sizeName = "medium";
        subtotal = MEDIUM_PRICE;
        taxTotal = MEDIUM_PRICE * TAXES;
        break;
    case 'l':
    case 'L':
        sizeName = "large";
        subtotal = LARGE_PRICE;
        taxTotal = LARGE_PRICE * TAXES;
        break;
    default:
        cout << "You made an invalid choice. Program terminating";
        return 1;
    }

    // Grand total calculation
    grandTotal = taxTotal + subtotal;

    // Output order confirmation for user
    cout << endl;
    cout << "You ordered a " << sizeName << " " << mainItem << "." << endl;
    cout << setw(COL2) << left << "Subtotal:" << setw(MENU_COL2) << left << "$" << setw(COL4) << left << subtotal << endl;
    cout << setw(COL2) << left << "Taxes:" << setw(MENU_COL2) << left << "$" << setw(COL4) << left << taxTotal << endl;
    cout << setw(COL2) << left << "Grand Total:" << setw(MENU_COL2) << left << "$" << setw(COL4) << left << grandTotal << endl << endl;
    cout << "Thank you, have a great day!" << endl << endl;
    



    return 0;

}

