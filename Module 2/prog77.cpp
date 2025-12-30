#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *n1 = new Node;
    Node *n2 = new Node;

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = NULL;

    cout << n1->data << " " << n2->data << "\n";

    delete n1;
    delete n2;
    return 0;
}
