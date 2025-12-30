#include <iostream>
using namespace std;

class Test
{
    const int x;

public:
    Test(int a) : x(a)
    {
        cout << "Value = " << x << "\n";
    }
};

int main()
{
    Test obj(15);
    return 0;
}
