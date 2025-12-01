#include <iostream>
using namespace std;

int main()
{
      int n;

      cout << "Enter a number: ";
      cin >> n;

      if (n > 0)
      {
            cout << n << " is a positive number.";
      }
      else if (n < 0)
      {
            cout << n << " is a negative number.";
      }
      else
      {
            cout << "The number is zero.";
      }

      return 0;
}