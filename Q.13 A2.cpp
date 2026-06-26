
/* Write a program that uses a loop to find the smallest number in an array of integers. */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 3, 15, 7};
    int size = 6;

    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest number = " << smallest;

    return 0;
}


