

/*Writing a C++ program to calculate the power delivered by a transmission line. The
program should prompt the user for the line voltage, current, and impedance values, and
then compute and print out the active power, reactive power, and apparent power
delivered by the line.*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 double V,I,Z,P,Q,S;

 cout<<"Enter Voltage: ";
 cin>>V;

 cout<<"Enter Current: ";
 cin>>I;

 cout<<"Enter Impedance: ";
 cin>>Z;

 S=V*I;
 P=I*I*Z;
 Q=sqrt(S*S-P*P);

 cout<<"Active Power = "<<P<<" W"<<endl;
 cout<<"Reactive Power = "<<Q<<" VAR"<<endl;
 cout<<"Apparent Power = "<<S<<" VA";

 return 0;
}



