#include <iostream>

using namespace std;

int main()
{
     int k,prod=1,mod;

   cin>>k;

   while(k!=0)

   {

       mod=k%10;

       prod=prod*mod;

       k=k/10;

   }

   cout<<prod;

   return 0;
}



