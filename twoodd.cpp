#include <iostream>

using namespace std;

int main()
{
int h;

    cout << "Enter an integer: ";
    cin >> h;

    if ( h % 2 == 0)
        cout << h<< " is even.";
    else
        cout << h<< " is odd.";

    return 0;
}


