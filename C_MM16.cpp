#include <iostream>
#include <math>
using namespace std;

int main()
{

    double x, y;

    while (cin >> x >> y)
    {

        if (x * x + y * y <= 40000)
        {
            cout << "inside\n";
        }
        else
        {
            cout << "outside\n";
        }
    }
    return 0;
}