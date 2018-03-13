int main() 

{

	char b[100];

    int n,i;

    gets(b);

    b[0]=b[0]-32;

    for(i=0;i<10;i++)

    {

      if(b[i]==' ')

      {

       b[i+1]=b[i+1]-32;

      }

    }
cout<<b;

return 0;

}
