#include <iostream>
using namespace std;

int main(){
      int a, b, c;

      cout << "Enter three integers: ";
      cin >> a >> b >> c;

      if(a >= b && a >= c){
            cout << "The largest number is: " << a << "\n";
      }
      else if(b >= a && b >= c){
            cout << "The largest number is: " << b << "\n";
      }
      else{
            cout << "The largest number is: " << c << "\n";
      }

      return 0;
}