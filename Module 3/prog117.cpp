#include <iostream>
using namespace std;

class Engine
{
public:
      void start() { cout << "Engine\n"; }
};

class Car
{
      Engine e;

public:
      void run() { e.start(); }
};

int main()
{
      Car c;
      c.run();
}
