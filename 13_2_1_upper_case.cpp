#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string st1 = "abhishek";

    // to upper case 

    for (int i = 0; i < st1.size(); i++)
    {
        if (st1[i] >= 'a' && st1[i] <= 'z')
        {
            st1[i] -= 32;
        }
    }
    cout << st1 <<endl;

    // to lower case

    string st2 = "mewada";

    transform(st2.begin(), st2.end(), st2.begin(), :: toupper);
    cout <<st2 <<endl;

    transform(st2.begin(), st2.end(), st2.begin(), :: tolower);
    cout <<st2;
    return 0;
}