#include <iostream>
using namespace std;

class Area
{
public:
    float r;

    void input()
    {
        cout << "Enter radius: ";
        cin >> r;
    }

    void calculate()
    {
        cout << "Area of circle = " << 3.14 * r * r << "\n";
    }
};

int main()
{
    Area obj;
    cout << "Enter radius: ";
    obj.input();
    obj.calculate();
    return 0;
}
