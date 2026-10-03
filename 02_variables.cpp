#include <iostream>

int main()
{
    //integer

    int x = 5;
    int y = 6;
    int sum = x+y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //float or double

    double marks = 7.8;
    std::cout << marks << '\n';

    //single chracter

    char grade = 'B';
    std::cout << grade << '\n';

    //boolen (True or False)

    bool student = true;
    bool forsale = false;

    std::cout << forsale << '\n';
    std::cout << student << '\n';

    //strings

    std::string name = "Nimbu";

    std::cout << "Hello " << name << '\n';


    return 0;
}