#include <fstream>
#include <iostream>
using namespace std;

int main()
{
      ifstream f("file.txt");
      cout << (f ? "Exists\n" : "Not Exists\n");
}
