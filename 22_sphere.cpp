#include <iostream>
using namespace std;

int main()
{
    int r;
    float v, sa;

    cout << "enter radius: ";
    cin >> r;

    v = (4.0 / 3.0) * 3.14 * r * r * r;
    sa = 4.0 * 3.14 * r * r;

    cout << "volume: " << v << '\n';
    cout << "surface area: " << sa << '\n';

    return 0;
}