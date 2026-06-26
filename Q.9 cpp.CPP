

/*Writing e a C++ program to calculate the magnetic field and flux density at a point due to a
current-carrying wire. The program should prompt the user for the current, position, and
orientation of the wire, and then compute and print out the magnetic field and flux
density at a given point in space.*/


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double I,r,B;

    const double mu=4*3.14159e-7;


    cout<<"Enter Current: ";
    cin>>I;

    cout<<"Enter Distance: ";
    cin>>r;


    B=(mu*I)/(2*3.14159*r);


    cout<<"Magnetic Field = "<<B<<" Tesla";


    return 0;
}
