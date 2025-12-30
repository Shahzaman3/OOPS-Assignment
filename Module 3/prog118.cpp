#include <iostream>
using namespace std;

class Address
{
public:
    int pin;
    Address(int p){ pin=p; }
};

class Person
{
    Address *a;
public:
    Person(Address *x){ a=x; }
    void show(){ cout<<a->pin<<"\n"; }
};

int main(){ Address a(123); Person p(&a); p.show(); }
