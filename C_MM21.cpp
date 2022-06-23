#include <iostream>
#include <math>
using namespace std;

int main()
{

    int x;

    while (cin >> x)
    {

        long long int ans = 1; //*long long int 20!

        for (int i = 1; i <= x; i++)
        {
            ans = ans * i;
        }

        cout << ans << "\n";
    }
    return 0;
}