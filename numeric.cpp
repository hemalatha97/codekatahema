#include <iostream>

using namespace std;

int main()
{
    int a,temp; 
    string str;
    cout<<"enter the value";
    cin>>str;
    for(a=0;str[a]!='\0';a++)
    {
        temp=str[a];
        if(temp>='0' && temp<='9')
        {
            cout<<"Yes";
            break;
            
        }
        else
        {
            cout<<"No";
            break;
        }
    }
    return 0;
}




