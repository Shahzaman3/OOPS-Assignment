#include <iostream>
using namespace std;

class Test
{
public:
    Test(int x)
    {
        cout << "Value = " << x << "\n";
    }
};

int main()
{
    Test obj(10);
    return 0;
}
