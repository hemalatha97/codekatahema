#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	
char h[100];
  int i,f,count=0;
  cout<<"enter the string";
  cin>>h;
  for(i=0;h[i]!=0;i++)
  {
    count++;
  }
f=count/2;
   if(count%2!=0)
  {
    h[f]='*';
    for(i=0;h[i]!='\0';i++)
    {
    cout<<h[i];
    }
    }
    else
    {
      h[f-1]='*';
        for(i=0;h[i]!='\0';i++)
      {
        cout<<h[i];
      }
    }
    return 0;
}
