#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,m,u=0,i=0;
    cout << "Enter the binary number ";
    cin >> n;

    while (n>0){
        m=n%10;
        u = u+(m*pow(2,i));
        i++;
        n=n/10;
    }
    cout << u;
    
    return 0;
}