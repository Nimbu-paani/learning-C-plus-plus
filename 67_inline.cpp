#include <iostream>

inline int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a=10 , b=25;
    
    std::cout << add(a,b) << '\n';
    std::cout << add(10,25) << '\n';
    std::cout << add(110,255) << '\n';
    std::cout << add(130,259) << '\n';
    std::cout << add(310,2995) << '\n';
    std::cout << add(1780,2655) << '\n';
    return 0;
}