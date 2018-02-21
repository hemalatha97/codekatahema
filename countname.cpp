#include <iostream>
using namespace std;


int main( )
{
	char str[80];
	
	cout << "Enter a string: ";
	cin>>str;
	
	int letter=0; 
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >='a'&& str[i]<='z') 
		{
			letter++;
		} 		
	}

	cout << "The number of letters = " <<  letter << endl;

	return 0;
}
