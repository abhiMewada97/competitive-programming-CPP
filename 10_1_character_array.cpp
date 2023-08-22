#include <iostream>
using namespace std;

int main()
{
    char ch[20] = "apple";
    cout <<ch <<endl;

    int i=0;
    while(ch[i] != '\0')
    {
        cout<<ch[i]<<endl;
        i++;
    }

    // char ch[20];
    // cin >>ch;
    // cout <<ch;

    return 0;    
}