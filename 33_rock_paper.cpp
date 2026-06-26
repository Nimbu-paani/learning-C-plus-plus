#include <iostream>
#include <ctime>
using namespace std;

char userchoice();
char computerchoice();
void showchoice(char choice);
void winner(char player, char computer);

int main()
{

    char player;
    char computer;
    int again = 1;

    do
    {
        player = userchoice();
        cout << "*********************\n";
        cout << "You choose: ";
        showchoice(player);

        computer = computerchoice();
        cout << "Computer choose: ";
        showchoice(computer);
        cout << "*********************\n";

        winner(player, computer);
        cout << "*********************\n";
        cout << "1.Play again\n2.exit\n";
        cout << "*********************\n";
        cout << "Choose:";
        cin >> again;
    } while (again == 1);

    return 0;
}

char userchoice()
{
    char player;
    cout << "Rock-Papers-Scissors!\n";
    do
    {
        cout << "*********************\n";
        cout << "'r' for Rock\n'p' for Paper\n's' for Scissors\n";
        cout << "Enter your choice:";
        cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char computerchoice()
{
    srand(time(0));
    int num = (rand() % 3) + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;

    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
    }
}
void winner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "Draw!\n";
        }
        else if (computer == 'p')
        {
            cout << "You Lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;

    case 'p':
        if (computer == 'p')
        {
            cout << "Draw!\n";
        }
        else if (computer == 's')
        {
            cout << "You Lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;

    case 's':
        if (computer == 's')
        {
            cout << "Draw!\n";
        }
        else if (computer == 'r')
        {
            cout << "You Lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;
    }
}