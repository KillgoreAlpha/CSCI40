//Jeffrey Winters
//This program prints MISSISSIPPI in block letters.
#include <iostream>
using namespace std;

//These lines define the function prototypes.
void M();
void I();
void S();
void P();

//This function calls the M, I, S, and P functions in order to print MISSISSIPPI in block letters.
int main()
    {
        M();
        I();
        S();
        S();
        I();
        S();
        S();
        I();
        P();
        P();
        I();
    }

//This function prints an "M" in block letters when called.
void M()
    {
        cout<<" *         *\n ";
        cout<<"*  *   *  *\n ";
        cout<<"*    *    *\n ";
        cout<<"*         *\n ";
        cout<<"*         *\n\n";
    }

//This function prints an "I" in block letters when called.
void I()
    {
        cout<<"    * * *   \n ";
        cout<<"     *     \n ";
        cout<<"     *     \n ";
        cout<<"     *     \n ";
        cout<<"   * * *   \n\n";
    }

//This function prints an "S" in block letters when called.
void S()
    {
        cout<<"    * * *   \n ";
        cout<<"  *        \n ";
        cout<<"   * * *   \n ";
        cout<<"        *  \n ";
        cout<<"   * * *   \n\n";
    }

//This function prints a "P" in block letters when called.
void P()
    {
        cout<<"   * * *    \n ";
        cout<<"  *     *  \n ";
        cout<<"  * * *    \n ";
        cout<<"  *        \n ";
        cout<<"  *        \n\n";
    }