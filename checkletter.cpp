//Jeffrey Winters
//This program takes an eight digit number as input and adds a check letter to the end of the number

#include <iostream>
using namespace std;
int assignLetter(int);
int main()
    {
        int inputNum;
        char checkLetter;
        //These lines prompt the user to give an input to assign as the original number
        cout<<"Please enter an eight digit number.\n";
        cin>>inputNum;
        //This line calls the assignLetter function using the original number as input
        checkLetter=assignLetter(inputNum);
        //These lines print the result
        cout<<"The check number result for your input is ";
        cout<<inputNum<<checkLetter;
        return 0;
    }

int assignLetter(int original)
    {
        int tempValueA, tempValueB, numA, numB, numC, numD, sum, numRemainder;
        char letter;
        //These lines break up the original number into two-digit numbers and assign them to numA, numB, numC, and numD
        tempValueA=original/100;
        tempValueB=tempValueA/100;
        numA=tempValueB/100;
        numB=tempValueB%100;
        numC=tempValueA%100;
        numD=original%100;
        //This line adds the four two-digit numbers together
        sum=numA+numB+numC+numD;
        //This line divides by 26 finds the remainder
        numRemainder=sum%26;
        //This line determines the check letter
        letter='a'+numRemainder;
        //This line returns the check letter
        return letter;
    }