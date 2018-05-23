#include <iostream>

using namespace std;

int main()
{
char c[10];
cout<<"enter  day"<<endl;
cin>>c;
if(c[0]=='S'||c[0]=='s')
{
cout<<c<<" "<<"is a holiday"<<endl;
}
else
{
cout<<c<<" "<<"is a not holiday"<<endl;   
}
return 0;
}
