#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1,2,3}, 
                        {4,5,6}, 
                        {7,8,9}};

    int r=3, c=3;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<r; i++)
    {
        for(int j=i; j<c; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}