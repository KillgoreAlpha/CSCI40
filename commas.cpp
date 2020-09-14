//Jeffrey Winters
//This program take a 7-9 digit integer and echoes the number with commas between every three digits from the right.
#include <iostream>
using namespace std;
int main()
    {
        int leadingDigits, middleDigits, lastDigits, tempValue, original, firstTwo, ones, tens, hundreds, secondTwo, thousands, tenThousands, hundredThousands;
        //These lines prompt the user to enter the number to add commas to.
        cout<<"Please enter a 7-9 digit number.\n";
        cin>>original;
        //This line creates a temporary value to extract the thousands, ten thousands, hundred thousands, millions, ten millions, and hundred millions places from.
        tempValue=original/1000;
        //These lines extract and assign the ones, tens, and hundreds places.
        lastDigits=original%1000;
        firstTwo=lastDigits/10;
        ones=lastDigits%10;
        tens=(firstTwo)%10;
        hundreds=firstTwo/10;
        //This line extracts and assigns the millions, ten millions, and hundred millions places.
        leadingDigits=tempValue/1000;
        //These lines extract and assign the thousands, ten thousands, and hundred thousands places.
        middleDigits=tempValue%1000;
        secondTwo=middleDigits/10;
        thousands=middleDigits%10;
        tenThousands=(secondTwo)%10;
        hundredThousands=secondTwo/10;
        //This line prints the asssigned place values with added commas.
        cout<<"The number with commas is "<<leadingDigits<<","<<hundredThousands<<tenThousands<<thousands<<","<<hundreds<<tens<<ones<<endl;
        return 0;
    }