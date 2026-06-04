#include <iostream>
using namespace std;

int main()
{
    int v, lsa, tsa, l, b, h;

    cout << "enter length: ";
    cin >> l;
    cout << "enter bredth: ";
    cin >> b;
    cout << "enter height: ";
    cin >> h;

    v = l * b * h;
    lsa = 2 * h * (l + b);
    tsa = 2 * (l * b + l * h + b * h);

    cout << "volume: " << v << '\n';
    cout << "lateral surface area: " << lsa << '\n';
    cout << "Total surface area: " << tsa << '\n';

    return 0;
}