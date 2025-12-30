#include <iostream>
using namespace std;

class Queue
{
    int q[10], f, r;
public:
    Queue()
    {
        f = r = -1;
    }
    void insert(int x)
    {
        q[++r] = x;
    }
    void remove()
    {
        cout << "Removed = " << q[++f] << "\n";
    }
};

int main()
{
    Queue q;
    q.insert(5);
    q.insert(10);
    q.remove();
    return 0;
}
