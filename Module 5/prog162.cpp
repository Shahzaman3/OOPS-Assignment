#include <fstream>
#include <iostream>
using namespace std;

int main()
{
      try
      {
            ifstream f("x.txt");
            if (!f)
                  throw 1;
      }
      catch (int)
      {
            cout << "File error\n";
      }
}
