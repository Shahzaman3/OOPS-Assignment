#include <iostream>
using namespace std;

int main(){
      const double pi = 3.14159;
      double r, areaCir, areaTri;
      int l, b, areaRect, base, h;
      cout << "Enter the radius of the circle: ";
      cin >> r;
      areaCir = pi * r * r;
      cout << "The area of the circle is: " << areaCir << "\n";

      cout << "Enter length and breadth of rectangle: ";
      cin >> l >> b;
      areaRect = l * b;
      cout << "The area of the rectangle is: " << areaRect << "\n";

      cout << "Enter base and height: ";
      cin >> base >> h;
      areaTri = 0.5 * base * h;
      cout << "Area of triangle: " << areaTri << "\n";

      return 0;
}