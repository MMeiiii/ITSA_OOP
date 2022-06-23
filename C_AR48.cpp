#include <iostream>
using namespace std;

int main()
{

    int n, a, b, c, d;

    cin >> n;

    // catch first-forth num
    a = (n / 1000 + 7) % 10;
    b = (n / 100 % 10 + 7) % 10;
    c = (n / 10 % 10 + 7) % 10;
    d = (n % 10 + 7) % 10;

    cout << c << d << a << b;

    return 0;
}