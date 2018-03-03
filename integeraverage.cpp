#include <iostream>

using namespace std;

int main()
{
     int j,c,i,sum=0,avg;
      cout<<"Enter the number"<<endl;
      cin>>j;
      int a[j];
      for(i=0;i<j;i++)
      {
          cin>>a[i];
          sum=sum+a[i];
      }
      avg=sum/j;
      cout<<avg;
  return 0;    
  }





