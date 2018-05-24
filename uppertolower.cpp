#include <iostream>
#include <string.h>
using namespace std;

int main()
{

  char str[20];
  int i;
  cout<<"Enter the String (Enter First Name) in uppercase : ";
  gets(str);
  for(i=0;i<=strlen(str);i++)
  {
	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
	    }
  }
  cout<<"\nThe String in Lowercase = "<<str;
  return 0;
}
