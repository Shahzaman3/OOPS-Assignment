#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3;

    cout << "a = " << a << ", b = " << b << "\n";

    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "~a = " << (~a) << "\n";
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a >> 1 = " << (a >> 1) << "\n";

    return 0;
}
