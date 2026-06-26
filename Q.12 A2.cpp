
/* Write a program that uses a loop to calculate the sum of the first 10 positive integers. */


#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    cout << "Sum = " << sum;

    return 0;
}
