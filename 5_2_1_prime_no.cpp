#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout <<"Enter the no. ";
    cin >> n;

    int flage = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout << "Not-prime number";
            flage =1;
            break;
        }
    }
        if(flage==0){
            cout << "Prime number ";
        }

        return 0;
    
}