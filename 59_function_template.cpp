#include <iostream>
using namespace std;
template <typename T, typename U>

auto max(T x, U y)
{
    return (x>y) ? x : y;
}

int main()
{
    double a,b;

    cout << "Enter 2 Values: ";
    cin >> a >> b;

    cout << "Max: " << max(a,b) << endl;
    
    return 0;
}