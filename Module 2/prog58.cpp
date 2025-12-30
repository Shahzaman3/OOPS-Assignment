#include <iostream>
using namespace std;

class Test
{
    int *p;

public:
    Test(int x)
    {
        p = new int;
        *p = x;
    }

    void display()
    {
        cout << "Value = " << *p << "\n";
    }

    ~Test()
    {
        delete p;
    }
};

int main()
{
    Test obj(25);
    obj.display();
    return 0;
}
