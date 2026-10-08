#include <iostream>

class vehicle
{
public:
    void display()
    {
        std::cout << "Super class\n";
    }
};
class car : public vehicle
{
public:
    void cardisplay()
    {
        std::cout << "Car subclass\n";
    }
};
class bus : public vehicle
{
public:
    void busdisplay()
    {
        std::cout << "Bus subclass\n";
    }
};
int main()
{
    car car;
    bus bus;

    car.display();
    car.cardisplay();
    bus.busdisplay();
    bus.display();
    return 0;
}