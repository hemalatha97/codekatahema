#include<iostream>
using namespace std;
int main()
{
	int b[20];
	int m,temp;
	cout<<"enter the number of elements"<<endl;
	cin>>m;
	cout<<"enter the values"<<endl;
            for(int i=0;i<m;i++)
            {
            	cin>>b[i];
            }
            for(int i=0;i<m;i++)
            {
            	for(int j=0;j<m-1;j++)
            	{
            		if(b[j]>b[j+1])
            		{
            			temp=b[j];
            			b[j]=b[j+1];
            			b[j+1]=temp;
            		}
            	}
            }
            cout<<"the sorted array is"<<endl;
            for(int i=0;i<m;i++)
            {
            	cout<<b[i];
            }
            return 0;
}
 
