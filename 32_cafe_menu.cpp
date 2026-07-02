#include <iostream>
using namespace std;

void order(string food);

int main()
{
    int first, second;

    cout << "1.Starter\n2.Main course\n3.Beverages\n";
    cout << "Enter your choice: ";
    cin >> first;

    switch (first)
    {
    case 1:
        cout << "*******************\n";
        cout << "1.Masala Papad\n2.Veg Spring Roll\n3.Cheese Ball\n4.Aloo Tikki\n";
        cout << "Enter your choice: ";
        cin >> second;

        switch (second)
        {
        case 1:
            order("Masala Papad");
            break;
        case 2:
            order("Veg Spring Roll");
            break;
        case 3:
            order("Cheese Ball");
            break;
        case 4:
            order("Aloo Tikki");
            break;

        default:
            cout << "Invalid input\n";
            break;
        }

        break;

    case 2:
        cout << "*******************\n";
        cout << "1.Shahi Paneer\n2.Dal Tadka\n3.Mix Veg\n4.Jeera Rice\n";
        cout << "Enter your choice: ";
        cin >> second;

        switch (second)
        {
        case 1:
            order("Shahi Paneer");
            break;
        case 2:
            order("Dal Tadka");
            break;
        case 3:
            order("Mix Veg");
            break;
        case 4:
            order("Jeera Rice");
            break;

        default:
            cout << "Invalid input\n";
            break;
        }

        break;

    case 3:
        cout << "*******************\n";
        cout << "1.Mango Lassi\n2.Sweet Lassi\n3.Masala Chaas\n4.Fresh Lime Soda\n";
        cout << "Enter your choice: ";
        cin >> second;

        switch (second)
        {
        case 1:
            order("Mango Lassi");
            break;
        case 2:
            order("Sweet Lassi");
            break;
        case 3:
            order("Masala Chaas");
            break;
        case 4:
            order("Fresh Lime Soda");
            break;

        default:
            cout << "Invalid input\n";
            break;
        }

        break;

    default:
        cout << "Invalid input\n";
        break;
    }
    return 0;
}

void order(string food)
{
    cout << "*******************\n";
    cout << "Your " << food << " has been ordered!\n";
    cout << "*******************\n";
}