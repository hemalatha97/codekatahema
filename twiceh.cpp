#include <iostream>

using namespace std;

int main()
{
   int i,n,j,count;
   cout<<"enter the number";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		if(count==1)
		cout<<a[i];
		
	}
	return 0;
}

