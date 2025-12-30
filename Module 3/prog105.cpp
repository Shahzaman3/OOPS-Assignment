#include <iostream>
using namespace std;

class A
{
public:
      virtual void show() { cout << "A\n"; }
};
class B : public A
{
public:
      void show() { cout << "B\n"; }
};

int main()
{
      A *p;
      B b;
      p = &b;
      p->show();
}
