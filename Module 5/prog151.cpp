#include <iostream>
using namespace std;

void fun()
{
      throw 10;
}

int main()
{
      try
      {
            fun();
      }
      catch (int)
      {
            cout << "Handled\n";
      }
}
