#include <fstream>
using namespace std;

int main()
{
      ofstream f("file.txt");
      f << "Hello File\n";
      f.close();
}
