#include <iostream>
using namespace std;

int main()
{

    int x, y;

    while (cin >> x >> y)
    {

        // judge position
        if (x == 0 && y == 0)
        {
            cout << "Origin\n";
        }
        else if (x == 0)
        {
            cout << "y-axis\n";
        }
        else if (y == 0)
        {
            cout << "x-axis\n";
        }
        else if (x > 0 && y > 0)
        {
            cout << "1st Quadrant\n";
        }
        else if (x > 0 && y < 0)
        {
            cout << "4th Quadrant\n";
        }
        else if (x < 0 && y > 0)
        {
            cout << "2rd Quadrant\n";
        }
        else if (x < 0 && y < 0)
        {
            cout << "3rd Quadrant\n";
        }
    }
    return 0;
}