#include <iostream>
using namespace std;

int main()
{

    long long int array[8], sum = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 6; i++)
    {
        sum = sum + array[i] * array[i] * array[i];
    }

    cout << sum;

    return 0;
}