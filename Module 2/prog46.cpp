#include <iostream>
using namespace std;

class Compare
{
public:
    int value;

    void input()
    {
        cout << "Enter value: ";
        cin >> value;
    }

    void check(Compare c)
    {
        if (value > c.value)
            cout << "First object is greater\n";
        else if (value < c.value)
            cout << "Second object is greater\n";
        else
            cout << "Both objects are equal\n";
    }
};

int main()
{
    Compare a, b;

    cout << "Enter value for first object: ";
    a.input();

    cout << "Enter value for second object: ";
    b.input();

    a.check(b);
    return 0;
}
