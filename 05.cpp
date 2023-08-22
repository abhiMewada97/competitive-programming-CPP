#include <iostream>
using namespace std;

void area(int l, int b){
    int area = l*b;
    cout << "area of rectangle : " <<area <<endl;
}

void area(float l, float b){
    float area = l*b;
    cout << "area of rectangle : " <<area <<endl;
}

int main()
{
    
    area(2, 4);
    area(2.0f, 5.1f);

    return 0;
}