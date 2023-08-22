// Time complexcity is n squre
#include <iostream>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = arr[i]+arr[j];
            if (k==sum)
            {
                cout <<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {2,1,18,11,14,16,20,21};
    int k = 31;
    cout << pairSum(arr,8,k);

    return 0;
}