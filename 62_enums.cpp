#include <iostream>

enum Day {
    sunday=1,
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday
};
int main()
{
    Day today = friday;

    switch (today)
    {
    case sunday :
        std::cout << "Today is Sunday" << std::endl;
        break;
    case monday :
        std::cout << "Today is Monday" << std::endl;
        break;
    case tuesday :
        std::cout << "Today is Tuesday" << std::endl;
        break;
    case wednesday :
        std::cout << "Today is Wednesday" << std::endl;
        break;
    case thrusday :
        std::cout << "Today is Thrusday" << std::endl;
        break;
    case friday :
        std::cout << "Today is Friday" << std::endl;
        break;
    case saturday :
        std::cout << "Today is Saturday" << std::endl;
        break;
    
    }

    return 0;
}