 #include <iostream>
using namespace std;

int main()
{
    int Q,D,W;
    cin >> Q >> D >> W;

    if(Q == D && D == W)
        cout << "Equal";
    else
        cout << "Not equal";

    return 0;
}
