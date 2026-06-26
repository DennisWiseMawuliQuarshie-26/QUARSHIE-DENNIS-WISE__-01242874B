#include <iostream>

/* Write a C++ program to calculate the power consumed by a resistor in an electric circuit.
The program should prompt the user for the voltage, current, and resistance values of the
circuit, and then compute and print out the power consumed by the resistor */


#include <iostream>
using namespace std;

int main()
{
    double V,I,R,P;

    cout<<"Enter Voltage: ";
    cin>>V;

    cout<<"Enter Current: ";
    cin>>I;

    cout<<"Enter Resistance: ";
    cin>>R;

    P=I*I*R;

    cout<<"Power Consumed = "<<P<<" Watts";

    return 0;
}






