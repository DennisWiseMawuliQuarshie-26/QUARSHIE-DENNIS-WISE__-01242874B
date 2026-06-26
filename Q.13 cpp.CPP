

/*Writing a C++ program to simulate the behavior of a simple single-phase AC motor. The
program should prompt the user for the resistance, inductance, and torque constants of
the motor, and then compute and print out the current, speed, and power of the motor for
a given applied voltage and frequency*/ 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 double R,L,V,f,Z,I,P;

 cout<<"Enter Resistance: ";
 cin>>R;

 cout<<"Enter Inductance: ";
 cin>>L;

 cout<<"Enter Voltage: ";
 cin>>V;

 cout<<"Enter Frequency: ";
 cin>>f;


 Z=sqrt(R*R+pow(2*3.14159*f*L,2));

 I=V/Z;

 P=V*I;


 cout<<"Current = "<<I<<" A"<<endl;
 cout<<"Power = "<<P<<" W";


 return 0;
}





