#include <iostream>
using namespace std;

class A
{
public:
    void showA() { cout << "Class A\n"; }
};

class B : public A
{
public:
    void showB() { cout << "Class B\n"; }
};

int main()
{
    B obj;
    obj.showA();
    obj.showB();
}
