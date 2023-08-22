// time complexcity n 
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
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(sum<0){
            sum = 0;
        }

        if(sumMax < sum){
            sumMax = sum;
        }
    }
    cout << sumMax;
    

    return 0;
}