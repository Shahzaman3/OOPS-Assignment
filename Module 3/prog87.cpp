#include <iostream>
using namespace std;

class A
{
protected:
    int x = 10;
};

class B : protected A
{
public:
    void show() { cout << x << "\n"; }
};

int main()
{
    B obj;
    obj.show();
}
