#include <iostream>
using namespace std;

int main()
{
    double temp;
    int response;

    cout << "Temprature Converter\n";
    cout << "********************\n";
    cout << "1. Convert from Fahrenheit to Celsius\n";
    cout << "2. Convert from Celsius to Fahrenheit\n";
    cout << endl;
    cout << "Enter a choice(1-2): ";
    cin >> response;

    if (response == 1)
    {
        cout << "Enter Temprature in Fahrenheit: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;

        cout << "Converted Temprature is " << temp << "C\n";
    }
    else if (response == 2)
    {
        cout << "Enter Temprature in Celsius: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;

        cout << "Converted Temprature is " << temp << "F\n";
    }
    else
    {
        cout << "Please enter a valid response (1-2)\n";
    }

    return 0;
}