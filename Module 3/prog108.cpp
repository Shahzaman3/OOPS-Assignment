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
      A *arr[2];
      A a;
      B b;
      arr[0] = &a;
      arr[1] = &b;
      arr[0]->show();
      arr[1]->show();
}
