#include <iostream>
using namespace std;

class Employee
{
protected:
      int salary;

public:
      void input() { cin >> salary; }
};

class Payroll : public Employee
{
public:
      void show() { cout << salary << "\n"; }
};

int main()
{
      Payroll p;
      p.input();
      p.show();
}
