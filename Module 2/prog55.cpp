#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor with no arguments\n";
    }

    Test(int x)
    {
        cout << "Constructor with one argument: " << x << "\n";
    }

    Test(int x, int y)
    {
        cout << "Constructor with two arguments: " << x + y << "\n";
    }
};

int main()
{
    Test a;
    Test b(5);
    Test c(5, 10);
    return 0;
}
