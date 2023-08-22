#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1st way to declare string
    // string st = "abhishekMewada";
    // cout <<st;

    // 2nd way to declare string
    // string st;
    // cin >>st;
    // cout <<st;

    // 3rd way to declare string
    // string st1(5,'n');
    // cout << st1;

    // 4th way to declare string
    string st;
    getline(cin, st);
    cout <<st;
    

    return 0;
}