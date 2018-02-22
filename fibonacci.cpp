#include <iostream>

using namespace std;

int main()
{
int j,no, first=0, second=1, next;

first=0;
second=1;
cout<<"Enter nubmer of terms for Series: ";
cin>>no;
cout<<"Fibonacci series are";
for(j=0; j<no; j++)
{
cout<<"\n"<<first;
next = first + second;
first = second;
second = next;
}
return 0;
}
    
  
