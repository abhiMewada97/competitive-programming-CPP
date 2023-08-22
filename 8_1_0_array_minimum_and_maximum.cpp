#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];

    cout << "Enter the array element " <<endl;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > maxNumber)
        // {
        //     maxNumber = arr[i];
        // }
        maxNumber = max(maxNumber,arr[i]);   // The above code we can write like this also
        
        // if (arr[i] < minNumber)
        // {
        //     minNumber = arr[i];
        // }
        minNumber = min(minNumber,arr[i]);
    }

    cout<<"Maximum no is "<<maxNumber<<endl;
    cout<<"Minimum no is "<<minNumber<<endl;
    

    return 0;
}