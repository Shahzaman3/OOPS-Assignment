#include <iostream>
using namespace std;

int main(){
      double c, f;
      cout << "Enter temp. in Celsius: ";
      cin >> c;
      f = (c * 9.0 / 5.0) + 32.0;
      cout << "Temp. in Fahrenheit: " << f;

      return 0;
}