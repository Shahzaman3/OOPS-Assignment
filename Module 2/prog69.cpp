#include <iostream>
using namespace std;

class B;

class A
{
    int x;
public:
    A()
    {
        x = 10;
    }
    friend class B;
};

class B
{
public:
    void show(A a)
    {
        cout << "Value = " << a.x << "\n";
    }
};

int main()
{
    A a;
    B b;
    b.show(a);
    return 0;
}
