#include <iostream>
using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    cout << n << m << n + m << "\n";
    cout << n << m << n * m << "\n";
    cout << n << m << n - m << "\n";

    if (n < 0 && m < 0)
    { // -10/-3=3...-1 --> -10/-3=4...2
        int a = n / m + 1, b = n - m * a;
        cout << n << m << a << b;
    }
    else if (n < 0)
    { // -10/3=-3...-1 --> -10/3=-4...2
        int a = n / m - 1, b = n - m * a;
        cout << n << m << a << b;
    }
    else
    {
        cout << n << m << n / m << n % m;
    }
    return 0;
}