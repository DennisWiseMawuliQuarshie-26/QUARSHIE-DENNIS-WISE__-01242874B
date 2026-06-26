

/*Write a c++ program that reads in a series of strings from the user until the string "done"
is entered. The program should then print out the number of strings entered*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int count = 0;

    cout << "Enter strings (type 'done' to stop): " << endl;

    while (true) {
        cin >> text;

        if (text == "done") {
            break;
        }

        count++;
    }

    cout << "Number of strings entered: " << count << endl;

    return 0;
}




