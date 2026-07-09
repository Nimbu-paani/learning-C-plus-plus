#include <iostream>

int main()
{
    double x = 5;
    double y = 4;
    double max;
    double min;

    max = std::max(x , y);
    min = std::min(x , y);

    std::cout << "Max=" << max << '\n' << "Min=" << min << '\n';

    return 0;
}