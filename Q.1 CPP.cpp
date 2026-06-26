#include <iostream>

/*Write a C++ program to simulate the behavior of a simple electric circuit. The program
should prompt the user for the resistance, inductance, and capacitance values of the
circuit, and then compute and print out the impedance and phase angle of the circuit at a
given frequency */


#include <cmath>
using namespace std;

int main()
{
    double R,L,C,f;
    double XL,XC,Z,phase;
    const double pi=3.14159;

    cout<<"Enter Resistance (Ohm): ";
    cin>>R;

    cout<<"Enter Inductance (H): ";
    cin>>L;

    cout<<"Enter Capacitance (F): ";
    cin>>C;

    cout<<"Enter Frequency (Hz): ";
    cin>>f;

    XL=2*pi*f*L;
    XC=1/(2*pi*f*C);

    Z=sqrt(pow(R,2)+pow(XL-XC,2));

    phase=atan((XL-XC)/R)*180/pi;

    cout<<"Impedance = "<<Z<<" Ohm"<<endl;
    cout<<"Phase Angle = "<<phase<<" degrees";

    return 0;
}




