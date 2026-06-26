

/*Writing a C++ program to solve for the transfer function of a linear time-invariant system.
The program should prompt the user for the system's state-space representation, and then
compute and print out the transfer function. */ 

#include<iostream>
using namespace std;

int main()
{
 double a,b,c,d;

 cout<<"Enter numerator coefficient: ";
 cin>>a;

 cout<<"Enter denominator coefficient: ";
 cin>>b;

 cout<<"Enter second denominator coefficient: ";
 cin>>c;

 cout<<"Enter third denominator coefficient: ";
 cin>>d;


 cout<<"Transfer Function:"<<endl;

 cout<<"H(s)= "<<a<<"/("<<b<<"s^2 + "
 <<c<<"s + "<<d<<")";


 return 0;
}






