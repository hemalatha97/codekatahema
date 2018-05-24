#include <iostream>

using namespace std;

int main()
{
int c,d,j,h;
	cin>>c,d;
	for(h=2;h<=c;h++)
	{
	 if(c%h==0 && d%h==0)
	{
	 j=h;
	}
	}
	cout<<j;
	return 0;
}
