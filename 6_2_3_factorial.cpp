#include <iostream>
using namespace std;

int fact(int value){

    int factorial =1;
    for (int i = 1; i <= value; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int value,ans;
    cout <<"Enter the number whose factorial do you want ";
    cin >> value;

    ans = fact(value);
    cout <<"The factorial of "<<value <<" is " <<ans;

    return 0;
}