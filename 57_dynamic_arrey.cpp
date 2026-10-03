#include <iostream>
using namespace std;

int main()
{

    char *pGrades = NULL;

    int size;

    cout << "Enter the number of grades: ";
    cin >> size;

    pGrades=new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Grade #" << i+1 << ": ";
        cin >> pGrades[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << ' ';
    }
    cout << endl;
    
    delete[] pGrades;

    return 0;
}