#include <iostream>
using namespace std;

int main()
{
    int star;
    cout << "Enter the no of star ";
    cin >> star;

    for (int i = star; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
        
    }
    
}