#include <iostream>

int main()
{
    using namespace std;

    string name;
    int age;

    cout << "Whats your name?" << '\n';
    cin >> name;

    cout << "whats your age?" << '\n';
    cin >> age;

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old" << '\n';

    return 0;
}