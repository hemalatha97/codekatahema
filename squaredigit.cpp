#include <iostream>

using namespace std;

int main() 
{
int i,sum=0,square,rema;
cout<<"enter the number"<<endl;
cin>>i;
while(i!=0)
{
rema=i%10;
square=rema*rema;
sum=sum+square;
i=i/10;
}
cout<<"the sum square is"<<" "<<sum;
return 0;
}

