int main()
{
	
	int num,i,count=0;
	cout<<"Enter a number:";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<" prime number";
	}
	else
	{
		cout<<" not a prime number";
	}
	return 0;
}
