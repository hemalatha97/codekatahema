#include <iostream>
using namespace std;
 int  main()
  {
   int b,p,i,pow=1;
  cout<<"Enter base and power: ";
   cin>>b>>p;
   for(i=p;i>0;i--)
   {
   pow=pow*b;
   }
   cout<<"power is: "<<pow;
return 0;
  }
