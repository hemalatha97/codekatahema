int main()
{
    int a,b,count;
    cout<<"enter the a and b value";
    cin>>a>>b;
    count=0;
    for(int i=a;a<=b;i++)
    {
          for(int j=2;i<=j;j++)
          {
              if(i%j==0)
              {
                  count++;
                  break;
              }
          }
          if(count==0)
          {
              cout<<i;
          }
    }
    return 0;
}
