#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;

    while (cin >> str)
    {

        int str_num = str.size();
        int pre = 0, last = str_num - 1, key = 0;

        while (pre < last)
        {

            if (str[pre] != str[last])
            {
                key = 1;
                break;
            }
            pre++;
            last--;
        }
        if (key == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}