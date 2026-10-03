#include <iostream>

class Stove
{
private:
    int temp = 0;

public:
    int getTemp()
    {
        return temp;
    }

    void setTemp(int temp)
    {
        if (temp <= 0)
        {
            this->temp = 0;
        }
        else if (temp >= 100)
        {
            this->temp = 100;
        }
        else
        {
            this->temp = temp;
        }
    }
};

int main()
{
    Stove stove;

    int temp;

    std::cout << "Enter temprature of Stove: ";
    std::cin >> temp;

    stove.setTemp(temp);

    std::cout << "Temprature set to " << stove.getTemp() << "!" << '\n';
    return 0;
}