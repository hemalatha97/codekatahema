#include <iostream>

using namespace std;



 int main()
{
	
	 int i,h,c=0;
    cout<<"Enter a number";
    cin>>h;
    for (i=1;i<=h;i++)
    {
        if(h%i==0)
        c=c+1;
    }
    if (c==2)
    cout<<"The number is PRIME";
    else
    cout<<"The number is COMPOSITE";
    return 0;

}
