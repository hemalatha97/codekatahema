#include <iostream>
using namespace std;
int main() 
{

	char str[50];
	int j,count=1;
	cout<<"enter sentence of lines:"<<endl;
	cin>>str; 
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]=='.')
		{
			count=count+1;

		}
	}
	cout<<count;
	return 0;

}
