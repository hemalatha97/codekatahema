#include <iostream>



using namespace std;







 int main()

{

	int k,pro=0,mod;

   cin>>k;

   while(k!=0)

   {

       mod=k%10;

       pro=pro*10+mod;

       k=k/10;

   }

   cout<<pro;

   return 0;





}
   
