#include <iostream>

using namespace std;

int main()
{	
    
        char ch; 
        cout<<"Enter a character : ";
        cin>>ch;
        if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
        {
                cout<<" it is an alphabet\n";
        }
        else 
        {
                cout<<"its not an alphabet \n";
        }
        
        return 0;
}

