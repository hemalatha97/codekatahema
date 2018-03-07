#include <iostream>

using namespace std;

int main()
{
    int i;
    int number=0;
string s;
cout<<"enter the string"<<endl;
cin>>s;
  for ( i = 0; i < s.length(); i++)
  {
  	if(s[i]>= '1' && s[i]<= '9')
  	
            number++;
  }
  cout<<number;
  return 0;
}


