

/*What is the purpose of the break statement in a loop? Give an example of its usage */

/* The break statement in a loop is used to immediately stop (terminate) the loop before the loop condition becomes false. When the program reaches break,
 it exits the loop and continues with the next statement after the loop.*/
 
 #include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number;

        if (number == 0) {
            break;  
			 // stops the loop
        }

        cout << "You entered: " << number << endl;
    }

    cout << "Program ended.";

    return 0;
}
