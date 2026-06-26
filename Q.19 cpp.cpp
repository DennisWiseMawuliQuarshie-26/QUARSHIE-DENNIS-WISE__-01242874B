#include <iostream>

/* Write a C++ program to calculate the electric field and potential at a point in space due to
a charged dielectric. The program should prompt the user for the dielectric's shape, size,
permittivity, and charge distribution, and then compute and print out the electric field and
potential at a given point in space.  */


#include <cmath>
using namespace std;

int main()
{
    double charge, distance, epsilon;
    double E, V;

    cout << "Enter charge (C): ";
    cin >> charge;

    cout << "Enter distance (m): ";
    cin >> distance;

    cout << "Enter permittivity: ";
    cin >> epsilon;

    E = charge / (4 * 3.14159 * epsilon * distance * distance);

    V = charge / (4 * 3.14159 * epsilon * distance);

    cout << "Electric Field = " << E << " N/C" << endl;
    cout << "Potential = " << V << " V";

    return 0;
}

