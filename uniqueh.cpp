
#include <iostream>

using namespace std;

int main()
{
   int n,a[10];
    int count=0,i,j;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
   
      

int temp =0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
               
            }
        }

    }
    
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cout<<a[i];
				count=count+1;
			}
		}
	}
		if(count==0)
		{
			cout<<"UNIQUE";
		}
    

    return 0;
}

