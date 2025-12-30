#include <iostream>
using namespace std;

int main()
{
      int a[5] = {1, 2, 3, 4, 5};
      try
      {
            int i = 7;
            if (i >= 5)
                  throw i;
            cout << a[i] << "\n";
      }
      catch (int)
      {
            cout << "Out of bound\n";
      }
}
