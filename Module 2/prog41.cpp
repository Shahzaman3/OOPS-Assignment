#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    float marks;

    void input()
    {
        cout << "Enter roll number and marks: ";
        cin >> roll >> marks;
    }

    void display()
    {
        cout << "Roll Number: " << roll << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    cout << "\nStudent 1 Details\n";
    s1.display();

    cout << "\nStudent 2 Details\n";
    s2.display();

    return 0;
}
