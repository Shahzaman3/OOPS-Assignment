#include <iostream>
using namespace std;

int main()
{
      try
      {
            int *p = new int[1000000000];
      }
      catch (bad_alloc)
      {
            cout << "Memory failed\n";
      }
}
