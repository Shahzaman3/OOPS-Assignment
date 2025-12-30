#include <iostream>
using namespace std;

class Test
{
    int x;
public:
    void set(int x)
    {
        this->x = x;
    }
    void show()
    {
        cout << "Member x = " << x << "\n";
    }
};

int main()
{
    Test t;
    t.set(20);
    t.show();
    return 0;
}
