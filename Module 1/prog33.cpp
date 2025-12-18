#include <iostream>
using namespace std;

int main()
{
      int a[5], i, j;

      cout<<"Enter 5 elements: ";
      for(i=0;i<5;i++)
      {
          cin>>a[i];
      }
      for(i=0;i<5;i++)
      {
          for(j=i+1;j<5;j++)
          {
              if(a[i]>a[j])
              {
                  int temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
              }
          }
      }
      cout<<"Second Largest element is: "<<a[3];
      
      return 0;
}