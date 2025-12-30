#include <iostream>
using namespace std;

class Test
{
public:
    int x;
    Test(int a){ x=a; }
    Test operator+(Test t){ return Test(x+t.x); }
};

int main()
{
    Test a(5), b(10);
    Test c=a+b;
    cout<<c.x<<"\n";
}
