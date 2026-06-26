

/*Writing e a C++ program to solve for the natural frequencies and modes of vibration of a
multi-degree-of-freedom mechanical system. The program should prompt the user for the
mass and stiffness matrices of the system, and then compute and print out the natural
frequencies and modes of vibration */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double m,k;

    cout<<"Enter Mass: ";
    cin>>m;

    cout<<"Enter Stiffness: ";
    cin>>k;


    double f=sqrt(k/m)/(2*3.14159);

    cout<<"Natural Frequency = "<<f<<" Hz";


    return 0;
}


