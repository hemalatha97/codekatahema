int hr[2],mins[2],i,n,hour,diff,res[2];

	for(i=0;i<2;i++)

	{

	    cin>>hr[i]>>mins[i];

	}

	for(i=0;i<2;i++)

	{

	    res[i]=(hr[i]*60)+mins[i];

	}

	if(res[0]>res[1])

	{

	    diff=res[0]-res[1];

	}

	else

	{

	    diff=res[1]-res[0];

	}

	hour=diff/60;

	n=diff%60;

	cout<<hour<<" "<<n;

    

    return 0;
