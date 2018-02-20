#include<iostream>
using namespace std;
int main()
{
    int j,l;
    int arr[100];
    cout << "Enter number of elements "<<endl;
    cin >> l;
    for(j = 0; j < l; ++j)
    {
       cout << "Enter Number"<<endl;
       cin >> arr[j];
    }
    for(j = 1;j < l; ++j)
    {
       if(arr[0] > arr[j])
           arr[0] = arr[j];
    }
    cout << "minimum element = " << arr[0];

    return 0;
}
