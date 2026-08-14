#include <iostream>

class car
{
    public:
    std::string make;
    std::string model;
    int year;
    std::string color;
    std::string owner;

    void acc()
    {
        std::cout << "You pressed Gas!\n";
    }
    void brake()
    {
        std::cout << "You pressed Brake!\n";
    }
    
};


int main()
{
    car car1;

    car1.owner = "John Wick";
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 1969;
    car1.color = "Black";

    std::cout << "Owner: " << car1.owner << std::endl;
    std::cout << "Brand: " << car1.make << std::endl;
    std::cout << "Model: " << car1.model << std::endl;
    std::cout << "Year: " << car1.year << std::endl;
    std::cout << "color: " << car1.color << std::endl;
    
    car1.acc();
    car1.brake();

    return 0;
}