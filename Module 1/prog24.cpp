#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A";
    else if (marks >= 75 && marks < 90)
        cout << "Grade: B";
    else if (marks >= 60 && marks < 75)
        cout << "Grade: C";
    else if (marks >= 40 && marks < 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
