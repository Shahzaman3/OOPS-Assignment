#include <iostream>
using namespace std;

int main()
{
      string u = "admin", p = "1234";
      string iu, ip;

      cin >> iu >> ip;

      try
      {
            if (iu != u || ip != p)
                  throw 1;
            cout << "Login success\n";
      }
      catch (int)
      {
            cout << "Login failed\n";
      }
}
