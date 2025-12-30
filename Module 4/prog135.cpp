#include <sstream>
#include <iostream>
using namespace std;

int main()
{
      string s = "10 20";
      stringstream ss(s);
      int a, b;
      ss >> a >> b;
      cout << a + b << "\n";
}
