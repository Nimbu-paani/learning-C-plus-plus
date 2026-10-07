#include <iostream>

class Employee
{
    private:
    int EId;
    std::string EName;
    public:
    Employee(int i,std::string n)
    {
        EId=i;
        EName=n;

        std::cout << "Empolyee ID: " << EId << std::endl;
        std::cout << "Empolyee Name: " << EName << std::endl;
    }
};
int main()
{
    Employee e(259 , "Rajan");
    return 0;
}