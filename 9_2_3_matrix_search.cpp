#include "bits/stdc++.h"
using namespace std;

int main()
{
    int r,c;
    cout <<"Enter value of row and column ";
    cin >>r >>c;

    int target ;
    cout<<"Enter the target ";
    cin >>target;
    
    int matrix[r][c];

    cout<<"Enter the value of matrix "<<endl;
    for (int i = 0; i < r; i++){
        for(int j=0; j<c; j++){
            cin >> matrix[i][j];
        }
    }

    int row=0,col=c-1;
    bool found = false;
    
    while(row < r && col >= 0)
    {
        if(target == matrix[row][col]){
            found = true;
        }

        if(matrix[r][c] > target){
            col--;
        }
        else{
            row++;
        }
    }

    if(found){
        cout<<"Element is found ";
    }
    else{
        cout<<"Element does not exist ";
    }

    return 0;    
}