#include <iostream>
using namespace std;

int main()
{
    int nums[5];
    int max;

    cout << "Enter 5 numbers:";

    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }

    max = nums[0];

    for (int j = 0; j < 5; j++)
    {
        if (nums[j] > max)
        {
            max = nums[j];
        }
    }

    cout << "max=" << max << endl;

    return 0;
}