#include <iostream>

class student{
    public:
        std::string name;
        int age;
        double marks;

    student(std::string x, int y, double z)
    {
        name = x;
        age = y;
        marks = z;
    }
};

int main()
{
    student first("Rajan" , 24 , 75.8);
    student second("Nimbu" , 24 , 64.8);

    std::cout << "************" << std::endl;
    std::cout << "Name: " << first.name << '\n';
    std::cout << "Age: " << first.age << '\n';
    std::cout << "Marks: " << first.marks << '\n';

    std::cout << "************" << std::endl;

    std::cout << "Name: " << second.name << '\n';
    std::cout << "Age: " << second.age << '\n';
    std::cout << "Marks: " << second.marks << '\n';
    std::cout << "************" << std::endl;

    return 0;
}