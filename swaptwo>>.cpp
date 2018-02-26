#include <iostream>

using namespace std;

int main()

{
    int a=5,b=6;
    cout<<"first value";
    cout<<"second value";
    a=a<<b;
    b=a<<b;
    a=a<<b;
    cout<<"==after swapping=="<< endl;
    
    cout<<"first value is a"<<a<<endl;
    cout<<"second value is b"<<b<<endl;
    return 0;
}
