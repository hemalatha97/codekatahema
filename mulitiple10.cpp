#include <iostream>

using namespace std;

int main()
{
    int j;
	cin>>j;
	while(j!=0)
	{
		if(j%10==0)
		{
			cout<<j;
			break;
		}
		j++;
	}
	return 0;
}

