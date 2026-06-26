

/*Writing e a C++ program to simulate the behavior of a simple three-phase AC system. The
program should prompt the user for the line-to-line voltage, phase angle, and load
impedance values, and then compute and print out the line current, phase current, and
power factor for each phase.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double VL,Z,phase,I;

    cout<<"Enter Line Voltage: ";
    cin>>VL;

    cout<<"Enter Impedance: ";
    cin>>Z;

    cout<<"Enter Phase Angle: ";
    cin>>phase;


    I=(VL/sqrt(3))/Z;


    cout<<"Phase Current = "<<I<<" A"<<endl;

    cout<<"Power Factor = "<<cos(phase*3.14159/180);


    return 0;
}


