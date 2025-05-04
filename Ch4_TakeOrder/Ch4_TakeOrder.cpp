// Ch4_TakeOrder.cpp 
// Andrew Dziwanowski
// 9/31/22
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


int main()
{
    // Variable Declarations
    int choice;
    double csandPrice, ctenderPrice, brisketPrice, pribPrice;

    // Program title and description
    cout << "TAKE ORDER" << endl << endl;
    cout << "The purpose of this program is to create a menu that the user can take\n";
    cout << "an order from. There will also be a description of each menu item.\n";
    cout << "The menu is for a barbeque and fried chicken restaurant.";
    cout << endl << endl;

    // Assign price variables
    csandPrice = 5.75;
    ctenderPrice = 4.50;
    brisketPrice = 8.00;
    pribPrice = 6.25;

    // Item Descriptions
    cout << "Chicken sandwhiches come with pickles, lettuce, and tomato.\n";
    cout << "The chicken tenders comes with 3 tenders.\n";
    cout << "The brisket is smoked in house and comes as 4 1/2 inch slices.\n";
    cout << "The baby back pork ribs comes as 3 ribs\n";
    cout << "The chicken menu items come with our house made chicken sauce and\n";
    cout << "the BBQ orders come with BBQ sauce on the side" << endl << endl;

    // Set up menu
    cout << "Choose the corresponding number for which menu item you'd like." << endl;

    // Column Headings
    cout << setw(COL1) << left << "Menu #" << setw(19) << left << "Item" << setw(6) << right << "Price" << endl;

    cout << setprecision(2) << fixed << showpoint; // setting decimal precision for the whole program so I won't need to during the if statements

    // Menu Body
    cout << noshowpoint << setw(COL1) << left << "  1" << setw(COL2) << left << "Chicken Sandwich" << setw(COL3) << left << "$" << setw(COL4) << right << showpoint << csandPrice << endl;
    cout << setw(COL1) << left << "  2" << setw(COL2) << left << "Chicken Tenders" << setw(COL3) << left << "$" << setw(COL4) << right << showpoint << ctenderPrice << endl;
    cout << noshowpoint << setw(COL1) << left << "  3" << setw(COL2) << left << "Brisket" << setw(COL3) << left << "$" << setw(COL4) << right << showpoint << brisketPrice << endl;
    cout << setw(COL1) << left << "  4" << setw(COL2) << left << "Pork Ribs" << setw(COL3) << left << "$" << setw(COL4) << right << showpoint << pribPrice << endl << endl;


    // Ask for user input
    cout << "When you make a selection, please only use 1, 2, 3, or 4. Any other inputs\n";
    cout << "will cause input failure." << endl << endl;
    cout << "Enter selected menu number here: ";
    cin >> choice;
    cout << endl;


    // Menu Structure
    if (choice == 1) // be sure to use == and not =
    {
        cout << "You ordered a chicken sandwich. Your total is: $" << csandPrice << endl;
    }
    else if (choice == 2)
    {
        cout << "You ordered chicken tenders. Your total is: $" << ctenderPrice << endl;
    }
    else if (choice == 3)
    {
        cout << "You ordered brisket. Your total is: $" << brisketPrice << endl;
    }
    else if (choice == 4)
    {
        cout << "You ordered pork ribs. Your total is: $" << pribPrice << endl;
    }
    else 
    {
        cout << "INPUT ERROR DETECTED. TERMINATING PROGRAM" << endl;
    }

    return 0;

}

