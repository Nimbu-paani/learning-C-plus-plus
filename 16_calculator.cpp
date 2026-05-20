#include <iostream>
using namespace std;

int main()
{

    char opreation;
    float a,b;

    cout << "Addition(+)" << '\n' << "Subtraction(-)" << '\n' << "Multiplication(*)" << '\n' << "Division(/)" << '\n';
    cout << "Enter a Symbol:";
    cin >> opreation;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Second Number:";
    cin >> b;

    switch (opreation)
    {
    case '+':
        cout << "Addition of " << a << " and " << b << " is equal to " << a+b << '\n';
        break;
    case '-' :
        cout << "Subtraction of " << a << " and " << b << " is equal to " << a-b << '\n';
        break;
    case '*' :
        cout << "Multiplication of " << a << " and " << b << " is equal to " << a*b << '\n';
        break;
    case '/' :
        cout << "Division of " << a << " and " << b << " is equal to " << a/b << '\n';
        break;
    
    default:
        cout << "Please enter one character (+ , - , * , /)";
        break;
    }

    return 0;
}