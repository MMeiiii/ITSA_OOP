#include <iostream>
#include <math>
using namespace std;

int main()
{

    int x, y;

    while (cin >> x >> y)
    {

        if (x <= 100 && y <= 100)
        { // inside
            cout << "inside\n");
        }
        else
        { // outside
            cout << "outside\n";
        }
    }
    return 0;
}