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

    std::cout << "Name: " << first.name << '\n';
    std::cout << "Age: " << first.age << '\n';
    std::cout << "Marks: " << first.marks << '\n';
    return 0;
}