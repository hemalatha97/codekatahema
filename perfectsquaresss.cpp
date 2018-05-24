#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	
	 int a, n;
    cout<<"Enter a number";
    cin>>n;
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
