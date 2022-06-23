#include <iostream>
using namespace std;

int main()
{

    char c;

    while (cin >> c)
    {

        if (c == 'E')
        {
            cout << "ByeBye\n";
        }
        else if (c == 'M')
        {
            cout << "Male\n";
        }
        else if (c == 'F')
        {
            cout << "Female\n";
        }
    }

    return 0;
}