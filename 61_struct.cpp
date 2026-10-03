#include <iostream>

struct student
{
    std::string name;
    double marks;
    bool enrolled = true;
};


int main()
{
    student student1;
    student1.name = "Rajan";
    student1.marks = 79.8;

    student student2;
    student2.name = "Nimbu";
    student2.marks = 55.9;

    std::cout << "********************" << std::endl;
    std::cout << student1.name << std::endl;
    std::cout << student1.marks << std::endl;
    std::cout << student1.enrolled << std::endl;

    std::cout << "********************" << std::endl;

    std::cout << student2.name << std::endl;
    std::cout << student2.marks << std::endl;
    std::cout << student2.enrolled << std::endl;
    std::cout << "********************" << std::endl;

    return 0;
}