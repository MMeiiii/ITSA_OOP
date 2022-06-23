#include <iostream>
using namespace std;

int main()
{

    int a;

    while (cin >> a)
    {

        if (a < 0 || a > 100)
        {
            cout << "error\n";
        }
        else if (a >= 90)
        {
            cout << "A\n";
        }
        else if (a <= 89 && a >= 80)
        {
            cout << "B\n";
        }
        else if (a <= 79 && a >= 70)
        {
            cout << "C\n";
        }
        else if (a <= 69 && a >= 60)
        {
            cout << "D\n";
        }
        else if (a < 60)
        {
            cout << "E\n";
        }
    }

    return 0;
}