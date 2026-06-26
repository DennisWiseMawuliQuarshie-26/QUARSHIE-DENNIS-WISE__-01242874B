

/*Writinga C++ program to simulate the behavior of a simple transformer. The program
should prompt the user for the primary and secondary winding inductances and turns
ratios, and then compute and print out the voltage and current ratios, as well as the phase
angle shift, for a given input voltage.*/

#include <iostream>
using namespace std;

int main()
{
    double Np,Ns,Vp,Vratio,Iratio;

    cout<<"Enter Primary Turns: ";
    cin>>Np;

    cout<<"Enter Secondary Turns: ";
    cin>>Ns;

    cout<<"Enter Input Voltage: ";
    cin>>Vp;


    Vratio=Ns/Np;

    Iratio=Np/Ns;


    cout<<"Voltage Ratio = "<<Vratio<<endl;

    cout<<"Output Voltage = "<<Vp*Vratio<<" V"<<endl;

    cout<<"Current Ratio = "<<Iratio;


    return 0;
}

