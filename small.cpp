#include <iostream>

using namespace std;

int main()
{
     int a, b, c,d,e;
 
    cout << "Enter five numbers \n";

   
    cin >> a >> b >> c>>d>>e;
 
   
    if (a < b && a < c) {
        cout << "Smallest number is " << a;

      
    } else if (b < a && b < c)  {
       cout << "Smallest number is " << b;

    } else {
      cout << "Smallest number is "<< c;

     }
 
      return 0;
}



