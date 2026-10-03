#include <iostream>
using namespace std;

int main()
{
    int count;
    string name[] = {"Nimbu" , "Lemon" , "Rajan" , "Ayush"};
    
    count = sizeof(name)/sizeof(name[0]);

    cout << count << " Students\n";

    for (long unsigned int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    {
        cout << name[i] << endl;
    }
    

    return 0;
}