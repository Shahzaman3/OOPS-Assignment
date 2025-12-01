#include  <iostream>
using namespace std;

int main(){
      const double pi = 3.14159;
      double r, area;
      cout << "Enter the radius of the circle: ";
      cin >> r;
      area = pi * r * r;
      cout << "The area of the circle is: " << area;

      return 0;
}