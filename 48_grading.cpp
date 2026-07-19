#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks obtained: ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade: A++\n";
    }
    else if (marks < 90 && marks >= 80)
    {
        cout << "Grade: A\n";
    }
    else if (marks < 80 && marks >= 70)
    {
        cout << "Grade: B\n";
    }
    else if (marks < 70 && marks >= 60)
    {
        cout << "Grade: C\n";
    }
    else if (marks < 60 && marks >= 50)
    {
        cout << "Grade: D\n";
    }
    else if (marks < 50 && marks >= 40)
    {
        cout << "Grade: E\n";
    }
    else
    {
        cout << "Grade: Fail\n";
    }
    return 0;
}