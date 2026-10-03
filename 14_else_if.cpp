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
    
    else if (age < 0)
    {
        cout << "Enter valid Age!" << '\n'; 
    }
    
    else
    {
       cout << "You are not an adult!" << '\n'; 
    }   

    return 0;
}