#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    float marks;

public:
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
    Student s;

    s.input();
    s.display();

    return 0;
}
