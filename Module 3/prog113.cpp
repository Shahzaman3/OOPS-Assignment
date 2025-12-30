#include <iostream>
using namespace std;

class Book
{
public:
      int id;
      void input() { cin >> id; }
      void show() { cout << id << "\n"; }
};

int main()
{
      Book b;
      b.input();
      b.show();
}
