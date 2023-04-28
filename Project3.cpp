#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    // introducing variables with appropriate data types
    double Gross = 0;
    string Name;
    double Federal, State, SS, Medicare, Pension, heathInsurance;
    double Net = 0;

    // asking for information and assigning them to the variables
    cout << "Enter employee first and last name: ";
    getline(cin, Name);
    cout << "Enter Gross income: $";
    cin >> Gross;

    cout << endl << "********* Thank You For Your Input **********" << endl;
    cout << "Taxes Calculator" << endl;
    cout << "Author: Zaher Abbara" << endl;
    cout << "Program name: Project3.cpp" << endl;
    cout << "Date: 04/21/2023" << endl;
    cout << "College name: LBCC" << endl;
    cout << "********************************************" << endl;

    // running the calculations for the taxes 
    Federal = Gross * 0.15;
    State = Gross * 0.035;
    SS = Gross * 0.0575;
    Medicare = Gross * 0.0275;
    Pension = Gross * 0.05;
    heathInsurance = 75;
    Net = Gross - Federal - State - SS - Medicare - Pension - heathInsurance;

    // output to consol
    cout << Name << endl;
    cout << left << setw(30) << "Gross Amount:" << "$" << Gross << endl;
    cout << left << setw(30) << "Federal Tax:" << "$" << Federal << endl;
    cout << left << setw(30) << "State Tax:" << "$" << State << endl;
    cout << left << setw(30) << "Social Security Tax:" << "$" << SS << endl;
    cout << left << setw(30) << "Medicare Tax:" << "$" << Medicare << endl;
    cout << left << setw(30) << "Pension Plan:" << "$" << Pension << endl;
    cout << left << setw(30) << "Health Insurance:" << "$" << heathInsurance << endl;
    cout << left << setw(30) << "Your Net pay:" << "$" << Net << endl;

    ofstream outputFile("C:\\Users\\z503\\Desktop\\payroll.txt");

    // output to the file
    outputFile << left << setw(25) << "Name:" << setw(10) << fixed << setprecision(2) << Name << endl;
    outputFile << left << setw(25) << "Gross Amount: $" << setw(10) << fixed << setprecision(2) << Gross << endl;
    outputFile << left << setw(25) << "Federal Tax: $" << setw(10) << fixed << setprecision(2) <<  Federal << endl;
    outputFile << left << setw(25) << "State Tax: $" << setw(10) << fixed << setprecision(2) << State << endl;
    outputFile << left << setw(25) << "Social Security Tax: $" << setw(10) << fixed << setprecision(2) << SS << endl;
    outputFile << left << setw(25) << "Medicare Tax: $" << setw(10) << fixed << setprecision(2) << Medicare << endl;
    outputFile << left << setw(25) << "Pension Plan: $" << setw(10) << fixed << setprecision(2) << Pension << endl;
    outputFile << left << setw(25) << "Health Insurance: $" << setw(10) << fixed << setprecision(2) << heathInsurance << endl;
    outputFile << left << setw(25) << "Your Net payout: $" << setw(10) << fixed << setprecision(2) << Net << endl;

    // close the file stream
    outputFile.close();


    return 0;
}