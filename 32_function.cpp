#include <iostream>
using namespace std;

int square(int side);

int main()
{
    int side;
    cout << "Enter side:";
    cin >> side;

    cout << "Area: " << square(side) << endl;

    return 0;
}

int square(int side)
{
    return side*side;
}