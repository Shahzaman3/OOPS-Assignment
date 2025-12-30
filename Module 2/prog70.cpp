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
    friend void swap(Test &, Test &);
    void show()
    {
        cout << x << " ";
    }
};

void swap(Test &a, Test &b)
{
    int t = a.x;
    a.x = b.x;
    b.x = t;
}

int main()
{
    Test a(10), b(20);
    swap(a, b);
    a.show();
    b.show();
    return 0;
}
