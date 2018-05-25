#include <iostream>

using namespace std;

int main()
{
    int n,a[100];
    int i,flag=0;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
 for(i=1;i<n;i+=2)
 {
     if(a[i]%2==0)
   	{
   		cout<<"odd pos %d even num %d ",i,a[i];
   	   
    }
 
 } 
   for(i=0;i<n;i+=2)
   {
   	if(a[i]%2!=0)
   	{
   		cout<<"\neven pos %d odd num%d ",i,a[i];
   	   
    }
 
   }
 
 
    return 0;
}


