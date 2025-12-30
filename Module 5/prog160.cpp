#include <iostream>
using namespace std;

class Base
{
};
class Derived : public Base
{
};

int main()
{
      try
      {
            throw Derived();
      }
      catch (Base)
      {
            cout << "Base caught\n";
      }
}
