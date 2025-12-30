#include <iostream>
using namespace std;

class Student
{
      int m;

public:
      void input() { cin >> m; }
      void show() { cout << m << "\n"; }
};

int main()
{
      Student s;
      s.input();
      s.show();
}
