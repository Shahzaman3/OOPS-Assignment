#include <iostream>
using namespace std;

int main()
{
      int a = 10, b = 0;
      try
      {
            if (b == 0)
                  throw b;
            cout << a / b << "\n";
      }
      catch (int)
      {
            cout << "Divide by zero\n";
      }
}
