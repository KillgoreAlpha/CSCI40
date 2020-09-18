//Jeffrey Winters
//This program takes ten students' sets of four test grades, prints the weighted average of each set, and prints the unweighted average of each test

#include <iostream>
using namespace std;
//This line sets the number of students that grades will be inputted for
const int totalStudents=10;

int main()
    {
        int i;
        double testOne, testOneWeight, testOneTotal, testOneAverage, testOneWAverage, testTwo, testTwoWeight, testTwoTotal, testTwoAverage, testTwoWAverage, testThree, testThreeWeight, testThreeTotal, testThreeAverage, testThreeWAverage, testFour, testFourWeight, testFourTotal, testFourAverage, testFourWAverage, allTestsWAverage;
        cout<<"This program takes ten students' sets of four test grades, prints the weighted average of each student's test scores, and prints the unweighted average of each test for all students.\n";
         //These lines set the respective test weights   
        testOneWeight=0.1;
        testTwoWeight=0.25;
        testThreeWeight=0.3;
        testFourWeight=0.35;
        //These reset the test scores to zero 
        testOneTotal = 0;
        testTwoTotal = 0;
        testThreeTotal = 0;
        testFourTotal = 0;
        //This line tells the function to repeat i times where i is less than or equal to the number of students
        for (i=1;i<=totalStudents;i++)
            {
                //These lines prompt input for a student's test scores
                cout<<"Please enter the student's score for test one\n";
                cin>>testOne;
                cout<<"Please enter the student's score for test two\n";
                cin>>testTwo;
                cout<<"Please enter the student's score for test three\n";
                cin>>testThree;
                cout<<"Please enter the student's score for test four\n";
                cin>>testFour;
                //These lines calculate the weighted average for the 4 test scores and prints the result
                allTestsWAverage=testOne*testOneWeight+testTwo*testTwoWeight+testThree*testThreeWeight+testFour*testFourWeight;
                cout<<"The weighted average of this student's four test scores is "<<allTestsWAverage<<"%.\n";
                //These lines add the sum of each subsequent test grade entry to the total grade of all test scores
                testOneTotal+=testOne;
                testTwoTotal+=testTwo;
                testThreeTotal+=testThree;
                testFourTotal+=testFour;
            }
        //These lines calculate the unweighted test scores for all included students and prints their results
        testOneAverage=testOneTotal/totalStudents;
        cout<<"The unweighted average for test one is "<<testOneAverage<<"%.\n";
        testTwoAverage=testTwoTotal/totalStudents;
        cout<<"The unweighted average for test two is "<<testOneAverage<<"%.\n";
        testThreeAverage=testThreeTotal/totalStudents;
        cout<<"The unweighted average for test three is "<<testOneAverage<<"%.\n";
        testFourAverage=testFourTotal/totalStudents;
        cout<<"The unweighted average for test four is "<<testOneAverage<<"%.\n";
        return 0;
    }
