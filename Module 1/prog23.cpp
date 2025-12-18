//checking nature of the number

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0)
    {
        if (num == 0)
            cout << "Number is zero";
        else
            cout << "Number is positive";
    }
    else
        cout << "Number is negative";

    return 0;
}
