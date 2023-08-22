// maximum subarray sum = Total sum of array - sum of non-contributing elements
#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{
    int sumMax = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum<0){
            sum = 0;
        }

        sumMax = max(sumMax, sum);
    }
    return sumMax;
}

int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin >>n;
    int arr[n];
    
    cout << "Enter the "<<n<<" element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int totalSum;
    int wrapSum;
    int nonWrapSum;
    nonWrapSum = kadane(arr,n); //this will return deifferent value
    
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    
    wrapSum = totalSum + kadane(arr,n);
    // wrapSum = totalSum - nonWrapSum;  // we can't write like this because this is return different value 
    
    cout <<"Maximum sum is "<<max(wrapSum,nonWrapSum);
    return 0;
}