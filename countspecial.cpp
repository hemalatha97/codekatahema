#include <iostream>

using namespace std;

int main() 
{
int special=0;
string j;
cout<<"enter the string"<<endl;
cin>>j;
  for (int i = 0; i < j.length(); i++)
  {
 if ((j[i] >= 'A' && j[i] <= 'Z')|| (j[i] >= 'a' && j[i] <= 'z')||(j[i]>= '0' && j[i]<= '9'))
 cout<<"";
 else
        special++;
  }
  cout<<special;
  return 0;
}
