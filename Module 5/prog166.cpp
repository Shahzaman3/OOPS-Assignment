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
public:
      void f()
      {
            throw 2;
      }
};

int main()
{
      A *p = new B;
      try
      {
            p->f();
      }
      catch (int x)
      {
            cout << x << "\n";
      }
}
