#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int face;
    cout << "How many numbers your dice have:";
    cin >> face;

    srand(time(NULL));
    int num = (rand() % face) + 1;

    cout << "Your rolled a " << num << "!" << '\n';
    return 0;
}