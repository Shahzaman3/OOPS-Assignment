#include <iostream>
using namespace std;

class Test
{
    int x;
public:
    Test(int a)
    {
        x = a;
    }
    friend void show(Test);
};

void show(Test t)
{
    cout << "Value = " << t.x << "\n";
}

int main()
{
    Test t(10);
    show(t);
    return 0;
}
