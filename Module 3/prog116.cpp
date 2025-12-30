#include <iostream>
using namespace std;

class Product
{
      int qty;

public:
      void input() { cin >> qty; }
      void show() { cout << qty << "\n"; }
};

int main()
{
      Product p;
      p.input();
      p.show();
}
