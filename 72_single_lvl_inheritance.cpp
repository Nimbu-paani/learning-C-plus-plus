#include <iostream>

class vehicle
{
public:
    void display()
    {
        std::cout << "Parent class\n";
    }
};

class car : public vehicle
{
public:
    void show()
    {
        std::cout << "Child class\n";
    }
};

int main()
{
    car obj;
    obj.display();
    obj.show();
    return 0;
}