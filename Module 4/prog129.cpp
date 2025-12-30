#include <fstream>
#include <iostream>
using namespace std;

int main()
{
      ifstream f("file.txt");
      string w;
      int c = 0;
      while (f >> w)
            c++;
      cout << c << "\n";
}
