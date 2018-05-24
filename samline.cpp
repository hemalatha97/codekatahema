#include <iostream>

using namespace std;

int main()
{
	char c1[2],c2[2],c3[2];
	cin>>c1;
	cin>>c2;
	cin>>c3;
	if((c1[0]=c2[0]=c3[0])||(c1[1]=c2[1]=c3[1]))
	{
	cout<<"yes";
	}
	else if((c1[0]=c1[1])&&(c2[0]=c2[1])&&(c3[0]=c3[1]))
	{
	cout<<"yes";
	}
	else
	{
	cout<<"no";
	}
	return 0;
}
