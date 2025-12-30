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
    void show() const
    {
        cout << x << "\n";
    }
};

int main()
{
    Test t(20);
    t.show();
    return 0;
}
