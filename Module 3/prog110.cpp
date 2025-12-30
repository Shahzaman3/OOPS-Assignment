#include <iostream>
using namespace std;

class A
{
public:
      virtual void show() { cout << "Base\n"; }
};
class B : public A
{
public:
      void show() { cout << "Derived\n"; }
};

int main()
{
      A *p = new B;
      p->show();
}
