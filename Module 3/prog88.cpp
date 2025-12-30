#include <iostream>
using namespace std;

class A
{
public:
    int x = 5;
};

class B : public A
{
public:
    void show() { cout << x << "\n"; }
};

int main()
{
    B obj;
    obj.show();
}
