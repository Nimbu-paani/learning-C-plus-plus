#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file;
    file.open("Data.txt");
    
    file << "Name = Nimbu\n";
    file << "Roll = 21\n";
    file << "Marks = 98%";
    
    file.close();
    std::cout<<"File Saved!\n";
    
    return 0;
}