#include <fstream>
#include <iostream>
using namespace std;

struct Data
{
      int x;
};

int main()
{
      Data d{10};
      ofstream f("d.dat", ios::binary);
      f.write((char *)&d, sizeof(d));
      f.close();

      Data r;
      ifstream g("d.dat", ios::binary);
      g.read((char *)&r, sizeof(r));
      cout << r.x << "\n";
}
