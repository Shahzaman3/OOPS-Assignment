#include <fstream>
#include <iostream>
using namespace std;

int main()
{
      ifstream f("file.txt");
      string s;
      while (getline(f, s))
            cout << s << "\n";
}
