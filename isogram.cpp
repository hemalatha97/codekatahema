#include <iostream>

using namespace std;

int main()
{
   int k,j,count=0;

    cout<<"enter the string"<<endl;

    cin>>s;

    for(k=0;s[i]!=0;k++)

    {

        for(j=k+1;s[j]!=0;j++)

        {

            if(s[k]==s[j])

            {

            count++;

               }

        }

    }

        if(count==0)

        {

        cout<<"yes";

        }

        else

        {

           cout<<"no";

        }

        return 0;
}
