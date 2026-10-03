#include <iostream>

int main()
{
    using namespace std;
    
    //addition

    int students = 10;
    cout << students << '\n';
    
    students = students + 1;
    cout << students << '\n';
    
    students+=1;
    cout << students << '\n';

    students++;
    cout << students << '\n';

    //subtraction
    cout << students << '\n';

    students = students - 1;
    cout << students << '\n';

    students-=1;
    cout << students << '\n';

    students--;
    cout << students << '\n';

    //multiplication
    cout << students << '\n';

    students = students * 2;
    cout << students << '\n';

    students*=2;
    cout << students << '\n';

    //Division
    cout << students << '\n';

    students = students/2;
    cout << students << '\n';

    students/=2;
    cout << students << '\n';
    
    return 0;
}