#include <iostream>
using namespace std;

int main()
{
    int si, p, t, r;

    cout << "enter principle: ";
    cin >> p;

    cout << "enter time(in years): ";
    cin >> t;

    cout << "enter rate: ";
    cin >> r;

    si = (p * t * r) / 100;

    cout << "simple intrest: " << si << endl;

    return 0;
}