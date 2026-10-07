#include <iostream>

class Faculty
{
    private:
    int Fcode;
    public:
    Faculty()
    {
        Fcode=205;
        std::cout << "Faculty code: " << Fcode << '\n';
    }
};

int main()
{
    Faculty obj;
    return 0;
}