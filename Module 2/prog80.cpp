#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Object created\n";
    }
    ~Test()
    {
        cout << "Object destroyed\n";
    }
};

int main()
{
    Test *t = new Test;
    delete t;
    return 0;
}
