#include <iostream>
using namespace std;

class Arithmetic
{
public:
    int a, b;

    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void operations()
    {
        cout << "Addition = " << a + b << "\n";
        cout << "Subtraction = " << a - b << "\n";
        cout << "Multiplication = " << a * b << "\n";
        cout << "Division = " << a / b << "\n";
    }
};

int main()
{
    Arithmetic obj;
    obj.input();
    obj.operations();
    return 0;
}
