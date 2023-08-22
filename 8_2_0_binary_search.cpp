#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n)
{
    int l=0, h=n;
    while(l<=h)
    {
        int mid=(l+h)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array value "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key ;
    cout << "Enter the key ";
    cin >> key;

    cout << "Position of key is "<<binarySearch( arr, key, n);

    return 0;
}