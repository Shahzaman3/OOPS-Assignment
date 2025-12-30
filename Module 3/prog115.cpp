#include <iostream>
using namespace std;

class Bill
{
      int amt;

public:
      void input() { cin >> amt; }
      void show() { cout << amt << "\n"; }
};

int main()
{
      Bill b;
      b.input();
      b.show();
}
