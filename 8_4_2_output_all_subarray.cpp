#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array ";
    cin >> size;
    int arr[size];

    cout<< "Enter the element ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[j]<<" ";
        }
    }
    return 0;
    
}