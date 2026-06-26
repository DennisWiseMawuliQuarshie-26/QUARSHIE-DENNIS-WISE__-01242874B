
/* How does the continue statement work in a loop? Give an example of its usage */

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            continue; // skip number 5
        }

        cout << i << " ";
    }

    return 0;
}
