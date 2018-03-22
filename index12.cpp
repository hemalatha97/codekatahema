#include<iostream>

using namespace std;

int main()

{

   
int c,j,a[10];

	cout<<"ENTER THE TOTAL NO.OF.ELEMENTS:"<<endl;

	cin>>c;

	cout<<"ENTER THE ELEMENTS:"<<endl;

	for(j=0;j<c;j++)

	{

		cin>>a[j];

	}

	cout<<" THE ELEMENTS WITH ITS INDEX POSITION ARE:"<<endl;

	for(j=0;j<c;j++)

	{

		cout<<a[j]<<j;

	}

    

    return 0;
}
