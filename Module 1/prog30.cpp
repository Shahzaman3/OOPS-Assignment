#include <iostream>
using namespace std;

int main()
{
    int i = 1;

start:
    cout << i << " ";
    i++;

    if (i <= 5)
        goto start;

    return 0;
}