#include <iostream>

using namespace std;

int main()
{
    int b,a[10],sum=0,i;
cout<<"enter value";
cin>>b;
for(i=0;i<b;i++)
{
    cin>>a[i];
}
for(i=0;i<b;i++)
{
sum=sum+a[i];
}
cout<<sum;
return 0;
}


