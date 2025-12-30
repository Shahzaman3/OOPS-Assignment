#include <iostream>
using namespace std;

class Employee
{
      int pay;

public:
      void input() { cin >> pay; }
      void show() { cout << pay << "\n"; }
};

int main()
{
      Employee e;
      e.input();
      e.show();
}
