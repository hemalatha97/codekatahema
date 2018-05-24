#include<iostream>
using namespace std;
int main()
{
int k,j,l,tem,a[100];

cout<<"Enter the number";
cin>>l;
for(k=0;k<l;k++)
{
cin>>a[k];
}
for(k=0;k<l;k++)
{
for(j=k+1;j<l;j++)
{
if(a[k]>a[j])
{
tem=a[k];
a[k]=a[j];
a[j]=tem;
}
}
}
cout<<"The sorted array is\n";
for(k=0;k<l;k++)
{
cout<<a[k];
}
}
