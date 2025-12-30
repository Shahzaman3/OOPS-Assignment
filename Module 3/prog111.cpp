#include <iostream>
using namespace std;

class Bank
{
      int bal;

public:
      Bank() { bal = 0; }
      void deposit(int a) { bal += a; }
      void show() { cout << bal << "\n"; }
};

int main()
{
      Bank b;
      b.deposit(500);
      b.show();
}
