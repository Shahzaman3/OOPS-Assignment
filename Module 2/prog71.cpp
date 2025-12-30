#include <iostream>
using namespace std;

class Test
{
public:
    static int x;
};

int Test::x = 50;

int main()
{
    cout << Test::x << "\n";
    return 0;
}
