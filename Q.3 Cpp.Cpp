#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter string: ";
    cin >> word;

    if(word == "hello")
        cout << "Hello!";
    else
        cout << "Goodbye!";

    return 0;
}
