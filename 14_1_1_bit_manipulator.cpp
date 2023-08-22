#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

using namespace std;
int main()
{
    cout << getBit(5,2) <<endl;

    return 0;
}