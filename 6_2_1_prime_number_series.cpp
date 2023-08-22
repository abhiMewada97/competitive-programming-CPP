#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < sqrt(num)+1; i++)
    {
        if(num%i==0){
        return false;
        }
    }
    return true;
    
}

int main(){
    int n1,n2;
    cout << "Enter two number ";
    cin >> n1 >> n2;
    for (int i = n1; i < n2; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    

    return 0;
}