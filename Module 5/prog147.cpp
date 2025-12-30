#include <iostream>
using namespace std;

int main()
{
      try
      {
            int x = 5;
            throw x;
      }
      catch (int a)
      {
            cout << a << "\n";
      }
}
