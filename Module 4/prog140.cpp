#include <fstream>
using namespace std;

int main()
{
      fstream f("stu.dat", ios::in | ios::out);
      f.seekp(0);
      f << 99;
}
