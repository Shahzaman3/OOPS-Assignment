#include <iostream>
using namespace std;

class Poly
{
public:
    int c, p;
};

int main()
{
    Poly a = {3, 2};
    Poly b = {4, 2};

    cout << "Result = " << a.c + b.c << "x^" << a.p << "\n";
    return 0;
}
