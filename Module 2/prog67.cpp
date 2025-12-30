#include <iostream>
using namespace std;

class Complex
{
    int r, i;
public:
    Complex(int a, int b)
    {
        r = a;
        i = b;
    }
    friend Complex add(Complex, Complex);
    void show()
    {
        cout << r << " + " << i << "i\n";
    }
};

Complex add(Complex a, Complex b)
{
    return Complex(a.r + b.r, a.i + b.i);
}

int main()
{
    Complex a(2, 3), b(4, 5);
    Complex c = add(a, b);
    c.show();
    return 0;
}
