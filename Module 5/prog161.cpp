#include <iostream>
using namespace std;

void f()
{
      throw 3;
}

int main()
{
      try
      {
            f();
      }
      catch (int)
      {
            cout << "Propagated\n";
      }
}
