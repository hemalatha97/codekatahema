#include<iostream>

using namespace std;

int main()

{

   

char s[20],s1[20],s2[20],j=0,k=0;

int i=0;

cout<<"\nEnter a sring";
cin>>s;

while(s[i]!='\0')

{

if(i%2==0)

{

s1[j]=s[i];

j++;

}

else

{

s2[k]=s[i];

k++;

}

i++;

}

cout<<s1;

cout<<s2;

}

}
