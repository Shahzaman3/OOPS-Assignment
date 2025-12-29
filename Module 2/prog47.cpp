#include <iostream>
using namespace std;

class Largest
{
public:
    int a, b;

    void input()
    {
      cout << "Enter two numbers: ";
      cin >> a >> b;
    }

    void compare()
    {
        if (a > b)
            cout << "Largest number = " << a << "\n";
        else
            cout << "Largest number = " << b << "\n";
    }
};

int main()
{
    Largest obj;
    cout << "Enter two numbers: ";
    obj.input();
    obj.compare();
    return 0;
}
