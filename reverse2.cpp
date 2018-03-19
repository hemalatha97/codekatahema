#include <iostream>

using namespace std;

int main()

{
    
int h,pro=0,mod;
 cin>>h;
while(h!=0)
{

 mod=h%10;
pro=pro*10+mod;
h=h/10;
}
cout<<pro;
return 0;
}




