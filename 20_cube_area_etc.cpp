#include <iostream>
using namespace std;

int main()
{
    int v, lsa, tsa, side;

    cout << "enter side of cube: ";
    cin >> side;

    v = side * side * side;
    lsa = 4 * side * side;
    tsa = 6 * side * side;

    cout << "volume: " << v << '\n';
    cout << "lateral surface area: " << lsa << '\n';
    cout << "Total surface area: " << tsa << '\n';

    return 0;
}