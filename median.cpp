#include <iostream>
using namespace std;

int main()
{
	int h[20];
	int n,temp;
	cout<<"enter  number of elements"<<endl;
	cin>>n;
	cout<<"enter  values"<<endl;
            for(int i=0;i<n;i++)
            {
            	cin>>h[i];
            }
            for(int i=0;i<n;i++)
            {
            	for(int j=0;j<n-1;j++)
            	{
            		if(h[j]>h[j+1])
            		{
            			temp=h[j];
            			h[j]=h[j+1];
            			h[j+1]=temp;
            		}
            	}
            }
          if(n%2==0)
{
cout<<h[(n-1)/2],h[n/2];
}
else
{
cout<<h[(n-1)/2];
}
return 0;
}
