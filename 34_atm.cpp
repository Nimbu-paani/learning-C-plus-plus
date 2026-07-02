#include <iostream>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    int pin = 1234;

    cout << "Enter your pin: ";
    cin >> pin;

    if (pin != 1234)
    {
        cout << "Wrong pin!\n";
        return 0;
    }

    do
    {
        cout << "******************\n";
        cout << "1.Show Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "******************\n";

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting\n";
            break;
        default:
            cout << "Invalid Input!";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{
    cout << "Your balance is ₹ " << balance << endl;
}

double deposit()
{
    double amount = 0;

    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Enter a valid amount!\n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount = 0;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << "Enter a valid amount!\n";
        return 0;
    }
    else
        return amount;
}