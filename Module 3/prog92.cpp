#include <iostream>
using namespace std;

class A
{
public:
      ~A() { cout << "A\n"; }
};
class B : public A
{
public:
      ~B() { cout << "B\n"; }
};

int main() { B obj; }
