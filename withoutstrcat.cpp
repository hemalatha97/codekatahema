#include <iostream>
using namespace std;

int main()
{
char first[100],second[100];
int i=0,j=0;

cout<<"Enter first string:- ";
cin>>first;
cout<<"Enter second string:- ";
cin>>second;

while(first[i]!='\0')
{
 i++;
}
while(second[j]!='\0')
{
 first[i]=second[j];
 i++;
 j++;
}
cout<<first;
return 0;
}
