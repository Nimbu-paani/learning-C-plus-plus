#include <iostream>

class momentum
{
public:
    momentum(){
        std::cout << "Memory Allocated\n";
    }
    ~momentum(){
        std::cout << "Memory Deallocated\n";
    }
};

int main()
{
    momentum obj;
    return 0;
}