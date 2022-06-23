#include <iostream>
#include <math>
using namespace std;

int main()
{

    double length;

    while (cin >> length)
    {

        cout << floor((length * length * 10 + 0.5)) / 10 << "\n"; // 8.5*8.5=72.25 72.25*10-->722.5+0.5(¶i¦ì) -->/10ÅÜ¦^¨Ó
    }
    return 0;
}