#include <iostream>
#include<string>


using namespace std;
int main()
{

int e,f,c;
    char j;
    
        cout<<"Enter the number"<<endl;
        cin>>e>>j>>f;
        if(j=='/')
        {
            c=e/f;
            cout<<c;
        }
        else
        {
            c=e%f;
            cout<<c;
        }
        
    return 0;
}
