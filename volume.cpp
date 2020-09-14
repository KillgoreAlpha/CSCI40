//Jeffrey Winters
//This program takes a radius value from user input and calculates the volume and surface area of a sphere with that radius.
#include <iostream>
using namespace std;
int main()
    {
        double radius, sphereVolume, sphereSurface, pi;
        pi=3.14159;
        cout<<"Please enter the radius of the sphere to calculate.\n";
        //Takes user unput and assigns it to the double "radius"
        cin>>radius;
        //Runs the calculations on the given radius using the volume of a sphere and surface area of a sphere formulas
        sphereVolume= ((4 * pi) / 3) * (radius * radius * radius);
        sphereSurface= 4 * pi * (radius * radius);
        //Outputs the result of the calculations
        cout<<"The volume of a sphere with a radius of ";
        cout<<radius;
        cout<<" units is ";
        cout<<sphereVolume;
        cout<<" units cubed and the surface area of that sphere is ";
        cout<<sphereSurface;
        cout<<" units squared.\n";
        return 0;
    }
