#include <iostream>
using namespace std;

int main()
{

    int n, char_num[30];
    char c, d;

    for (int i = 0; i < 26; i++)
    {
        char_num[i] = 0;
    }

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c >> d;
        char_num[d - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (char_num[i] != 0)
        {
            cout << 'a' + i << char_num[i];
        }
    }

    return 0;
}