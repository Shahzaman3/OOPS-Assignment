#include <iostream>
using namespace std;

class Test
{
public:
      Test() { cout << "Create\n"; }
      ~Test() { cout << "Destroy\n"; }
};

int main() { Test t; }
