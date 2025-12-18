//simple calculator using switch case

#include <iostream>
using namespace std;

int main()
{
    int a, b, ch;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch)
    {
        case 1:
            cout << "Result = " << a + b;
            break;
        case 2:
            cout << "Result = " << a - b;
            break;
        case 3:
            cout << "Result = " << a * b;
            break;
        case 4:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division not possible";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
