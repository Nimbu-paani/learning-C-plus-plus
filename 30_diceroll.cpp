#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int face, again, num;
    again = 1;
    cout << "How many numbers your dice have:";
    cin >> face;

    do
    {
        srand(time(NULL));
        num = (rand() % face) + 1;
        cout << "--------------------------------------\n";
        cout << "Your rolled a " << num << "!" << '\n';
        cout << "--------------------------------------\n";
        cout << "1.Roll again\n2.exit\n";
        cout << "Input:";
        cin >> again;

    } while (again == 1);

    return 0;
}