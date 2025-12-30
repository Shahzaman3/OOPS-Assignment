#include <iostream>
using namespace std;

class Test
{
    int x;
public:
    Test(int a)
    {
        x = a;
    }
    friend void compare(Test, Test);
};

void compare(Test a, Test b)
{
    if (a.x > b.x)
        cout << "First is greater\n";
    else
        cout << "Second is greater\n";
}

int main()
{
    Test a(10), b(20);
    compare(a, b);
    return 0;
}
