#include <iostream>
using namespace std;

int main()
{
    int start,end;
    cout << "Enter two number \n";
    cin >> start >> end;

    for(int i=start; i<=end; i++){
        int j;
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j)
                cout << i << " ";
    }
    return 0;
}