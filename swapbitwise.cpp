#include <iostream>

using namespace std;

int main(){
    
    int a=10;
    int b=20;
    
    cout << "First value is "<< a <<endl;
    cout << "Second value is "<< b <<endl;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout <<"== After Swapping ==" <<endl;
    cout << "First value is "<< a <<endl;
    cout << "Second value is "<< b <<endl;
	
    return 0;
    
}
