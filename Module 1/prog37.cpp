#include <iostream>
using namespace std;

int main()
{
      int i = 0;
      string str;

      cout << "Enter a string: ";
      getline(cin, str);

      while (str[i] != '\0')
      {
            i++;
      }

      cout << "Length of the string is: " << i;

      return 0;
}