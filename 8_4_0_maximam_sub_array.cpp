#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size ";
    cin >> n;
    int arr[n];

    cout<<"Enter the element ";

    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int mx=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx)
        {
            mx=arr[i];
        }
            cout<<mx<<" ";
        
    }
    

    return 0;
}