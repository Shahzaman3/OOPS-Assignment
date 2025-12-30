#include <iostream>
using namespace std;

class Test
{
    int x;
public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    Test t;
    t.set(10);
    cout << t.get() << "\n";
    return 0;
}
