#include <iostream>

int main()
{
    using namespace std;

    double x = (int) 3.14;
    cout << x << '\n';

    cout << (char)64 << '\n';

    int correct = 8;
    int questions = 20;

    double score = correct/(double)questions*100;
    cout << score << "%" << '\n';

    return 0;
}