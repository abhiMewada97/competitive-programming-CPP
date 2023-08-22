#include <iostream>
using namespace std;

int index(int arr[], int n);

int main()
{
    int n;
    cout <<"Enter the size of array ";
    cin >>n;
    int arr[n];
    cout <<"Enter the "<<n <<" enelement ";

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    cout<< index(arr,n);

    return 0;    
}

int index(int arr[], int n)
{
    int index =1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                return index;
            }
        }
        index++;
    }
    return -1;
}