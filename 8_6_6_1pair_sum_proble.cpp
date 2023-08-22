// Time complexcity is n
#include <iostream>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp;
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] <<" ";
    }
    cout<<endl;

    int start =0 ,end=n;
    while(start < end)
    {
        int sum = arr[start] + arr[end];

        if(sum==k){
            cout<<start<<" "<<end<<endl;
            return true;
        }
        else if (sum>k){
            end-=1;
        }
        else{
            start+=1;
        }
    } 
    return false;
}

int main()
{
    int arr[] = {2,8,7,11,14,22,21,20};
    for (int i = 0; i < 8; i++)
    {
        cout <<arr[i] <<" ";
    }
    cout<<endl;
    
    int k = 31;
    cout << pairSum(arr,8,k);

    return 0;
}