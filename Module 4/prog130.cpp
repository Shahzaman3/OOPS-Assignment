#include <fstream>
using namespace std;

int main()
{
      ofstream f("file.txt", ios::app);
      f << "Appended\n";
}
