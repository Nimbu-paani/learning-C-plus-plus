#include <iostream>
using namespace std;

int main()
{
    int r, h;
    float v, csa, tsa;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    v = 3.14 * r * r * h;
    csa = 2 * 3.14 * r * h;
    tsa = 2 * 3.14 * r * (r + h);

    cout << "volume: " << v << '\n';
    cout << "curved surface area: " << csa << '\n';
    cout << "Total surface area: " << tsa << '\n';

    return 0;
}