#include <iostream>
using namespace std;

class Test
{
public:
    static void show()
    {
        cout << "Static function\n";
    }
};

int main()
{
    Test::show();
    return 0;
}
