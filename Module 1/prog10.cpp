#include <iostream>
using namespace std;

int main(){
      int a = 2, b = 7, div;
      double res;
      div = b / a;
      res = (double)b / a;

      cout << "Normal Division (int): " << div << "\n";
      cout << "Typecasted Division (double): " << res;

      return 0;
}