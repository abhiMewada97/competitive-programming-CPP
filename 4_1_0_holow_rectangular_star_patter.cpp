#include <iostream>
using namespace std;

int main(){
    int row, colom;
    cout << "Enter row and colom ";
    cin >> row >> colom;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colom; j++)
        {
            if ( i==1 || i==row || j==1 || j==colom)
            {
                cout << " *";
            }
            else
            cout << "  ";
        }
        cout << "\n";
        
    }
    
}