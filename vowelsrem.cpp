#include <iostream>

using namespace std;

int main() 
{
char str[30];
int l,k;
cin>>str;
k=strlen(str);
for(l=0;l<k;l++)
{
if(str[l]=='a' || str[l]=='e' || str[l]=='i' || str[l]=='o' || str[l]=='u' || str[l]=='A' || str[l]=='E' || str[l]=='I' || str[l]=='O' || str[l]=='U')
{
str[l]='+';
}
}
for(l=k;l>=0;l--)
{
if(str[l]!='+')
{
cout<<str[l];
}
}
 return 0;
}
