#include <iostream>
#include <ctime>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

using namespace std;

int main()
{
    int num, guess, tries=0;
    int max;

    cout << BLUE << "***GUESS THE NUMBER***" << RESET << endl;

    cout << MAGENTA << "Enter the maximum number: " << RESET;
    cin >> max;

    srand(time(0));
    num = (rand() % max) + 1;

    do
    {
        cout << BLUE << "Enter a number(1-"<<max<<"): "<< RESET;
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << YELLOW << "Go Lower" << RESET << endl;
        }
        else if (guess < num)
        {
            cout << YELLOW << "Go Higher" << RESET << endl;
        }
        else
        {
            cout << GREEN << "Correct the number was " << RESET << num << '\n';
            cout << GREEN << "Number of tries: " << RESET << tries << '\n';
        }

    } while (guess != num);

    return 0;
}