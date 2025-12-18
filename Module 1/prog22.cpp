//checking divisibility of a number

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is divisible by 2.\n";
    else
        cout << num << " is not divisible by 2.\n";

    if (num % 3 == 0)
        cout << num << " is divisible by 3.\n";
    else
        cout << num << " is not divisible by 3.\n";

    if (num % 5 == 0)
        cout << num << " is divisible by 5.\n";
    else
        cout << num << " is not divisible by 5.\n";

    return 0;
}