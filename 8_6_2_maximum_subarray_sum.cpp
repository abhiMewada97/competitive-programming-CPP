//brute force approach
#include <iostream>
#include <climits>
using namespace std;

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
    int sumMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            sumMax = max(sumMax,sum);
        }
    }
    cout <<"Maximum sub array is " <<sumMax;
    return 0;
}