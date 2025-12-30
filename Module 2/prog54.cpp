#include <iostream>
using namespace std;

class Test
{
public:
    int x;

    Test(int a)
    {
        x = a;
    }

    Test(Test &t)
    {
        x = t.x;
    }

    void display()
    {
        cout << "Value = " << x << "\n";
    }
};

int main()
{
    Test a(10);
    Test b(a);

    a.display();
    b.display();

    return 0;
}
