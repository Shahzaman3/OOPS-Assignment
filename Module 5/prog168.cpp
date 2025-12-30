#include <iostream>
using namespace std;

class StackEx
{
};

int main()
{
      try
      {
            throw StackEx();
      }
      catch (StackEx)
      {
            cout << "Stack error\n";
      }
}
