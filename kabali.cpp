#include<iostream>

using namespace std;

int main()

{

   int kabal[50],opponent[20],j,dif;

  for(j=0;j<=2;j++)

   { 

       cout<<"enter two war battele num:";

       cin>>kabal[j]>>opponent[j];

   }

   for(j=0;j<=2;j++)

   {

    dif=kabal[j]-opponent[j];

   if(dif<0)

   {

   dif=-dif;

   }

   else

   {

       dif=dif;

   }

   cout<<dif<<'\n';

   }

   return 0;

}
