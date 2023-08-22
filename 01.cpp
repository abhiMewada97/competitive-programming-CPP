#include <iostream>
using namespace std;

void swapValue(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n1,n2;
    cout <<"Enter two value ";
    cin >> n1 >>n2;

    cout<< "Befor swap the value n1 "<<n1 <<" and n2 " <<n2 <<endl;

    swapValue(&n1,&n2);

    cout<< "After swap the value n1 "<<n1 <<" and n2 " <<n2 <<endl;

    return 0;
}