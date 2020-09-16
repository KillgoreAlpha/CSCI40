//Jeffrey Winters
//This program prints the even numbers between 3 and 43, prints every third letter starting with 'B', prints the numbers 1 to 20 in one column right next to another column with the numbers 20 down to 1, and prints every other character in the computer's character set.

#include <iostream>
using namespace std;
void evens();
void thirdLetter();
void numberColumns();
void characters();

int main()
    {
    //These lines call the 4 void functions and print their respective outputs with a space between them
        evens();
        cout<<endl;
        thirdLetter();
        cout<<endl;
        numberColumns();
        cout<<endl;
        characters();
        cout<<endl;
        return 0;
    }
//This function prints the even numbers between 3 and 43
void evens()
    {
        int num;
        for (num=4;num<=43;num=num+2)
            {
                cout<<num<<" ";
            }
    }
//This function prints every third letter between 'B' and 'Z'
void thirdLetter()
    {
        char letter;
        for (letter='B';letter<='Z';letter+=3)
        {
            cout<<letter<<" ";
        }
    }
//This function prints the numbers 1 through 20 in one column with a column next to it in reverse.
void numberColumns()
    {
        int i;
        for (i=1;i<=20;i+=1)
            {
                cout<<i<<" "<<21-i<<endl;
            }
    }
//This function prints every other visible character in the computer's character set
void characters()
    {
        int n;
        char character;
        for (n=33;n<=254;n+=2)
        {
            character = n;
            cout<<character<<" ";
        }
        
    }