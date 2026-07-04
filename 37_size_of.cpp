#include <iostream>
using namespace std;

int main()
{
    int count;
    string name[] = {"Nimbu" , "Lemon" , "Rajan"};
    
    count = sizeof(name)/sizeof(name[0]);

    cout << count << " Students\n";

    return 0;
}