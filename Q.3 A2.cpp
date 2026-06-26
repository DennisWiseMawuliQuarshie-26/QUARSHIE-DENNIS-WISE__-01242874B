

/* Write a c++ program that reads in a series of characters from the user until the character
'q' is entered. The program should then print out the number of vowels entered */


#include <iostream>
using namespace std;

int main() {
    char letter;
    int vowels = 0;

    cout << "Enter characters (enter 'q' to stop): " << endl;

    while (true) {
        cin >> letter;

        // Stop condition
        if (letter == 'q') {
            break;
        }

        // Check if character is a vowel
        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels entered is: " << vowels << endl;

    return 0;
}
