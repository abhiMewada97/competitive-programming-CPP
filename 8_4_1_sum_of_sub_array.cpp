#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of arr ";
    cin >> n;
    int arr[n];

    cout << "Enter the element " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
        // cout << endl;
        
    }

    return 0;    
    
}