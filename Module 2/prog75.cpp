#include <iostream>
using namespace std;

class Stack
{
    int s[10], top;
public:
    Stack()
    {
        top = -1;
    }
    void push(int x)
    {
        s[++top] = x;
    }
    void pop()
    {
        cout << "Popped = " << s[top--] << "\n";
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.pop();
    return 0;
}
