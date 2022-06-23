#include <iostream>
using namespace std;

int main()
{

    int a;

    while (cin >> a)
    {

        if (a % 2 == 1)
        {
            cout << "odd\n";
        }
        else
        {
            cout << "even\n";
        }
    }

    return 0;
}