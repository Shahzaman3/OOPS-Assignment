#include <iostream>
using namespace std;

int main()
{
      int p, r, t;
      double si;
      cout << "Enter principal amount: ";
      cin >> p;
      cout << "Enter rate of interest: ";
      cin >> r;
      cout << "Enter time period: ";
      cin >> t;
      si = (p * r * t) / 100;
      cout << "The simple interest is: " << si;

      return 0;
}