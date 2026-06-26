

/* Write a C++ program that reads in a series of numbers from the user until a number that
is not a multiple of 3 is entered. The program should then print out the sum of all the
multiples of 3 entered.*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter numbers (enter a number not multiple of 3 to stop): " << endl;

    while (true) {
        cin >> number;

        // Stop condition
        if (number % 3 != 0) {
            break;
        }

        // Add multiples of 3
        sum = sum + number;
    }

    cout << "Sum of multiples of 3 is: " << sum << endl;

    return 0;
}


