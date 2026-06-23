#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries=0;
    int max;

    cout << "***GUESS THE NUMBER***\n";

    cout << "Enter the maximum number: ";
    cin >> max;

    srand(time(0));
    num = (rand() % max) + 1;

    do
    {
        cout << "Enter a number(1-"<<max<<"): ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Go Lower\n";
        }
        else if (guess < num)
        {
            cout << "Go Higher\n";
        }
        else
        {
            cout << "Correct the number was " << num << '\n';
            cout << "Number of tries: " << tries << '\n';
        }

    } while (guess != num);

    return 0;
}