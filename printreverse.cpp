#include <iostream>

using namespace std;



 int main()
{
	int n,pro=0,mod;
   cin>>n;
   while(n!=0)
   {
       mod=n%10;
       pro=pro*10+mod;
       n=n/10;
   }
   cout<<pro;
   return 0;


}
