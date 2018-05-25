#include <iostream>

using namespace std;

int main()
{
   int b[20],a1[20],n,i,j,count=0,tem;
	cout<<"enter the elements"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(i!=j)
			{
			if(b[i]==b[j])
			{
				a1[count]=b[i];
				count++;
			}
		}
	}
	}
	
if(count==1)
	cout<<a1[0];
	


	return 0;
}

