#include <iostream>
using namespace std;

void fun() throw(int)
{
      throw 5;
}

int main()
{
      try
      {
            fun();
      }
      catch (int)
      {
            cout << "Specified\n";
      }
}
