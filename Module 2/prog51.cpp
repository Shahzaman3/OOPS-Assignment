#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Default constructor called\n";
    }
};

int main()
{
    Test obj;
    return 0;
}
