#include <iostream>
using namespace std;

int main()
{
    double height, weight, bmi;
    cout << "***BMI calculator***\n";
    cout << "********************\n";

    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Enter your Weight in Kg: ";
    cin >> weight;

    bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        cout << "You are underweight\n";
        cout << "BMI: " << bmi << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "You are normal weight\n";
        cout << "BMI: " << bmi << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        cout << "You are overweight\n";
        cout << "BMI: " << bmi << endl;
    }
    else if (bmi >= 30)
    {
        cout << "You are obese\n";
        cout << "BMI: " << bmi << endl;
    }

    return 0;
}