#include <iostream>
using namespace std;

class Calculator
{
public:
    int a, b;

    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add()
    {
        cout << "Addition = " << a + b << "\n";
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << "\n";
    }
};

int main()
{
    Calculator c;

    c.input();
    c.add();
    c.subtract();

    return 0;
}
