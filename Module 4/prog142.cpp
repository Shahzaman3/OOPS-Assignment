#include <fstream>
using namespace std;

int main()
{
      ifstream a("a.txt"), b("b.txt");
      ofstream c("c.txt");
      char ch;
      while (a.get(ch))
            c.put(ch);
      while (b.get(ch))
            c.put(ch);
}
