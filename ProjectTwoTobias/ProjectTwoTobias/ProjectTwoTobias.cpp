// ProjectTwoTobias.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Tobias Scott
// Project Two 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare Variables here: 
    float monthlyDp;
    float yrTotalinput;
    float interestAmount;
    float totalAmount;
    float years;
    float months;
    float annualInt;
    float initInv;

    // Data Input display 
    cout << "**************************\n";
    cout << "******* Data Input *******\n";
    cout << "Initial Investment Amount: \n";
    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";

    // Create a timeout function 

    // User Input values 
    cout << "**************************\n";
    cout << "******* Data Input *******\n";
    cout << "Initial Investment Amount: $";
    cin >> initInv;
    cout << "Monthly Deposit: $";
    cin >> monthlyDp;
    cout << "Annual Interest: %";
    cin >> annualInt;
    cout << "Number of years: ";
    cin >> years;
    months = years * 12; 

    // Create a timeout function

    // total amt -> inital investment update
    totalAmount = initInv;

    // year data w/o monthly deposits
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "===========================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "-------------------------------------------------------------\n";
    for (int i = 0; i < years; i++) {
        // Yearly Interest:
        interestAmount = (totalAmount) * ((annualInt / 100));

        // Year end total:
        totalAmount = totalAmount + interestAmount;

        // Print out table here: 
        cout << (i + 1) << "\t\t" << fixed << setprecision(2) << totalAmount << "\t\t\t" << interestAmount << "\n";
    }

    // Total amount -> init investment 
    totalAmount = initInv;

    // Year data w/ Monthly pmts: 
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "===========================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "-------------------------------------------------------------\n";
    for (int i = 0; i < years; i++) {

        // Yearly interest to zero: 
        yrTotalinput = 0;
        for (int j = 0; j < 12; j++) {
        
            // monthly interest: 
             interestAmount = (totalAmount + monthlyDp) * ((annualInt / 100) / 12);

            // month end interest:
            yrTotalinput = yrTotalinput + interestAmount;

            // month end total:
            totalAmount = totalAmount + monthlyDp + interestAmount;
        }

        // 

       
        // Print out table here: 
        cout << (i + 1) << "\t\t" << fixed << setprecision(2) << totalAmount << "\t\t\t" << yrTotalinput << "\n";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
