#include <iostream>

class student
{
private:
    int roll;
    std::string name;

public:
    student(int r, std::string n)
    {
        roll = r;
        name = n;
    }
    student(const student &ref)
    {
        roll = ref.roll;
        name = ref.name;
    }
    void show()
    {
        std::cout << "Student Roll no: " << roll << '\n';
        std::cout << "Student Name: " << name << '\n';
    }
};
int main()
{
    student obj(21, "Rajan");
    student obj2 = obj;

    obj.show();
    obj2.show();
    return 0;
}