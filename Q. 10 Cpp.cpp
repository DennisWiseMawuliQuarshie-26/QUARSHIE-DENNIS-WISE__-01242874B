#include <iostream>
using namespace std;

int main()
{
    int Q,D;
    cin >> Q >> D;

    int large = (Q > W) ? Q : D;

    cout << "Larger = " << large;

    return 0;
}
