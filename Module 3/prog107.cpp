#include <iostream>
using namespace std;

class Shape
{
public:
      virtual float area() = 0;
};

class Rect : public Shape
{
      float l, b;

public:
      Rect(float x, float y)
      {
            l = x;
            b = y;
      }
      float area() { return l * b; }
};

int main()
{
      Rect r(2, 3);
      cout << r.area() << "\n";
}
