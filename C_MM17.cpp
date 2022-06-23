#include <iostream>
using namespace std;

int main()
{

    int x, y, a;

    cin >> x >> y;

    a = x % y;

    while (a != 0)
    { // 12/8=1...4 --> 8/4=2..0 (0)-->stop
        a = x % y;
        x = y;
        y = a;
        a = x % y;
    }

    cout << y << "\n";

    return 0;
}