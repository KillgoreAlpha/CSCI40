//Jeffrey Winters
//This program takes two real numbers from the user and prints their sum and product in scientific notation, and prints their sum and product in fixed point notation to three decimal places.

#include <iostream>
using namespace std;

int main()
    {
        double numberOne, numberTwo, sum, product;
        cout<<"format.cpp takes two numbers and prints the sum and product of the numbers in scientific and fixed point notation.\n";
        //These lines ask the user for 2 numbers.
        cout<<"Please enter the first number:\n";
        cin>>numberOne;
        cout<<"Please enter the second number:\n";
        cin>>numberTwo;
        //These lines run the calculations.
        sum = numberOne + numberTwo;
        product = numberOne * numberTwo;
        //These lines print the results in scientific notation to 2 decimal places.
        cout.setf(ios::scientific);
        cout.precision(2);
            cout<<"The sum of the numbers in scientific notation is ";
            cout<<sum;
            cout<<" and the product of the numbers in scientific notation is ";
            cout<<product;
            cout<<".\n";
        cout.unsetf(ios::scientific);
        //These lines print the results in fixed point notation to 3 decimal places.
        cout.setf(ios::fixed);
        cout.precision(3);
            cout<<"The sum of the numbers in fixed-point notation is ";
            cout<<sum;
            cout<<" and the product of the numbers in fixed-point notation is ";
            cout<<product;
        cout<<".\n";
        cout.unsetf(ios::fixed);
    return 0; 
    } 