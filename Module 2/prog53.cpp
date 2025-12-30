#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Default constructor\n";
    }

    Test(int x)
    {
        cout << "Parameterized constructor: " << x << "\n";
    }
};

int main()
{
    Test a;
    Test b(20);
    return 0;
}
