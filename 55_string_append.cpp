#include <iostream>
using namespace std;

int main()
{
    string str1 ="Hello";
    string str2 = " World";
    string result;

    result = str1;
    result.append(str2);
    
    cout << result << endl;
    return 0;
}