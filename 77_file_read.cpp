#include <iostream>
#include <fstream>

int main()
{
    std::ifstream file;
    file.open("Data.txt");
    std::string line;

    while (getline(file, line))
    {
        std::cout << line << std::endl;
    }
    file.close();

    return 0;
}