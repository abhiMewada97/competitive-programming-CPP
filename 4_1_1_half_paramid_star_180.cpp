#include <iostream>
using namespace std;

int main()
{
    int n,k,j,b=0,u;
    cout << "Enter the value ";
    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<=n-i){
                cout<<" ";
            }

            else{
                cout<<"*";
            }
        }
        
            cout <<"\n";
        
    }
    
}