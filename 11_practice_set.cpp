#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double a,b,c;

    cout << "Enter side A:";
    cin >> a;

    cout << "Enter side B:";
    cin >> b;

    a = pow(a , 2);
    b = pow(b , 2);
    c = sqrt(a + b);

    cout << "Side C:" << c << '\n';

    return 0;
}