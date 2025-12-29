#include <iostream>
using namespace std;

class Count
{
public:
    static int c;

    Count()
    {
        c++;
    }

    static void show()
    {
        cout << "Number of objects = " << c << "\n";
    }
};

int Count::c = 0;

int main()
{
    Count a, b, d;
    Count::show();
    return 0;
}
