//algabraic expression solved here : (a + b)*2

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int result;

    cout << "Enter values of a, and b : ";
    cin >> a >> b;

    result = (a*a + b*b + 2*a*b);

    cout << "Result = " << result;

    return 0;
}