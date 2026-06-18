#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;

    if(word.find('Q') != string::npos)
        cout << "Contains 'a'";
    else
        cout << "Does not contain 'Q'";

    return 0;
}

