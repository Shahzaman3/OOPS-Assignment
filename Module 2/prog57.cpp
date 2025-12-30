#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A\n";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor of B\n";
    }
};

int main()
{
    B obj;
    return 0;
}
