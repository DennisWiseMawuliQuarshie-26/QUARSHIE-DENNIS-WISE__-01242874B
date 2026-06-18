#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if(num % 2 != 0 && num % 3 == 0)
        cout << "Odd and divisible by 3";
    else
        cout << "Not both";

    return 0;
}
