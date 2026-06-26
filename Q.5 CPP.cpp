#include <iostream>

/* Write a C++ program to simulate the behavior of a simple alternating current (AC)
circuit. The program should prompt the user for the resistance, inductance, and
capacitance values of the circuit, and then compute and print out the impedance, phase
angle, and power factor of the circuit at a given frequency. */ 


#include <cmath>
using namespace std;

int main()
{
    double R,L,C,f;

    const double pi=3.14159;

    cout<<"Enter R: ";
    cin>>R;

    cout<<"Enter L: ";
    cin>>L;

    cout<<"Enter C: ";
    cin>>C;

    cout<<"Enter Frequency: ";
    cin>>f;


    double w=2*pi*f;

    double XL=w*L;
    double XC=1/(w*C);

    double X=XL-XC;


    double Z=sqrt(R*R+X*X);


    double angle=atan(X/R)*180/pi;


    double pf=cos(angle*pi/180);


    cout<<"Impedance = "<<Z<<" ohm"<<endl;
    cout<<"Phase Angle = "<<angle<<" degree"<<endl;
    cout<<"Power Factor = "<<pf;


    return 0;
}












