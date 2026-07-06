#include <iostream>
using namespace std;
void swap(int &x, int &y);

int main()
{
    int x = 67;
    int y = 69;

    swap(x , y);

    cout << x << endl << y << endl;

    return 0;
}
void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}