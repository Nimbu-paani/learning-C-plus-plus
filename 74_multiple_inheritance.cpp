#include <iostream>

class landvehicle
{
public:
    void land()
    {
        std::cout << "This Vehicle can run on land\n";
    }
};

class watervehicle
{
public:
    void water()
    {
        std::cout << "This Vehicle can swim under water\n";
    }
};

class amphibiousvehicle : public landvehicle, public watervehicle
{
public:
    void amphibious()
    {
        std::cout << "This Vehicle can run on land as well as underwater\n";
    }
};

int main()
{
    amphibiousvehicle vehicle;

    vehicle.land();
    vehicle.water();
    vehicle.amphibious();

    return 0;
}