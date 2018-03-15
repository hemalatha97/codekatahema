#include <iostream>

using namespace std;

int main()
{
  int h,k,b[60],i,j=0;

    cout<<"value";

    cin>>h>>k;

    for(i=0;i<h;i++)

    {

        cin>>b[i];

    }

    for(i=0;i<h;i++)

    {

        if(b[i]==k)

        {

         j++;

        }

    }

    cout<<j;

    return 0;
}
