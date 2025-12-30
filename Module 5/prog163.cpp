#include <iostream>
using namespace std;

int main()
{
      int x;
      try
      {
            cin >> x;
            if (x < 0)
                  throw x;
      }
      catch (int)
      {
            cout << "Invalid\n";
      }
}
