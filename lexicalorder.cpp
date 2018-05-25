#include <iostream>
#include<string>


using namespace std;
int main()
{

string str[20],tem;
int h,k,j;
cout<<"enter the size of the array"<<endl;
cin>>h;
cout<<"enter the words"<<endl;
for(k=0;k<h;k++)
{
    cin>>str[k];
}
for(k=0;k<h-1;k++)
{
    for(j=k+1;j<h;j++)
    {
        if(str[k]>str[j])
        {
            tem=str[k];
            str[k]=str[j];
            str[j]=tem;
        }
    }
}
        cout<<"the lexical order is"<<endl;
                for(k=0;k<h;k++)
            {
                cout<<str[k]<<endl;
            }
        return 0;
}
