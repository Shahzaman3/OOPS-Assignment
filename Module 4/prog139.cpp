#include <fstream>
#include <iostream>
using namespace std;

int main()
{
      ifstream f("stu.dat");
      int r;
      while (f >> r)
            if (r == 1)
                  cout << "Found\n";
}
