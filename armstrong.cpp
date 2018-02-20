#include<iostream>
using namespace std;
int main()
{
int arm=0,a,b,c,d,no; 
cout<<"Enter a number: ";
 cin>>no;
d=no;
while(no>0)
{
a=no%10;
no=no/10;
arm=arm+a*a*a;
}
if(arm==d)
{
cout<<"Armstrong";
}
else
{
cout<<"not Armstrong";
}
return 0;
}
