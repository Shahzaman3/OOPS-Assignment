#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter name: ";
    cin.ignore();
    cin.getline(s.name, 50);

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.roll << "\n";
    cout << "Name: " << s.name << "\n";
    cout << "Marks: " << s.marks << "\n";

    return 0;
}
