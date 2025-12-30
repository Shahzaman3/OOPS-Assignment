#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      double x = 12.34567;
      cout << setw(10) << fixed << setprecision(2) << x << "\n";
}
