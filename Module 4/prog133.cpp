#include <fstream>
using namespace std;

class Student
{
public:
      int roll;
};

int main()
{
      Student s{1};
      ofstream f("stu.dat");
      f << s.roll << "\n";
}
