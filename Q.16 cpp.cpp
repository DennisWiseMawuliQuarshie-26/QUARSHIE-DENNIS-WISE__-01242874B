#include <iostream>

/* . Write a C++ program to calculate the mutual inductance between two current-carrying
wires. The program should prompt the user for the current, position, and orientation of
the wires, and then compute and print out the mutual inductance. */


#include <cmath>
using namespace std;

int main()
{
    double I1, I2, d, angle, M;

    cout << "Enter current in wire 1 (A): ";
    cin >> I1;

    cout << "Enter current in wire 2 (A): ";
    cin >> I2;

    cout << "Enter distance between wires (m): ";
    cin >> d;

    cout << "Enter orientation angle (degree): ";
    cin >> angle;

    angle = angle * 3.14159 / 180;

    M = (4 * 3.14159e-7 * cos(angle)) / (2 * 3.14159) * log(1/d);

    cout << "Mutual Inductance = " << M << " H";

    return 0;
}
