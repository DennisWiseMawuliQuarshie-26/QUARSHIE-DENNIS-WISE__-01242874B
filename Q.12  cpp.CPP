

/*Writing a C++ program to calculate the electric field and potential at a point in space due to
a charged conductor. The program should prompt the user for the shape, size, and charge
distribution of the conductor, and then compute and print out the electric field and
potential at a given point in space.*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 double Q,r,E,V;

 const double k=9e9;

 cout<<"Enter Charge: ";
 cin>>Q;

 cout<<"Enter Distance: ";
 cin>>r;


 E=k*Q/(r*r);
 V=k*Q/r;


 cout<<"Electric Field = "<<E<<" N/C"<<endl;
 cout<<"Potential = "<<V<<" V";

 return 0;
}



