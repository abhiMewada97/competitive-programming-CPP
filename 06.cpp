#include <iostream>
using namespace std;

class heavier{ 
    int N;

    public:
    heavier(int x){
        N=x;
    }
    void operator >(heavier obj){
        if (N>obj.N)
        {
            cout <<N << " is heavier ";
        }
        else
        {
            cout <<obj.N << " is heavier ";
        }
    }
};

int main()
{
    heavier h1(20),h2(25);
    h1>h2;
    return 0;
}