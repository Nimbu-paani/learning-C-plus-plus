#include <iostream>
using namespace std;

int main()
{
    string str = "Hello";

    cout << str << endl;
    cout << str[0] << endl;
    cout << str[2] << endl;
    cout << str.size() << endl;
    cout << str.length() << endl;

    str[0]='Y';
    cout << str << endl;

    return 0;
}