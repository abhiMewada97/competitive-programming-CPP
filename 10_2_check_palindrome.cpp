#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter the size of array ";
    cin >>n;
    char ch[n+1];
    cout <<"Enter the character ";
    cin >> ch;

    bool check =1;
    for(int i=0; i<n/2; i++)
    {
        if(ch[i] != ch[n-1-i])
        {
            check=0;
            break;
        }
    }

    if(check){
        cout <<"It is a palindrome "<<endl;
    }
    else{
        cout <<"It is not a palindrome "<<endl;
    }

    return 0;    
}