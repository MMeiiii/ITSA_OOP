#include <iostream>
#include <math>
using namespace std;

int main()
{

    int x, y, ans;

    while (cin >> x >> y)
    {

        if (x > y)
        { // change x & y
            int temp;
            temp = x;
            x = y;
            y = temp;
        }

        ans = 0;

        for (int i = x; i <= y; i++)
        {
            ans = ans + i;
        }

        cout << ans << "\n";
    }

    return 0;
}