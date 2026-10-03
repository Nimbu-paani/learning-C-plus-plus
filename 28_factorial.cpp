#include <iostream>
using namespace std;

int main()
{
    int i;
    int k=1;

    cout << "Enter a number: ";
    cin >> i;

    for (i ; i; i--)
    {
        k=i*k;
    }
    
    cout << k << endl;
    return 0;
}