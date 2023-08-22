#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1="abc";
    string st2="abc";

    // cout <<st1.compare(st2);

    if(!st1.compare(st2))
    {
        cout <<"Both are equal ";
    }

    return 0;
}