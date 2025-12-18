//to print n natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    do
    {
        cout << i << " ";
        i++;
    }
    while (i <= n);

    return 0;
}
