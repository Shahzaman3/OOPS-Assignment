#include <iostream>
using namespace std;

class Test
{
public:
    static int x;

    static void display()
    {
        cout << "Value of static member = " << x << "\n";
    }
};

int Test::x = 100;

int main()
{
    Test::display();
    return 0;
}
