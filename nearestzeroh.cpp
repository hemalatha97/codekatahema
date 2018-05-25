#include <iostream>

using namespace std;

int main()
{
    int a[100],i,j,k=0,n=0,y=0,g=0,count=0;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        k=a[i];
        for(j=0;j<n;j++)
        {
            y=a[j];
            g=k+y;
            if(g==0)
            {
                cout<<a[i],a[j];
                cout<<"\n";
                count++;
            }
        }
        if(count==1)
        {
            break;
        }
    }
    return 0;
}
