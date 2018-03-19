#include <iostream>

using namespace std;

int main()

{
    int num, n, fact=1;

	cout<<"Enter a number : ";

	cin>>num;

	for(n=num; n>0; n--)

	{

		fact=fact*n;

	}

	cout<<"Factorial of "<<num<<" is "<<fact;

	return 0;

}




