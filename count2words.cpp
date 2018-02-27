#include <iostream>

using namespace std;

int main()
{
    char a[100];
    int h,count=1;
    
    cout<<"Enter a string:";
    gets(a);
    
    for(h=0;a[h]!='\0';++i)
    {
        if(a[h]==' ')
            count++;
    }
    
    cout<<"\nThere are "<<count<<" words in the given string";
 
    return 0;
}    



