#include <iostream>

/*Writing e a C++ program to simulate the behavior of a simple RC circuit. The program
should prompt the user for the resistance and capacitance values of the circuit, and then
compute and print out the time constant, response to a step input, and impulse response of
the circuit. */ 


#include <cmath>
using namespace std;

int main()
{
    double R, C, tau, t, V;
    double stepResponse, impulseResponse;

    // Input values
    cout << "Enter resistance (Ohms): ";
    cin >> R;

    cout << "Enter capacitance (Farads): ";
    cin >> C;

    cout << "Enter input voltage (V): ";
    cin >> V;

    cout << "Enter time (seconds): ";
    cin >> t;


    // Time constant
    tau = R * C;


    // Step response
    stepResponse = V * (1 - exp(-t / tau));


    // Impulse response
    impulseResponse = (1 / tau) * exp(-t / tau);


    // Output
    cout << "\nTime Constant = " << tau << " seconds" << endl;

    cout << "Step Response = "
         << stepResponse << " V" << endl;

    cout << "Impulse Response = "
         << impulseResponse << " A" << endl;


    return 0;
}








