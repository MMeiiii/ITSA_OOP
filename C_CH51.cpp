#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;

        if (score <= 100 && score >= 95)
            cout << "Excellent\n";
        else if (score <= 94 && score >= 85)
            cout << "Very Good\n";
        else if (score <= 84 && score >= 61)
            cout << "Good\n";
        else
            cout << "Careless\n";
    }

    return 0;
}