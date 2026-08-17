#include <iostream>

class Animal
{
public:
    bool alive = true;

    void eat()
    {
        std::cout << "This animal can eat!" << '\n';
    }
};
class dog : public Animal
{
public:
    void bark()
    {
        std::cout << "This animal can bark!" << '\n';
    }
};
class cat : public Animal
{
public:
    void meow()
    {
        std::cout << "This animal can meow!" << '\n';
    }
};

int main()
{
    dog dog;
    cat cat;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << "**********\n";
    
    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();
    
    return 0;
}