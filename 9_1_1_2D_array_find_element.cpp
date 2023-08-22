#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout <<"Enter the number of row and colom ";
    cin >>r >>c;

    int arr[r][c];

    cout <<"Enter the element "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cout<<"Which number do you want to find ";
    cin>>x;

    bool flag = false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (x==arr[i][j])
            {
                cout <<i <<" "<<j <<endl;
                flag = true;   
            }
        }
    }

    if (flag){
        cout <<"Element is found "<<endl;
    }
    else{
        cout <<"Element is not found "<<endl;
    }

    return 0;    
}