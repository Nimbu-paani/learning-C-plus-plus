#include <iostream>
using namespace std;

void sort(int arr[], int size);

int main()
{
    int arr[20];
    int size;

    cout << "How many elements you have: ";
    cin >> size;

    if (size > 20)
    {
        cout << "Only 20 Numbers are supported currently\n";
        return 0;
    }

    cout << "Enter the Numbers: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, size);

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}

void sort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
