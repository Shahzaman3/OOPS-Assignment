#include <fstream>
using namespace std;

int main()
{
      ifstream in("a.txt");
      ofstream out("b.txt");
      char ch;
      while (in.get(ch))
            out.put(ch);
}
