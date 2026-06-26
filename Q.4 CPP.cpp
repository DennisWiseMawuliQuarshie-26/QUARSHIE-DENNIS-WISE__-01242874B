#include <iostream>

/* Write a C++ program to calculate the electric field and potential at a point in space due to
a charged particle. The program should prompt the user for the charge, position, and
velocity of the particle, and then compute and print out the electric field and potential at a
given point in space. */


#include <cmath>
using namespace std;

int main()
{
    double q,r,E,V;

    const double k=9e9;

    cout<<"Enter charge (C): ";
    cin>>q;

    cout<<"Enter distance (m): ";
    cin>>r;




    E=k*q/(r*r);

    V=k*q/r;


    cout<<"Electric Field = "<<E<<" N/C"<<endl;

    cout<<"Potential = "<<V<<" Volts";


    return 0;
}









