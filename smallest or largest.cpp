#include <iostream>

using namespace std;

int main()
{
     int b,small,big,i;
      cout<<"Enter the number";
      cin>>b;
      int s[b];
     for(i=0;i<b;i++)
      {
          cin>>s[i];
      }
      small=s[0];
          for(i=0;i<b;i++)
          {
          if(small>s[i])
          {
              small=s[i];
          }
          }
          big=s[0];
          for(i=0;i<b;i++)
          {
          if(big<s[i])
          {
              big=s[i];
          }
         
      }
      cout<<"The smallest number:"<<small<<endl;
      cout<<"The biggest number:"<<big<<endl;
      return 0;
  }





