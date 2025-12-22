#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;

    p = &a;

    cout << "Value of a = " << a << "\n";
    cout << "Address of a = " << &a << "\n";
    cout << "Value stored in p = " << p << "\n";
    cout << "Value pointed by p = " << *p << "\n";

    return 0;
}
