#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    char sym;

    cout << "Enter the number of rows:";
    cin >> rows;
    cout << "Enter the number of columns:";
    cin >> columns;

    cout << "Which symbol you want:";
    cin >> sym;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << sym;
        }
        cout << '\n';
    }

    return 0;
}