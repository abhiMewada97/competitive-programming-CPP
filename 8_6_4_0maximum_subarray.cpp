//kadane's algorithm
// batter than brute force approach
// time complexcity n square
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
    int sumMax =  INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum=sum+arr[j];
            if (sum<0)
            {
                sum=0;
            }
        sumMax = max(sumMax,sum);
        }
    }
    cout <<"Maximum sum is "<<sumMax;
    

    return 0;
}