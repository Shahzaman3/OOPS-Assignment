#include <iostream>
using namespace std;

class MyEx
{
};

int main()
{
      try
      {
            throw MyEx();
      }
      catch (MyEx)
      {
            cout << "User Exception\n";
      }
}
