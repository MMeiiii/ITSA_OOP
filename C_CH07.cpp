#include <iostream>
using namespace std;

int main()
{

    double x;
    int y;

    while (cin >> x >> y)
    {

        if (y == 1)
        {
            double c;
            c = (x - 80) * 0.7;
            cout << c;
        }
        else
        {
            double d;
            d = (x - 70) * 0.6;
            cout << d;
        }
    }
    return 0;
}