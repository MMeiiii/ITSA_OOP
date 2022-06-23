#include <iostream>
using namespace std;

int main()
{

    int a;

    while (cin >> a)
    {

        if (a == 1)
        {
            cout << "Person\n";
        }
        else if (a == 2)
        {
            cout << "Fairy\n";
        }
        else
        {
            cout << "Dwarf\n";
        }
    }

    return 0;
}