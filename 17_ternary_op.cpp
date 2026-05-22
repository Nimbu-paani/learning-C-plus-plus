#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your marks:";
    cin >> grade;

    grade > 50 ? cout << "Pass\n" : cout << "fail\n";
    return 0;
}