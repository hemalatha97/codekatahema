 #include <iostream>

using namespace std;

int main()
{
   int c[10],k,i,count=0;
	cout<<"enter the size of array"<<endl;
	cout<<"enter the elements"<<endl;
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<k;i++)
	{
		
			if(c[i]==i)
			{
			cout<<c[i];	
			}
		
	}

	return 0;
}


