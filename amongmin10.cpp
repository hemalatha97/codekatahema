#include <iostream>

using namespace std;

int main()
{
  int h,i,min,a[100];

	cin>>h;

	for(i=0;i<h;i++)

	cin>>a[i];

	min=a[0];

	for(i=0;i<h;i++)

	{

		if(a[i]<min)

		{

			min=a[i];

		}

	}

	cout<<min;
	return 0;
}
