#include <fstream>
using namespace std;

int main()
{
      int x = 5;
      ofstream f("bin.dat", ios::binary);
      f.write((char *)&x, sizeof(x));
}
