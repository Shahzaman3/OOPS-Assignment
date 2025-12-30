#include <iostream>
using namespace std;

class A;
class B;

void display(A, B);

class A
{
    int x;
public:
    A(int a)
    {
        x = a;
    }
    friend void display(A, B);
};

class B
{
    int y;
public:
    B(int b)
    {
        y = b;
    }
    friend void display(A, B);
};

void display(A a, B b)
{
    cout << "Sum = " << a.x + b.y << "\n";
}

int main()
{
    A a(10);
    B b(20);
    display(a, b);
    return 0;
}
