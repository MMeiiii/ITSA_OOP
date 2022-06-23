#include <iostream>
#include <math>
using namespace std;

int main()
{

    int x;

    while (cin >> x)
    {

        cout << "NT10=" << x / 10 << "\n"; // 10

        x = x - 10 * (x / 10);

        cout << "NT5=" << x / 5 << "\n"; // 5

        x = x - 5 * (x / 5);

        cout << "NT1=" << x / 1 << "\n"; // 1
    }

    return 0;
}