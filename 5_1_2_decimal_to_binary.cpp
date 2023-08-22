#include <iostream>
using namespace std;

int main()
{
    int n,m,i=0,j=0,q,u=0,arr[20];
    cout << "Enter the decimal number ";
    cin >> n;
    q=n;

    while (n>0)
    {
        m=n%2;
        arr[i]=m;
        i++;
        n=n/2;
    }

    while (q>0)
    {
        cout << arr[i-1];
        i--;
        q=q/2;
    }

    return 0;
}