#include <iostream>
using namespace std;

int main()
{

    int n;

    while (cin >> n)
    {

        if (n <= 5 && 3 <= n)
        { // 3<=n<=5
            cout << "Spring\n";
        }
        else if (n <= 8 && 6 <= n)
        { // 6<=n<=8
            cout << "Summer\n";
        }
        else if (n <= 11 && 9 <= n)
        { // 9<=n<=11
            cout << "Autumn\n";
        }
        else
        {
            cout << "Winter\n";
        }
    }
    return 0;
}