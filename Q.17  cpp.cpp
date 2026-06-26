#include <iostream>

/* . Write a C++ program to simulate the behavior of a simple DC power system. The
program should prompt the user for the voltage and current values at the source and load,
and then compute and print out the power delivered and the efficiency of the system. */


using namespace std;

int main()
{
    double Vs, Is, Vl, Il;
    double Pin, Pout, efficiency;

    cout << "Enter source voltage: ";
    cin >> Vs;

    cout << "Enter source current: ";
    cin >> Is;

    cout << "Enter load voltage: ";
    cin >> Vl;

    cout << "Enter load current: ";
    cin >> Il;

    Pin = Vs * Is;
    Pout = Vl * Il;

    efficiency = (Pout / Pin) * 100;

    cout << "Power Delivered = " << Pout << " W" << endl;
    cout << "Efficiency = " << efficiency << "%";

    return 0;
}

