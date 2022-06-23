#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    int add, len;

    cin >> str >> add;

    len = str.size();

    for (int i = 0; i < len; i++)
    {
        // small letter
        if ('a' <= str[i] && str[i] <= 'z')
        {
            cout << 'a' + (str[i] - 'a' + add) % 26;
        }
        // big letter
        else if ('A' <= str[i] && str[i] <= 'Z')
        {
            cout << 'A' + (str[i] - 'A' + add) % 26;
        }
        else
        {
            cout << str[i];
        }
    }
    cout << "\n";
    return 0;
}