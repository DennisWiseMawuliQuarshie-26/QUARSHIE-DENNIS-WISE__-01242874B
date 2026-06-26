
/* Write a program that asks the user to input a number, and then uses a loop to print out the
numbers from 1 to that number. The program should only print out odd numbers.*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
