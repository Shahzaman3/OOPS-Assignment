#include <iostream>
using namespace std;

class A
{
public:
      virtual ~A() { cout << "A\n"; }
};

class B : public A
{
public:
      ~B() { cout << "B\n"; }
};

int main()
{
      A *p = new B;
      delete p;
}
