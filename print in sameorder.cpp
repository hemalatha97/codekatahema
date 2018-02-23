#include <iostream>
using namespace std;

int main()
{
    {
    int base;
    int first;
    int second;
    int third;
    int fourth;
    int sum;

    cout << " Please enter a whole number." << endl;
    cin >> base ;

    first = base / 1000;
    second = base / 100 % 10;
    third =  base / 10 % 10;
    fourth = base % 10;
cout << first << " " << second << " " << third<<  " " << fourth <<  " " << endl;
    
    return 0;
}
}
