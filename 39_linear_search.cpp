#include <iostream>
using namespace std;

int main()
{
    int arr[] ={10,20,50,80,100,25};
    int num;

    cout << "Enter number you want to search: ";
    cin >> num;

    for (long unsigned int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]==num)
        {
            cout << num << " is at " << i << " index\n";
            return 0;
        }
    }
    cout << num << " doesn't exists\n";
    
    return 0;
}