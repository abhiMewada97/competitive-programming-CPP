#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout <<"Enter value of n1, n2 and n3 ";
    cin >>n1 >>n2 >>n3;

    int matrix1[n1][n2], matrix2[n2][n3];
    
    cout<<"Enter the value of matrix 1 "<<endl;
    for (int i = 0; i < n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout<<"Enter the value of matrix 2 "<<endl;
    for (int i = 0; i < n2; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            ans[i][j]=0;
        }
    }

    cout<<"Product of two matrix "<<endl;

    for(int i =0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }            
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cout << ans[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;    
}