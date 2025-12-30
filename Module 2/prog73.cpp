#include <iostream>
using namespace std;

class Test
{
public:
    int x;
    Test(int a)
    {
        x = a;
    }
};

int main()
{
    const Test t(10);
    cout << t.x << "\n";
    return 0;
}
