#include <iostream>

using namespace std;

int main()
{
    int h,i,sum=0,k,a[90];

	cout<<"Enter array"<<endl;

	cin>>h;

	cout<<"Enter the k value"<<endl;

	cin>>k;

	for(i=1;i<=h;i++)

	{

		cin>>a[i];

	}

	for(i=1;i<=k;i++)

	{

		sum=sum+i;

	}

	cout<<sum;

	return 0;
}
