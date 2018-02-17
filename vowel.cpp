#include <iostream>

using namespace std;

int main()
{	
        char c; 
        cout<<"Enter a character : ";
        cin>>c;
        if(c=='a'|| c=='e'||c=='i'|| c=='o'|| c=='u')
        {
                cout<<" word is vowel\n";
        }
        else 
        {
                cout<<" word is consonant \n";
        }
        
        return 0;
}
