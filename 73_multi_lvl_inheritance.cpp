#include <iostream>

class vehicle
{
public:
    void Vehicle()
    {
        std::cout << "This is a Vehicle\n";
    }
};

class threewheeler : public vehicle
{
public:
    void Rickshaw()
    {
        std::cout << "This is a Rickshaw\n";
    }
};

class fourwheeler : public threewheeler
{
public:
    void car()
    {
        std::cout << "This is a Car\n";
    }
};

int main()
{
    fourwheeler print;
    print.Vehicle();
    print.Rickshaw();
    print.car();

    return 0;
}