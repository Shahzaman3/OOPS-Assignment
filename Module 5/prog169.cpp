#include <iostream>
using namespace std;

int main()
{
      int bal = 1000, amt = 2000;
      try
      {
            if (amt > bal)
                  throw amt;
      }
      catch (int)
      {
            cout << "Insufficient balance\n";
      }
}
