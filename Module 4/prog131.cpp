#include <fstream>
using namespace std;

int main()
{
      ofstream f;
      f.open("file.txt", ios::out | ios::app);
      f << "Mode Test\n";
      f.close();
}
