#include <iostream>
using namespace std;

class A
{
public:
    void show() { cout << "Base\n"; }
};
class B : public A
{
};
class C : public A
{
};

int main()
{
    B b;
    C c;
    b.show();
    c.show();
}
