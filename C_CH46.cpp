#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;

    cin << n;

    while (n--)
    {

        string str_start, str_aim;

        cin >> str_start >> str_aim;

        int sum = 0;
        int len = str_start.size();

        for (int i = 0; i < len; i++)
        {

            int a, b, c;

            // cal difference
            a = str_start[i] - '0';
            b = str_aim[i] - '0';

            c = a - b;

            if (c < 0)
            {
                c = -c;
            }

            // short
            if (c > 5)
            {
                c = 10 - c;
            }

            sum = sum + c;
        }
        cout << sum
    }
    return 0;
}