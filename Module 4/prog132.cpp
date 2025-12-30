#include <fstream>
using namespace std;

class Test
{
public:
      int x;
};

int main()
{
      Test t{10};
      ofstream f("obj.dat", ios::binary);
      f.write((char *)&t, sizeof(t));
      f.close();
}
