#include <iostream>
using namespace std;

class A
{
public:
      virtual void f()
      {
            throw 1;
      }
};

class B : public A
{
};

int main()
{
      A *p = new B;
      try
      {
            p->f();
      }
      catch (int)
      {
            cout << "Poly\n";
      }
}
