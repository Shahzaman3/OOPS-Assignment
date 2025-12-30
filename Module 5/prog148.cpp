#include <iostream>
using namespace std;

int main()
{
      try
      {
            throw string("Error");
      }
      catch (string s)
      {
            cout << s << "\n";
      }
}
