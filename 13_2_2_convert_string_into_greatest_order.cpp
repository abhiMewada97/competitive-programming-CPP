#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string st = "87644143";
    sort(st.begin(), st.end(),greater<int>());
    cout <<st <<endl;

    return 0;
}