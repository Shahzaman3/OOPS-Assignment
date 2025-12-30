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
    friend Test operator+(Test, Test);
    void show()
    {
        cout << "Value = " << x << "\n";
    }
};

Test operator+(Test a, Test b)
{
    return Test(a.x + b.x);
}

int main()
{
    Test a(5), b(10);
    Test c = a + b;
    c.show();
    return 0;
}
