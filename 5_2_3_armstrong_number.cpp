#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,armstrong=0,realNumber;
    cout << "Enter the number ";
    cin >> n;
    realNumber=n;

    while (n>0)
    {
        armstrong = armstrong + pow(n%10,3);
        n=n/10;
    }
    if(armstrong==realNumber)
    cout <<"This number is armstrong ";

    else
    cout <<"This is not armstrong ";

    return 0;    
}

// 0 1 153 370 371 407
// armstrong no. is a number that is equal to the sum of cubes of its digit