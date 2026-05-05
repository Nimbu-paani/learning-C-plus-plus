#include <iostream>

int main()
{
    double x = 3;
    double y = 4;
    double z;
    double max;
    double min;

    max = std::max(x , y);
    min = std::min(x , y);

    std::cout << "Max=" << max << '\n' << "Min=" << min << '\n';

    return 0;
}