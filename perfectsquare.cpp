
#include <iostream>

using namespace std;

int main()
{
   int num, flag = 0;
 
   cout<<"Enter a number";
   cin>>num;
 
   for (int i = 1; i <= num; i++) {
  
                 
      if ( i * i == num) {
   
         flag = 1;
         break;
      }
  
        break;
   
      } 
   }
 
   if (flag) {
  
      cout<<" is a perfect square", num;
  
    } else {
  
      cout<<"  is not a perfect square", num;
    }

   return 0;
}

      



