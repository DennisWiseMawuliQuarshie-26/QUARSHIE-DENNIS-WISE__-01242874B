

/* How do you use the switch statement in C++? Give an example*/
 
  

//Example//


#include <iostream>
using namespace std;

int main() {
    int light;

    cout << "Enter traffic light number (1-3): ";
    cin >> light;

    switch (light) {
        case 1:
            cout << "Red - Stop";
            break;

        case 2:
            cout << "Yellow - Get ready";
            break;

        case 3:
            cout << "Green - Go";
            break;

        default:
            cout << "Invalid traffic light";
    }

    return 0;
}

