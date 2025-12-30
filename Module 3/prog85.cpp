#include <iostream>
using namespace std;

class A
{
public:
    void a() { cout << "A\n"; }
};
class B : public A
{
};
class C : public A
{
};
class D : public B, public C
{
};

int main()
{
    D obj;
    obj.B::a();
}
