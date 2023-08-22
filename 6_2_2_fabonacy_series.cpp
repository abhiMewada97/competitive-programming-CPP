#include <iostream>
using namespace std;

void fib(int n1){

    int nextTerm, t1=0, t2=1;

    for (int i = 1; i <= n1; i++)
    {
        cout << t1 <<" ";
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}

int main()
{
    int n1;
    cout << "Enter the number to fabonacy series ";
    cin >> n1;

    fib(n1);    

    return 0;
}