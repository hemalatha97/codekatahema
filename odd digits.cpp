#include <iostream>

using namespace std;

int main()

    
{

int num,rem,odd=0,digit;
cout<< "  Enter an integer number: ";

              cin>> num;

               cout<<"\n  The Odd digits are \n",num;

               while(num>0){

               digit = num % 10;

               num = num / 10;

               rem = digit % 2;

               if(rem != 0)

               cout<<digit;

               }

        return 0; 
}

    






