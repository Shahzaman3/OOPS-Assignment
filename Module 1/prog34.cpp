#include <iostream>
using namespace std;

int main()
{
      int a[5], rev[5], i;

      cout<<"Enter 5 elements: ";
      for(i=0;i<5;i++)
      {
          cin>>a[i];
      }
      for(i=0;i<5;i++)
      {
          rev[4-i]=a[i];
      }
      cout<<"Reversed array is: ";
      for(i=0;i<5;i++)
      {
          cout<<rev[i]<<" ";
      }
      return 0;
}