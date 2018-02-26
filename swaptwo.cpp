#include <iostream>

using namespace std;

int main()
{
    int i = 7, j = 19, temp;

    cout << "Before swapping." << endl;
    cout << "i = " << i << ", j = " << j << endl;

    temp = i;
    i = j;
    j = temp;

    cout << "\nAfter swapping." << endl;
    cout << "i = " << i<< ",j = " << j << endl;

    return 0;
}
