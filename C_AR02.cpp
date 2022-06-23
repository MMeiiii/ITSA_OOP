#include <iostream>
using namespace std;

int main()
{

    long long int array[8];

    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }

    for (int i = 5; i > 0; i--)
    {
        cout << array[i];
    }

    cout << array[0];

    return 0;
}