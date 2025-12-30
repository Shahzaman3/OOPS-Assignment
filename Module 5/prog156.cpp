#include <iostream>
using namespace std;

int main()
{
      try
      {
            try
            {
                  throw 1;
            }
            catch (int)
            {
                  throw;
            }
      }
      catch (int)
      {
            cout << "Nested\n";
      }
}
