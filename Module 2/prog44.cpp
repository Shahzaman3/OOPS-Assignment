#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter employee id: ";
        cin >> id;

        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}
