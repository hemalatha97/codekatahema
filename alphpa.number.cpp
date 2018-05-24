
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   char a[100];
    int count=0,j,h;
     cout<<"Enter the string";
  cin>>a;
  j=strlen(a);
  for(h=0;h<j;h++)
  {
     if((a[h]>='0'&&a[h]<='9')||(a[h]>='a'&&a[h]<='z')||(a[h]>='A'&&a[h]<='Z'))
      {
          count++;
      }
  }
 if(count==j)
 {
     cout<<"Yes"<<endl;
 }
 else
 {
     cout<<"No"<<endl;
 }
    
       return 0;
}
