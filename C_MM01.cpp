#include <iostream>
using namespace std;

int main()
{

    float top, bottom, high; //¤W©³ ¤U©³ °ª

    while (cin >> top >> bottom >> high)
    {

        cout << "Trapezoid area:" << (top + bottom) * high / 2 << "\n";
    }

    return 0;
}