#include <iostream>
#include <string>
using namespace std;

string animal[15] = {"monkey", "rooster", "dog", "pig", "rat", "ox", "tiger", "rabbit", "dragon", "snake",
                     "horse", "sheep"};

int main()
{
    int year;
    while (cin >> year)
    {
        cout << animal[year % 12] << "\n";
    }

    return 0;
}