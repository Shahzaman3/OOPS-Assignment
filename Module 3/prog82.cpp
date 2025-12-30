#include <iostream>
using namespace std;

class A
{
public:
    void a() { cout << "A\n"; }
};
class B : public A
{
public:
    void b() { cout << "B\n"; }
};
class C : public B
{
public:
    void c() { cout << "C\n"; }
};

int main()
{
    C obj;
    obj.a();
    obj.b();
    obj.c();
}
