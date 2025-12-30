#include <fstream>
using namespace std;

int main()
{
      ifstream f("a.txt");
      ofstream x("x.txt"), y("y.txt");
      char ch;
      int c = 0;
      while (f.get(ch))
            (c++ % 2 ? x : y).put(ch);
}
