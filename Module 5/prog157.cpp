#include <iostream>
using namespace std;

class Test
{
public:
      Test()
      {
            throw 1;
      }
};

int main()
{
      try
      {
            Test t;
      }
      catch (int)
      {
            cout << "Constructor error\n";
      }
}
