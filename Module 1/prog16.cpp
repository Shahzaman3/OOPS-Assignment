#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    cout << "Initial value of a = " << a << "\n";

    cout << "Post-increment a++ = " << a++ << "\n";
    cout << "Value of a after post-increment = " << a << "\n";
    cout << "Pre-increment ++a = " << ++a << "\n";

    cout << "Post-decrement a-- = " << a-- << "\n";
    cout << "Value of a after post-decrement = " << a << "\n";
    cout << "Pre-decrement --a = " << --a << "\n";

    return 0;
}
