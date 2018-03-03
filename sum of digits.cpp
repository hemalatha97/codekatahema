#include <iostream>

using namespace std;

int main()
{
     int h,count=0,rem;  
  cout<<"Enter the number"<<endl;
  cin>>h;
  while(h!=0)
  {
  rem=h%10;
  count=count+rem;
  h=h/10;
  }
  cout<<"The sum is"<<count;
  return 0;
}
  




