#include <iostream>
#include <fstream>
int main()
{
    std::fstream file;

    file.open("Data.txt", std::ios::out);

    file << "Hello world\n";
    file.close();

    file.open("Data.txt", std::ios::in);
    std::string line;

    while (getline(file, line))
    {
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}