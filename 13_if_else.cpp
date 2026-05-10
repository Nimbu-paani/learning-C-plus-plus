#include <iostream>

int main()
{
    using namespace std;

    int age;

    cout << "Enter your age:";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult!" << '\n';
    }
    else
    {
       cout << "You are not an adult!" << '\n'; 
    }   

    return 0;
}