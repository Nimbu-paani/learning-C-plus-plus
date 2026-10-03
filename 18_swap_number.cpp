#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << "after swapping: " << a << " " << b << endl;

    return 0;
}