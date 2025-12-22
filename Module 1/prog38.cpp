#include <iostream>
using namespace std;

int  main()
{
      string str1, str2 = "";
      int length, i;
      cout << "Enter a string: ";
      getline(cin, str1);
      length = str1.length();

      for (i = 0; i < length; i++)
      {
            str2 = str2 + str1[i];
      }

      cout << "Copied string is: " << str2;

      return 0;
}