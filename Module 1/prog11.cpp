#include <iostream>
using namespace std;

int main(){
      int a, b, sum, diff, prod, div, rem;

      cout << "Enter two integers: ";
      cin >> a >> b;

      sum = a + b;
      diff = a - b;
      prod = a * b;
      div = a / b;
      rem = a % b;

      cout << "Sum: " << sum << "\n";
      cout << "Difference: " << diff << "\n";
      cout << "Product: " << prod << "\n";
      cout << "Quotient: " << div << "\n";
      cout << "Remainder: " << rem << "\n";

      return 0;
}