#include <iostream>

using namespace std;

int main()

{
    
int n,rem,odd=0,digit;

cout<< "  Enter an integer number: ";

cin>> n;

 cout<<"\n  The Odd digits are \n",n;

while(n>0){

digit = n % 10;

 n = n/ 10;

 rem = digit % 2;

if(rem != 0)

cout<<digit;

}
return 0; 
}




