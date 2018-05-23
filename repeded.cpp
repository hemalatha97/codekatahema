#include <iostream>

using namespace std;

int main() 
{
char k[50],m;
int i,j,count=0,max=0;
cout<<"enter the string"<<endl;
cin>>k;
for(i=0;k[i]!='\0';i++)
{
for(j=i+1;k[j]!='\0';j++)
if(k[i]==k[j])
{
count=count+1;
if(count>max)
{
max=count;
m=k[i];
}
}
}
cout<<"the repeted string is"<<" "<<m;
return 0;
}
