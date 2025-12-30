#include <iostream>
using namespace std;

int main()
{
      try
      {
            try
            {
                  throw 5;
            }
            catch (int)
            {
                  throw;
            }
      }
      catch (int)
      {
            cout << "Rethrown\n";
      }
}
