#include <iostream>
using namespace std;

class Cart
{
      int total;

public:
      Cart() { total = 0; }
      void add(int p) { total += p; }
      void show() { cout << total << "\n"; }
};

int main()
{
      Cart c;
      c.add(100);
      c.show();
}
