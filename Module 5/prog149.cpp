#include <iostream>
using namespace std;

int main()
{
      try
      {
            throw 5.5;
      }
      catch (int)
      {
            cout << "Integer\n";
      }
      catch (double)
      {
            cout << "Double\n";
      }
}
