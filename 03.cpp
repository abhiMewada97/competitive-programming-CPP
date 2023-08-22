#include <iostream>
using namespace std;

class Distance
{
    int feet,inches;

    public:
    void setNumber(int x, int y){
        feet = x;
        inches = y;
    }
    friend void sumDistance(Distance o1, Distance o2);    
};

void sumDistance(Distance o1, Distance o2){
    int F,I;
    F = (o1.feet + o2.feet);
    I = (o1.inches + o2.inches);
    while (I>=12)
    {
        F++;
        I=I-12;
    }
    cout<<"Sum "<< F << " feet "<< I <<" inches "<<endl;
}
int main()
{
    Distance d1,d2; 
    d1.setNumber(1,11);
    d2.setNumber(3,5);
    sumDistance(d1,d2);  
    return 0;
}