#include<iostream>
using namespace std;
int main()
{
string h;
int count=0,m;
cout<<"enter the number"<<endl;
cin>>h;
for(m=0;m<h.size();m++)
{
    if(h[m]=='0'||h[m]=='1')
    {
          count=0;
    }
           else
        {
            count=1;
            break;
        }
}
        if(count!=0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
        return 0;
}     .
