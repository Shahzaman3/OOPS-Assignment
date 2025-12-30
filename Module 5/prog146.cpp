#include <iostream>
using namespace std;

int main()
{
      try
      {
            throw 10;
      }
      catch (int x)
      {
            cout << x << "\n";
      }
}
