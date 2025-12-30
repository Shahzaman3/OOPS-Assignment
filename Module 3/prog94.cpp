#include <iostream>
using namespace std;

class Student
{
protected:
      int m1, m2;

public:
      void input() { cin >> m1 >> m2; }
};

class Result : public Student
{
public:
      void show() { cout << m1 + m2 << "\n"; }
};

int main()
{
      Result r;
      r.input();
      r.show();
}
